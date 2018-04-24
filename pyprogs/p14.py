def break_words(stuff):
    return stuff.split(' ')
def sort_words(words):
    return sorted(words)
def print_first_word(words):
    return words.pop(0)
def print_last_word(words):
    return words.pop(-1)
def sort_sentence(sentence):
    return sort_words(break_words(sentence))
