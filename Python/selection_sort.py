import random

#Randomize array 
arr = []
for x in range(0,10):
    arr.append(random.randrange(-100,100))

#Print before sort
print("Before:", arr)
    
for x in range(len(arr)):
    low = x
    for y in range(x + 1, len(arr)):
        if arr[y] < arr[low]:
            low = y
    arr[x], arr[low] = arr[low], arr[x]

#Print after sort
print("After:", arr)
