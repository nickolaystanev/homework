module Lights
	def turn_Lights_on
	@on=true
	end
	def turn_Lights_off
	@on=false
	end	
	def lights_on?
		@on
	end
end
module Fuel
	module Vehicles #kato go vikame pak mergva dvata ednakvi modula
	class VehicleBase
		def initialize speed ,fuelPS,fuelTank
			@fuelPS=fuelPS
			@fuelTank=fuelTank
			@maxTravelling=fuelTank/fuelPs
			@speed=speed #@private promenliva
			@traveled=0
		end
		def start(time)
			@time_start=Time.now
			turn_Lights_on
			while(maxTravelling>0)
				time-=1
				sleep(1);
				maxTravelling-=1
				if MaxTravelling<=0
					puts "you are out of fuel"
					self.stop
				end
				if time<=0
					break
				end
			end
			sleep(time)
		end
	
	end
end
	

end

module Vehicles
	class VehicleBase
		def initialize speed#konstruktor
			@speed=speed #@private promenliva
			@traveled=0
		end
		
		def print_speed
			puts @speed
		end	
		def start
		@time_start=Time.now #vzima realnooto vreme ot kompa
		end
		def travel
			puts "Kolko shte putuvate"
			gets distance
			distance=distance.to_f
			start
			while (i<distance)
				if (Time.now-@time_start)*@speed
			end
		end
		def stop
			@traveled +=@speed*(Time.now-@time_start)
		end
		def print_traveled
			puts @traveled
		end
		def hong
			puts horn+"mother fucker"
		end
		private
			def horn
				"BEEEEEP BEEEEP"
			end
			
	end
end	
	class Car < VehicleBase #unasledqvane na klas
	include Lights
	include Fuel
		def initialize
			super()
		end	
		def stop
			@traveled +=@speed*(Time.now-@time_start)
			turn_Lights_off
		end
		def honk
			puts"#{self.class.name} #{horn} motherfucker"
		end
	end
	class Train <VehicleBase
		def initialize
			super(1)
		end	
		def horn
			puts "Choo Choo"
		end
		
	end
	class Bike<VehicleBase
		def initialize
			super(12)
		end
	end
	
end

module Vehicles #kato go vikame pak mergva dvata ednakvi modula
	class VehicleBase
		def start
			@time_start=Time.now
			turn_Lights_on
		end
	
	end
end


	car=Vehicles::Car.new(5)
	bike=Vehicles::Bike.new(12)
	train=Vehicles::Train.new
	train.horn
	car.print_speed
	bike.print_speed
	car.start(5)
	sleep(5)
	car.stop
	puts car.lights_on?	
	car.print_traveled
	car.turn_Lights_on
	car.turn_Lights_off
	puts car.lights_on?
	car.hong
