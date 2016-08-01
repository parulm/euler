#Code to solve problem 34 of project Euler

def fact(n):
  if n==0:
    return 1
  else:
    return n*fact(n-1)

def is_cur(n):
  temp=n
  val=0
  while n>0:
    a=n%10
    val+=fact(a)
    n=n//10
  if val==temp:
    return 1
  else:
    return 0
  
sumc=0
for i in range(10,2**31):
  if is_cur(i)==1:
    sumc+=i
    print (i)
    
print (sumc)