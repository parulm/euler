#This code solves problem 27 of Project Euler

#Note: A very easy and quick problem. Funnily enough, taught me a very important lesson about indenting in python. 'Python indenting works by spacing and not tab; and tab is not equal to 8 spaces'


def num_rep(a):
  a.sort()
  rep=0
  i=0
  while i<len(a)-1:
    while 1==1:
      if a[i]==a[i+1]:
        rep+=1
        i+=1
      else:
        break
    i+=1
  return rep


lis = []
for a in range(2,101):
  for b in range(2,101):
    lis.append(a**b)

print (len(lis) - num_rep(lis))
  