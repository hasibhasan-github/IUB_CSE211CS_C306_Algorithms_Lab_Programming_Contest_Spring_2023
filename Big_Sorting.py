
# Author @Md Hasib Hasan
# https://www.hackerrank.com/challenges/big-sorting/problem

n = int(input())
holder = []
for i in range(n):
    holder.append(input())
holder.sort(key=int)
for x in holder:
    print(x)