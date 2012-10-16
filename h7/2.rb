class AirPlane
def print_seats(seats)
	k=0
	i=0
	for k in 0..27
		for i in 0..6
			print(seats[i][k]);
			if i==2
				print(" ")
				end
		end
		print (" ")
	end

end
def addSeats(seats)
		mesta =0
		colon =0
		roll=0
		random = Random.new
		random.rand(0...3)
		while mesta<163 do
			random.rand(0...3)	
		# grupa ot 1
			if random==1 
				for colon in 0..26
					for roll in 0..5
						if seats[roll][colon]==0
							seats[roll][colon]=1
						end
					end
				end
				mesta+=1
		end
		# krai grupa ot 1
		# grupa ot 2
			if random == 2
				colon=0
				for colon in 0..27
				roll=0
					for roll in 0..3
						if(seats[roll*2][colon]==0)||(seats[roll*2+1][colon]==0)
							seats[roll*2][colon]=1
							seats[roll*2+1][colon]=1
						end
					end
				end
				mesta+=2
			end
			#krai grupa ot 2
			#grupa ot 3
			if random == 3
				colon=0
				for colon in 0..26
					roll=0
					while roll<6 do
						if(seats[roll][colon]==0) || (seats[roll+1][colon]==0) || (seats[roll+2][colon]==0)
							seats[roll][colon]=1
							seats[roll+1][colon]=1
							seats[roll+2][colon]=1
						end
						roll=roll+3
					end
				end
				mesta+=3
			end
			#krai grupa ot 3
		end	
	
	end
end
seats= Array.new(6) { Array.new(27) }
plane=AirPlane.new
plane.addSeats(seats)
plane.print_seats(seats)