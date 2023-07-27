
# Author @Md Hasib Hasan
# https://www.hackerrank.com/contests/w11/challenges/sherlock-and-square

t = int(input())
while (t > 0) :
    n = int(input())
    if ( n == 0 ):
        print("4")
    else:
        x = pow(2, (n+1), 1000000007)+2
        print(x)
    t -= 1