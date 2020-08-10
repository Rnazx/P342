def fa(n,prod):
    try:
        k=int(n)
        while k<0:
            print("The input is negative")
            k = int(input("Please enter a non-negative integer "))
        for val in range(1,k+1):
            prod = prod*val
        print("The factorial is",prod)
    except ValueError:
        c=input("Error: The number you have entered is not an integer. Try again: ")
        fa(c,1)
b = input("Enter the last number of the sum: ")
fa(b,1)
