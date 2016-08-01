#Code to solve project euler problem 27
#Note: Initially, in this rather simple problem, I forgot the definition of 'prime'. A prime number is always a natural number.

#Function to test if a number is prime or composite
def isprime(n):
  flag = 0
  for i in range(2,n//2+1):
    if n%i==0:
      flag = 1
      return 0
  if flag==0:
    return 1

#Function to find the number of primes given by the formula n^2+an+b
def numprimes(a,b):
  n=0
  while 1==1:
    val = n**2+a*n+b
    if isprime(val)==0 or val<=1:
      return n
    #else:
      #print (n,'-->',val)
    n+=1

import timeit
start = timeit.default_timer()


large = 0
for a in range(-1000,1001):
  for b in range(-1000,1001):
    n = numprimes(a,b)
    if n>large:
      large = n
      aflag = a
      bflag = b

print ('large =',large)
print ('a =',aflag,'b =',bflag,'a*b =',aflag*bflag)

#print (numprimes(1,41))

stop = timeit.default_timer()
print (stop-start)