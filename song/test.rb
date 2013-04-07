class Song
  attr_reader :name, :artist, :album

  def initialize(name, artist, album,subalbum,tags)
    @name = name
    @artist = artist
    @album = album
    @subalbum=subalbum
    @tags=tags
  end
end

class Collection
  include Enumerable

def initialize(song_name , artist_tags )
		@songs=Array.new
			song_name.split('/n')
			song_name.each do |item|
				temp=item.split('.')
				temp1=temp[2].split(',')
				if temp1.size()<2
					temp_song=Song.new(temp[0].strip ,temp[1].strip ,temp[2].strip , nil , cur_tags(artist_tags ,temp)+temp[2].strip)
				else
					temp_song=Song.new(temp[0].strip,temp[1].strip ,temp1[0].strip , temp1[1].strip , cur_tags(artist_tags ,temp)+temp1[0].strip+temp1[1])
				end
				@songs.push(temp_song)
			end
	end
	def cur_tags(artist_tags ,temp)
		if temp[1].strip=="John Coltrane"
			tags="saxophone "+temp[3].strip+" "
		elsif temp[1]=="Bach"
			tags="piano polyphony "+temp[3].strip+" "
		else tags=temp[3].strip+" "
		return tags
		end
	end

  def initialize(songs)
    @songs = songs
  end

  def filter(criteria)
    Collection.new @songs.select { |song| criteria.met_by? song }
  end

  def artists
    @songs.map(&:artist).uniq
  end

  def names
    @songs.map(&:name).uniq
  end

  def albums
    @songs.map(&:album).uniq
  end

  def adjoin(other)
    Collection.new songs | other.songs
  end

  def each(&block)
    @songs.each(&block)
  end

  protected

  def songs
    @songs
  end
end

module Criteria
  def self.name(name)
    NameMatches.new name
  end

  def self.artist(artist)
    ArtistMatches.new artist
  end

  def self.album(album)
    AlbumMatches.new album
  end

  class Criterion
    def &(other)
      Conjunction.new self, other
    end

    def |(other)
      Disjunction.new self, other
    end

  end

  class NameMatches < Criterion
    def initialize(name)
      @name = name
    end

    def met_by?(song)
      song.name == @name
    end
  end

  class ArtistMatches < Criterion
    def initialize(artist)
      @artist = artist
    end

    def met_by?(song)
      song.artist == @artist
    end
  end

  class AlbumMatches < Criterion
    def initialize(album)
      @album = album
    end

    def met_by?(song)
      song.album == @album
    end
  end

  class Conjunction < Criterion
    def initialize(left, right)
      @left = left
      @right = right
    end

    def met_by?(song)
      @left.met_by?(song) and @right.met_by?(song)
    end
  end

  class Disjunction < Criterion
    def initialize(left, right)
      @left = left
      @right = right
    end

    def met_by?(song)
      @left.met_by?(song) or @right.met_by?(song)
    end
  end

  class Negation < Criterion
    def initialize(criterion)
      @criterion = criterion
    end

    def met_by?(song)
      not @criterion.met_by?(song)
    end
  end
end
songs="My Favourite Things.          John Cohash eacltrane.      Jazz, Bebop.        popular, cover
Greensleves.                  John Coltrane.      Jazz, Bebop.        popular, cover
Alabama.                      John Coltrane.      Jazz, Avantgarde.   melancholic
Acknowledgement.              John Coltrane.      Jazz, Avantgarde.
Afro Blue.                    John Coltrane.      Jazz.               melancholic
'Round Midnight.              John Coltrane.      Jazz.
My Funny Valentine.           Miles Davis.        Jazz.               popular
Tutu.                         Miles Davis.        Jazz, Fusion.       weird, cool
Miles Runs the Voodoo Down.   Miles Davis.        Jazz, Fusion.       weird
Boplicity.                    Miles Davis.        Jazz, Bebop.
Autumn Leaves.                Bill Evans.         Jazz.               popular
Waltz for Debbie.             Bill Evans.         Jazz.
'Round Midnight.              Thelonious Monk.    Jazz, Bebop.
Ruby, My Dear.                Thelonious Monk.    Jazz.               saxophone
Fur Elise.                    Beethoven.          Classical.          popular
Moonlight Sonata.             Beethoven.          Classical.          popular
Pathetique.                   Beethoven.          Classical.
Toccata e Fuga.               Bach.               Classical, Baroque. popular
Goldberg Variations.          Bach.               Classical, Baroque.
Eine Kleine Nachtmusik.       Mozart.             Classical.          popular, violin"
collection = Collection.new songs
collection.names
