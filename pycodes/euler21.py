#This code solves problem 21 of Project Euler

#Function to calculate the sum of proper divisors of a number
def d(n):
  val=0
  for i in range(1,n//2+2):
    #print (i)
    if n%i==0:
      val+=i
  return val


import timeit

start = timeit.default_timer()

d(1)
amic_sum=0
n = int(input('Sum of all amicable numbers under? '))
for i in range(1,n):
  if d(d(i))==i and d(i)!=i:
    print (i,':',d(i))
    amic_sum+=i

print (amic_sum)

stop = timeit.default_timer()

print (stop - start) 