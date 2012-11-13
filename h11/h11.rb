# encoding: UTF-8
require 'csv'
def my_class
	i=1
	CSV.open("output.csv","w") do |csv|
		CSV.foreach("YellowBeltResults_origin.csv") do |row|
			if (row[1].eql? "11 b") ==true
				temp_string="11 B"
				csv << [temp_string]
			elsif (row[1].eql? "11b") ==true
				temp_string="11 B"
				csv << [temp_string]
			elsif (row[1].eql? "11B") ==true
				temp_string="11 B"
				csv << [temp_string]
			elsif (row[1].eql? "11 Б") ==true
				temp_string="11 B"
				csv << [temp_string]
			elsif (row[1].eql? "11Б") ==true
				temp_string="11 B"
				csv << [temp_string]
			elsif (row[1].eql? "11б") ==true
				temp_string="11 B"
				csv << [temp_string]
			elsif (row[1].eql? "11 a") ==true
				temp_string="11 A"
				csv << [temp_string]
			elsif (row[1].eql? "11a") ==true
				temp_string="11 A"
				csv << [temp_string]
			elsif (row[1].eql? "11A") ==true
				temp_string="11 A"
				csv << [temp_string]
			elsif (row[1].eql? "11 А") ==true
				temp_string="11 A"
				csv << [temp_string]
			elsif (row[1].eql? "11А") ==true
				temp_string="11 A"
				csv << [temp_string]
			elsif (row[1].eql? "11а") ==true
				temp_string="11 A"
				csv << [temp_string]				
			else
				csv << ["VSP(very stupid person)"]
			end	
		end
	end
	CSV.foreach("output.csv") do |row|
		puts row[0]
	end
end	
def my_repository
	error="No Link to Repository"
	CSV.open("output.csv","w") do |csv|
		CSV.foreach("YellowBeltResults_origin.csv") do |row|
			temp_string=row[5]
			if (temp_string.eql? nil)
				csv << [error," "]
			elsif(temp_string.eql? "-")
				csv << [error," "]
			elsif(temp_string.eql? "--")
				csv << [error]
			else
				csv << [row[5]]
			end	
		end
	end
	CSV.foreach("output.csv") do |row|
		puts row[0]
	end

end
def my_number
	CSV.open("output.csv","w") do |csv|
		CSV.foreach("YellowBeltResults_origin.csv") do |row|
			csv <<[row[2]]
		end
	end
	CSV.foreach("output.csv") do |row|
		puts row[0]
	end
end
my_class
my_repository
my_number