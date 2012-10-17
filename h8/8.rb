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

def my_secret_lover(temp)
	set_arr(temp)
	for nomer in 0..28
		count=0
		your_lover=0
		max=0
		for i in 1..29
			CSV.foreach(i.to_s+".csv","r") do |row|
				count=row[1].to_i
				if (count==nomer+1) && ((count+1)<30)
					temp[count]+=1
				end
			end
	
		end	
		nomer_min=0
		min=0
		nomer_max=0
		max=temp[0]
		for z in 1..28
			if max<temp[z]
				max=temp[z]
				nomer_max=z
			end
		end
		for z in 1..28
			if min>temp[z]
				min=temp[z]
				nomer_min=z
			end
		end			
		puts (nomer+1).to_s+"nomer e predal list nai mnogo na nomer"+(nomer_max).to_s
		puts (nomer+1).to_s+"nomer e predal list nai malko na nomer"+(nomer_min+1).to_s
	end

end
def your_secret_lover(temp)
	set_arr(temp)
	for nomer in 0..28
		count=0
		your_lover=0
		max=0
		for i in 1..29
			CSV.foreach(i.to_s+".csv","r") do |row|
				count=row[1].to_i
				if (count==nomer+1) && ((count-1)>=0)
					temp[count-1]+=1
				end
			end
	
		end	
		nomer_min=0
		min=0
		nomer_max=0
		max=temp[0]
		for z in 1..28
			if max<temp[z]
				max=temp[z]
				nomer_max=z
			end
		end
		for z in 1..28
			if min>temp[z]
				min=temp[z]
				nomer_min=z
			end
		end		
		puts (nomer+1).to_s+"nomer e poluchaval list nai mnogo ot nomer"+(nomer_max+1).to_s
		puts (nomer+1).to_s+"nomer e poluchaval list nai malko ot nomer"+(nomer_min+1).to_s
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
your_secret_lover(temp)
my_secret_lover(temp)