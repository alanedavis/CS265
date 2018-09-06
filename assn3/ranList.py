#!/usr/bin/python3

import random
import sys

print(int(sys.argv[1]))

for i in range(0, int(sys.argv[1])):
    print(random.randint(0,1000000))
