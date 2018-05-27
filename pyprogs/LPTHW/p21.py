from sys import argv
from os.path import exists

script, file1, file2 = argv

in_file=open(file1)
indata=in_file.read()

print indata
print 'Length of the file is: %d' %len(indata)

print 'Checking if the output file exists? %r' %exists(file2) 

out_file = open(file2, 'w')

out_file.write(indata)

in_file.close()
out_file.close()
