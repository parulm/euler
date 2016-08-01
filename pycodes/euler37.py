#Code solves problem 37 of project euler

import timeit

def dig(n):
  dig=0
  while n!=0:
    n=n//10
    dig+=1
  return dig

def reverse(n):
  d=dig(n)
  rev=0
  for i in range(d):
    r=n%10
    rev+=r*(10**(d-1-i))
    n=n//10
  return rev

def isprime(n):
  if n==1:
    return False
  if n==2:
    return True
  for i in range(2,n//2+1):
    if n%i==0:
      return False
  return True

def r2l(n):
  while n!=0:
    if isprime(n)==False:
      return False
    n=n//10
  return True

def l2r(n):
  while n!=0:
    if isprime(n)==False:
      return False
    n=reverse(reverse(n)//10)
  return True

def l2r2(n):
  d=dig(n)
  for i in range(d):
    r=n%(10**(d-1-i))
    if isprime(r)==False:
      return False
  return True

start = timeit.default_timer()
count=0
sumi=0
i=10
while 1==1:
  if count==11:
    break
  if l2r2(i)==True and r2l(i)==True:
    print (i)
    count+=1
    sumi+=i
  i+=1
  
print (sumi)
stop=timeit.default_timer()
print (stop-start)