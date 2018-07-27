#!/usr/bin/python3
import csv
from collections import defaultdict
import ast

# Defining variables
names = []
numbers = []
namesDict = {}

# Reads the csv file so that the names and their respective numbers can be added to empty lists
with open("babies-first-names-17-10-17.csv","r",encoding="latin-1") as csvFile:
	reader = csv.reader(csvFile)
	for col in reader:
		names.append(col[2])
		numbers.append(col[3])

# Removes any empty cells
while '' in names:
	names.remove('')
	numbers.remove('')

# Removes the titles of each column
names.pop(0)
numbers.pop(0)

# Zips the two lists containing names and their numbers
namesDict = defaultdict(list)
for key, value in zip(names, numbers):
	namesDict[key].append(value)

# Turns the new joint list into a dictionary without losing duplicates
# The duplicated keys will have brackets with each value
namesDict = dict(namesDict)
 
# Iterates through each key and its multiple bracketed values, strips the single quotations from the values,
# and finally sums the remaining list to be the new value for each key in the dictionary 
for i in namesDict:
	namesDict[i] = [int(x) for x in namesDict[i]]
	namesDict[i] = sum(namesDict[i])

# Pulls the name with the most number of uses
topName = max(namesDict, key=namesDict.get)

# Prints the most popular name
print("The most popular name was given to %d children.\n%s" % (namesDict[topName], topName))
