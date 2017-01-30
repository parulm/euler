#Code for solving problem 51 of Project Euler

def is_prime(n):
	for i in range(2,n/2+1):
		if n%i==0:
			return False
	return True

for i in range(100,500):
	if is_prime(i):
		print i