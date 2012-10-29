
# encoding: UTF-8
require 'csv'
	i=1
CSV.open('output.csv', 'w') do |writer|
		CSV.foreach("YellowBeltResults_origin.csv") do |row|
			if row[1].eql? "11 b" ==true
				temp_string="11 Á"
				writer << [temp_string]
			else
				writer << [row[1]]
			end	
	error="No Link to Repository"
			temp_string=row[5]
			if (temp_string.eql? nil)
				writer << [error," "]
			elsif(temp_string.eql? "-")
				writer << [error," "]
			elsif(temp_string.eql? "--")
				writer << [error]
			else
				writer << [row[5]]
			end	
			writer <<[row[2]]
		end
end
CSV.foreach("output.csv") do |line|
	p line
end