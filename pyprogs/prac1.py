print "Let's practise everything!"
print "You\'d need to know \'bout escapes with \\ that do \nnewline and \ttabs."

poem = '''
\tThe Lovely World
with logic so lovely planted
cannot discern \n the needs of love
nor comprehend passion from intuition
and requiures an explanation
\n\t\twhere there is none.
'''

print '____________'
print poem
print '____________'

five = 10-2+3-6

print "This should be %d" %five

def secret_formula(started):
    jelly_beans = started*500
    jars=jelly_beans/100
    crates=jars/100
    return jelly_beans, jars, crates

start_point = 10000

beans, jars, crates = secret_formula(start_point)
