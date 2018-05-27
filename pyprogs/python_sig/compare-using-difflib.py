import sys
import difflib

d = difflib.Differ()

f1 = open(sys.argv[1])
f2 = open(sys.argv[2])

f1_lines = f1.readlines()
f2_lines = f2.readlines()

difference = d.compare(f1_lines, f2_lines)
print('\n'.join(difference))

f1.close()
f2.close()