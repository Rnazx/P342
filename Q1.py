def su(n,sum):
    try:
        k=int(n)
        while k<0:
            print("The input is negative")
            k = int(input("Please enter a non-negative integer "))
        for val in range(1,k+1):
            sum = sum+val
        print("The sum is",sum)
    except ValueError:
        c=input("Error: The number you have entered is not an integer. Try again: ")
        su(c,0)
b = input("Enter the last number of the sum: ")
su(b,0)

    

