#Code to solve problem 44 of project euler

def p(n):
  return n*(3*n-1)/2

import timeit
start=timeit.default_timer()

for k in range(1,5000):
  diff=p(k)
  for i in range(1,5000):
    for j in range(1,5000):
      if p(i)-p(j)==diff:
        #print (i,':',p(i),'<=>',j,':',p(j))
        summ=p(i)+p(j)
        for l in range(1,10000):
          if summ==p(l):
            print (l,':',p(l))
            print (i,':',p(i),'<=>',j,':',p(j))
            break
          
stop=timeit.default_timer()
print (stop-start)