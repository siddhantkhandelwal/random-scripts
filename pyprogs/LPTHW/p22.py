class Song(object):
    def __init__ (self, lyrics):
        self.lyrics = lyrics
    def sing(self):
        for line in self.lyrics:
            print line

bday = Song(["jkfsdjfsdfhjsdfsfd", "fsdfsdfdsfsdffsds", "fdfsfgwrwrer   wr  ", "ioreweufkjsdbnvmnkjlfsdppwe"])
bday.sing()
