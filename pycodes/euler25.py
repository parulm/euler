#Code solving problem 25 of project euler

#Note: This is a really elegant solution. Esp the part where fibonacci number is calculated. Realization: Python largest number size is huge.

#Function to calculate fibonacci series' nth term; The function in file 5_functions.py is O(n^3), this is O(n)
def fib(n):
    a = 1
    b = 0
    while n > 1:
        a, b = a+b, a
        n = n - 1
    return a

def digs(n):
  dig = 0
  while n!=0:
    dig+=1
    n=n//10
  return dig

for i in range(4700,5001):
  if digs(fib(i))==1000:
    print (i)
    break  