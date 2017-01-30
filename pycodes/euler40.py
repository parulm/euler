#Code to solve problem 40 from Project Euler

upp_lim = 500000
nam = ''
for i in range(1,upp_lim):
	ch = str(i)
	nam = nam + ch

ans = 1
print nam[0]
for k in range(1,7):
	po = 10**k - 1
	print po+1,'digit is:',nam[po]
	ans = ans*(int(nam[po]))
	
print 'answer is:', ans