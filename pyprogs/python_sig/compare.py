import sys

f1 = open(sys.argv[1])
f2 = open(sys.argv[2])

for f1_line, f2_line in zip(f1.readlines(), f2.readlines()):
    if f1_line != f2_line:
        print("-%s" % f1_line)
        print("+%s" % f2_line)

f1.close()
f2.close()
