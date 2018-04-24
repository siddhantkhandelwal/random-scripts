class Parent(object):
    def altered(self):
        print 'Parent altered()'

class Child(Parent):
    def altered(self):
        print 'Child before parent altered()'
        super(Child, self).altered()
        print 'Child After Parent altered()'  

dad = Parent()
son = Child()

dad.altered()
son.altered()
