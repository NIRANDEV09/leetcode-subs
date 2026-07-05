#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
    ns =""
    lis = s.split(" ")
    for i in lis :
        cap = i[:1].upper() + i[1:]
        ns+=cap+" "
    return ns.strip()    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()
