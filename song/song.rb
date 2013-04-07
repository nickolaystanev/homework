class Song
	def initialize(name , artist ,genre , subgenre ,tag)
		@sname=name
		@sartist=artist
		@sgenre=genre
		@ssubgenre=subgenre
		@stags=tag
	end
	def name
		 @sname
	end
	def artist
		@sartist
	end
	def genre
		 @sgenre
	end
	def subgenre
		@ssubgenre
	end
	def tag
		@stags
	end
	def start_with?(some_string)
		temp_name=@sname[0..some_string.size()]
		if temp_name.chop == some_string	
			puts @sname
		end	
	end
end
class Collection
	include Enumerable
	include Criteria
	def artists
    puts @my_collection.map(&:artist).uniq
  end
  def names
    @songs.map(&:name).uniq
  end
	def initialize(song_name , artist_tags )
		@my_collection=Array.new
			song_name.split('/n')
			song_name.each do |item|
				temp=item.split('.')
				temp1=temp[2].split(',')
				if temp1.size()<2
					temp_song=Song.new(temp[0].strip ,temp[1].strip ,temp[2].strip , nil , cur_tags(artist_tags ,temp)+temp[2].strip)
				else
					temp_song=Song.new(temp[0].strip,temp[1].strip ,temp1[0].strip , temp1[1].strip , cur_tags(artist_tags ,temp)+temp1[0].strip+temp1[1])
				end
				@my_collection.push(temp_song)
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
	def create_hash
		@artist = Hash.new
		artists=Array.new
		@my_collection.each do |song|
			if !(artists.include? song.artist)
				artists.push(song.artist)
			end
		end
		artists.each do |cur_artist|
			temp=Array.new
			@my_collection.each do |song|
				if cur_artist==song.artist
				temp.push(song)
				end
			end
			@artist[cur_artist]=temp
		end
		
	end
	def find (criteria)
	criteria.split(':')
		case 
		when criteria[0]=="filter"
			@my_collection.each do |song|
			song.start_with?(criteria[2])
			end
		end
	end
	def filter(criteria)
    Collection.new @my_collection.select { |song| criteria.matches? song }
   end
end

module Criteria
  def self.name(name)
    NameMatches.new name
  end

  def self.artist(artist)
    ArtistMatches.new artist
  end

  def self.album(genre)
    GenreMatches.new genre
  end
  class NameMatches 
    def initialize(name)
      @sname = name
    end

    def met_by?(song)
      song.name == @sname
    end
  end

  class ArtistMatches 
    def initialize(artist)
      @sartist = artist
    end

    def met_by?(song)
      song.artist == @sartist
    end
  end

  class GenreMatches 
    def initialize(genre)
      @sgenre = genre
    end

    def met_by?(song)
      song.album == @sgenre
    end
  end
end


song_name="My Favourite Things.          John Cohash eacltrane.      Jazz, Bebop.        popular, cover
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

artist_tags={
	'John Coltrane' => %w[saxophone],
 	'Bach' => %w[piano polyphony]
}
collection= Collection.new song_name , artist_tags
collection.create_hash
collection.filter Criteria.name("Toccata e Fuga") 
