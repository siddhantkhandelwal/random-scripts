from sys import argv
script, filename = argv
txt=open(filename, 'w')
l1=raw_input("1: ")
l2=raw_input("2: ")
l3=raw_input("3: ")
txt.write(l1+"\n"+l2+"\n"+l3+"\n")
txt=open(filename)
print txt.read()
txt.close()
