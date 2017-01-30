#Code to solve problem 45 from Project Euler

def p(n):
	return (n*(3*n-1))/2

def t(n):
	return (n*(n+1))/2

def h(n):
	return (n*(2*n-1))

pent = []
tri = []
hexa = []

for i in range(1,100001):
	pent.append(p(i))
	tri.append(t(i))
	hexa.append(h(i))
	
print 'Done constructing the arrays'

for k in range(1,100000):
	val = pent[k]
	if val in tri and val in hexa:
		print val
		if val != 40755:
			print 'I was here'
			break