#Технологична училище електронни системи към ТУ -София http://www.elsys-bg.org/

# 11 А

# 20

#Николай Василев Станев

#Обработка на CSV документ със скриптов език  
require 'csv'
def process_file_with_csv
        result 0
        CSV.foreach("directory to file/file","r") do |row|
                result=result +row[1].to_i
        end
        p result
end

process_file_with_csv