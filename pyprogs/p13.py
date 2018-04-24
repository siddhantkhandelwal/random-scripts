print "You\'d need to know \'bout escapes with \\ that do \n newline and \t tabs"
poem = '''
\t The Lovely world
aaaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaa
aaaaaaaaaaaa
'''
print "__________________"
print poem
print "__________________"

five = 10-2+3-6
print "This should be five %s" % five
def secret_formula(s):
    jb=s*500
    j = jb / 1000
    c = j / 100
    return jb, j, c
sp=10000
beans, jars, crates = secret_formula(sp)
print "With a starting point of: %d" % sp
print "We'd have %d beans, %d jars, and %d crates." % (beans, jars, crates)
sp = sp / 10
print "We can also do that this way:"
print "We'd have %d beans, %d jars, and %d crates." % secret_formula(sp)
