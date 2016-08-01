#This code solves problem 20 of project euler

#Function to calculate the sum of digits in a number
def dig_sum(n):
  val = 0
  while n!=0:
    val+=n%10
    n=n//10
  return val


#Function to calculate the factorial of a number
def fact(n):
  if n==0:
    return 1
  else:
    return n*fact(n-1)
  

n = int(input('Enter a number: '))
print ('The sum of digits in factorial of',n,'is',dig_sum(fact(n)))