#Code for solving problem 35 of project euler

def isprime(n):
  for i in range(2,n//2+1):
    if n%i==0:
      return 0
  return 1

def digs(n):
  dig=0
  while n>0:
    n=n//10
    dig+=1
  return dig


def circprim(n):
  d=digs(n)
  if d==1 and isprime(n)==1:
    return 1
  else:
    
    #flag=0
    for i in range(d):
      temp=n
      last=temp%10
      n=last*(10**(d-1)) + n//10
#      print (n)
      if isprime(n)==0:
        return 0
    return 1
    
count=0
for i in range(2,1000000):
  if circprim(i)==1:
    print (i)
    count+=1

print (count)