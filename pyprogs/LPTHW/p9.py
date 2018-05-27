from sys import argv
script, filename = argv
txt=open(filename)
print filename
print txt.read()
txt.close()
file_again=raw_input("file name again ")
txt_again=open(file_again)
print txt_again.read()
txt_again.close()
