#Solves problem 23 of Project Euler

#Note: Code is highly time consuming. I feel it can be improvised with some programming skills - lists, etc. Though the math part seems optimum mostly.

#Function to calculate the sum of proper divisors of a number
def d(n):
  if n==1:
    return 0
  elif n==2:
    return 1
  val=0
  for i in range(1,n//2+1):
    #print (i)
    if n%i==0:
      val+=i
  return val

#Function to find if a number is deficient(-1), perfect(0) or abundant(1)
def numtype(n):
  if d(n)<n:
    return -1
  elif d(n)==n:
    return 0
  else:
    return 1

#Function to find if a number can be written as the sum of two abundant numbers
def is_sum(n):
  for i in range(1,n//2+1):
    if numtype(i)==1 and numtype(n-i)==1:
      #print (i,':',n-i)
      return 1
  return 0  
  
import timeit
start = timeit.default_timer()
val=0
for i in range(1,281):
  if numtype(i)==1:
    #print (i)
    val+=1
    
print (val)

#Alternate math part
'''
#UL = 20161
sum_all = 0
largest = 0
n=0
for i in range(1,2016):
  if numtype(i)==1:
    n+=1
    sum_all+=i
    if i>largest:
      largest=i
UM = 2*largest
print (n,',',largest,',',sum_all)
s = ((UM*(UM-1))/2) - n*sum_all
print (s)
'''

stop = timeit.default_timer()
print (stop-start)