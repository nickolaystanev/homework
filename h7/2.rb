
def zerolator (seats)
	for col in 0..26
		for line in 0..5
			seats[line][col] = 0
		end
	end
end
def print_seats(seats)
	k=0
	i=0
	for k in 0..26
		for i in 0..5
			print(seats[i][k])
			if i==2
				print(" ")
				end
		end
		puts "\n" 
	end

end
def random_group()
	return Random.rand(3)+1
end
def addSeats(seats)
		mesta =0
		colon =0
		roll=0
		random=0
		while mesta<163 
			random=random_group()	
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
				for colon in 0..26
				roll=0
					for roll in 0..2
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
					while roll<6 
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
seats= Array.new(6){ Array.new(27) }
zerolator(seats)
print_seats(seats)
addSeats(seats)
print_seats(seats)