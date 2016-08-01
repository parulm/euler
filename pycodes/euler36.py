#Code solves problem 36 from project euler

def dec2bin(n):
  a=[]
  while n!=1:
    a.append(n%2)
    n=n//2
  a.append(1)
  a=list(reversed(a))
  return a

def isbinpali(a):
  l=len(a)
  for i in range(l//2+1):
    if a[i]!=a[l-i-1]:
      return False
  return True

def ispali(n):
  dig=0
  temp=n
  a=[]
  while temp!=0:
    dig+=1
    temp=temp//10
  for i in range(dig):
    a.append(n%10)
    n=n//10
  #print (a)
  return isbinpali(a)
  

sumn=0
for i in range(1,1000001):
  if isbinpali(dec2bin(i))==True and ispali(i)==True:
    print (i)
    sumn+=i
print (sumn)