class Object 
	def method
	puts " something in method"
	end
	
	def var=(v)
		@var=v
	end				#nachin na class promenlivi
	def var
		@var ||= "aljfhnkjlngdkjfj" #ekvivalen na konstruktor po podrazbirane
	end	
	
	attr_accessor :var1     #smart nachin raven na gornite dva methoda
	private
		def method_private
	
		end
	# vsichko nadolu e private dokato ne napoishem public
	public
	def method_public
	
	end
end
	
o = Object.new
o.method
o.send("method")#moje i bez skobi
o.send:method#sushtata rabota,moje da polzvame private(kogato polzvame send)
o.var=10
o.var1=5

