require 'csv'
def set_arr(array_imena)
	for k in 0..28
        array_imena[k]=0
	end
end
def process_file_with_csv(array_imena)
	count=0
        for i in 1..29 
			CSV.foreach(i.to_s+".csv","r") do |row|
				count=row[1].to_i
                array_imena[count-1]+=1;
			end
		end
end
def get_arr(array_imena)
	for k in 0..28
        puts array_imena[k]
	end
end
def get_popular(array_imena)
	temp=Array.new(29)
	for k in 0..28
        temp[k]=array_imena[k]
	end	
	max=temp[0]
	nomer=0
	for k in 1..28
		if max<temp[k]
			max=temp[k]
			nomer=k
		end
	end
	nomer+=1
	puts "nai-svurzaniq chovek e "
	puts nomer.to_s+" nomer"
end
def get_for_ever_alone(array_imena)
		temp=Array.new(29)
	for k in 0..28
        temp[k]=array_imena[k]
	end	
	min=temp[0]
	nomer=0
	for k in 1..28
		if min>temp[k]
			min=temp[k]
			nomer=k
		end
	end
	nomer+=1
	puts "nai-malko svurzaniq chovek e "
	puts nomer.to_s+" nomer"
end

def secret_lover(temp)
        for i in 1..29 
			temp=0
			count=0
			CSV.foreach(i.to_s+".csv","r") do |row|
				count=row[1].to_i
                temp[count-1]+=1;
			end		
			max=temp[0]
			nomer=0
			for k in 1..28
				if max<temp[k]
					max=temp[k]
					nomer=k
				end
			end
			print i
			print " nomer e svurzan sus "
			print nomer
			print" nomer "
			puts " "
			set_arr(temp)
		end

end

array_imena=Array.new(29)
temp=Array.new(29)
set_arr(array_imena)
set_arr(temp)
get_arr(array_imena)
process_file_with_csv(array_imena)
get_arr(array_imena)
get_popular(array_imena)
get_for_ever_alone(array_imena)
secret_lover(temp)