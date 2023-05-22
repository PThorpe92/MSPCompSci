# These are the built in data structures in Python, this doesn't include
# things like classes/objects but this is because in python, everything is 
# actually an object. But that is a lesson for a later day.

# Lists
fruits = ['apple', 'banana', 'cherry']
print(fruits[1]) # prints 'banana'
fruits.append('orange')
print(fruits) # prints ['apple', 'banana', 'cherry', 'orange']

# Tuples
coordinates = (3, 4)
print(coordinates[0]) # prints 3

# Sets
s = set()
s.add(1)
s.add(2)
s.add(2) # duplicate values are ignored
print(s) # prints {1, 2}

# Dictionaries
ages = {'Alice': 25, 'Bob': 30, 'Charlie': 35}

print(ages['Bob']) # prints 30

ages['Alice'] = 26

print(ages) # prints {'Alice': 26, 'Bob': 30, 'Charlie': 35}

