#This code solves problem 24 of project euler
#Note: python functions do not behave like pointer functions in C++, they behave like the non pointer functions. Read the code and you will realize python swapping is simple and pretty.

#Fuction to turn an array into a number by multiplying with right powers of 10 and adding
def numer(a):
  l = len(a)
  num = 0
  for i in range(l):
    num+=(10**(l-i-1))*a[i]
  return num

#Function to permut an array - it is recursive
def permut(a,ini,fi,arr):
  if ini==fi:
    print (numer(a))
    arr.append(numer(a))
  temp = a
  for i in range(ini,fi):
    temp[ini],temp[i]=temp[i],temp[ini]
    permut(temp,ini+1,fi,arr)
    temp[ini],temp[i]=temp[i],temp[ini]


import timeit
start = timeit.default_timer()

a = [0,1,2,3,4,5,6,7,8,9]
arr = []
permut(a,0,10,arr)
arr.sort()
print (arr[999999])

stop = timeit.default_timer()
print (stop-start) 