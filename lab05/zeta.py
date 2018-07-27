#!/usr/bin/python3
import sys

# Initializing variables
finalFract = 0

# Defining the riemann summs function
def z(x,n):
	for i in range(1,n): # Iterating through all of the fractions
		global finalFract # Pulls in initalized variable
		newFract = (1/i)**x # The base for the entirity of riemann summs
		finalFract = finalFract + newFract # Addition of the current and previous fraction
	return finalFract # Returning the final value

# Calls the defined function using user input
finalAns = z(int(sys.argv[1]),int(sys.argv[2]))

# Printing the final answer statement
print("z(%d)=%.6f when approximated at n=%d" % (int(sys.argv[1]),float(finalAns),int(sys.argv[2])))
