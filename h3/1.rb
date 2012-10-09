require 'csv'
def process_file_with_csv
        result 0
        CSV.foreach("directory to file/file","r") do |row|
                result=result +row[1].to_i
        end
        p result
end
def languages_homework
	perl=0
	python = 0
	ruby = 0
	CSV.foreach("directory to file/file","r") do |row|
		if row[6]=ruby
			ruby=ruby +row[2].to_i		
		else if row[6]=python
			python=python +row[2].to_i	
		else if row[6]=perl
			perl=perl +row[2].to_i
		end		
	p ruby
    p python
	p ruby
end

process_file_with_csv
languages_homework