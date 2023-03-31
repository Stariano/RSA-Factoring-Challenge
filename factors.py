#!/usr/bin/python3
import sys
import math

fhand = open(str(sys.argv[1]))
for line in fhand:
    for i in range(3, int(math.sqrt(int(line))+1), 2):
        if (int(line)%i)==0:
            print("{:d}={:d}*{:d}".format(int(line), int(int(line)/i), i))
            break
