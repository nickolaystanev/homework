module TimeConversions
	def seconds
		self
	end
	def minutes
		seconds*60
	end
	def hours
		minutes*60
	end
	def days
		hours*12
	
	end
	def  weeks
		days*7
	end
	alias :day:days
	alias :minute:minutes
	alias :hour:hours
	alias :week:weeks
end
class Float
	include TimeConversions
end
class Fixnum
	include TimeConversions
end
class Bignum
	include TimeConversions
end

module HelloWorld
	def hello_world
		"Helloworld"
	end

end
class String
	extend HelloWorld	
end



puts 2.days+3.minutes+10.hours+52.seconds
