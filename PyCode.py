import collections
import re
import string
from collections import Counter
import _collections_abc
from typing import KeysView

def printsomething():
   
   f = open('Produce.txt', 'r')
   file_contents = f.read()
   sentence = file_contents
   words = sentence.split()
   word_counts = collections.Counter(words)
   for word, count in sorted(word_counts.items()):
    print('%s have been purchased %d time%s.' % (word, count, "s" if count > 1 else ""))
   f.close()

   #write Sales data to Sales.dat
def PrintMe():
    f = open('Produce.txt', 'r')
    sentence = f.read()
    words = sentence.split()
    word_counts = collections.Counter(words)
    for word, count in sorted(word_counts.items()):
        count = str(count)   

    #write to Sales.dat for record
    f = open('Sales.dat', 'w')
    word_counts = collections.Counter(words)
    for word, count in sorted(word_counts.items()):
        count = str(count)
        f.write(word + " " + count + "\n")
    f.close()
    f.close()

def ReadDatfile():
    #Open and read Sales.dat
    f = open('Sales.dat', 'r')
    test = f.read()
    print(test)
    f.close()

def Printhistogram():
    f = open('Produce.txt', 'r')
    sentence = f.read()
    words = sentence.split()
    word_counts = collections.Counter(words)
    for word, count in sorted(word_counts.items()):
        count = str(count)
        space = 12 - (len(word))
        #print(space)
        print(word, space * " ", "*" * int(count))
        #print(word, "*" * int(count))
    f.close()
         dg