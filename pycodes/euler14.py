#This code is solution for problem 14 on project euler
#Link: https://projecteuler.net/problem=14
large = 0
for n in range(4,1000000):
  l = 0
  val = n
  while n!=1:
    if n%2==0:
      n = n//2
    else:
      n = 3*n+1
    l+=1
    
  if l+1>large:
    large = l+1
    flag = val
    
print (flag,'-->',large)