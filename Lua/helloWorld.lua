-- Hello world lua code by Mushfiqur Rahman Abir
-- Date: 2023-04-23

print ("Enter H for hello world or E for exit: ")
local input = io.read()

if input == "H" then
    print ("Hello world")
elseif input == "E" then
	    print ("Exit")
else
    print ("Invalid input")
end