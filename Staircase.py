# Author @Md Hasib Hasan
# https://www.hackerrank.com/contests/rns-placement-coding/challenges/staircase

def staircase(n):
    for i in range(0,n):
        for j in range(0,n):
            if i + j >= n-1:
                print("#",end='') 
            else:
                print(" ",end='')
        print("\r")
        
 
n = int(input())       
staircase(n)
