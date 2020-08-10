p = float(input("Enter the desired accuracy "))
i=1
sum=0
while 1/i>p:
    sum=sum+1/i
    i=i+1
print("The sum upto {0} accuracy is {1}".format(p,sum))
print("The number of terms we need to add is",i)