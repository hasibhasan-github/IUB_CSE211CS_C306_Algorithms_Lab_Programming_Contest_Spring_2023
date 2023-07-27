
# Author @Md Hasib Hasan
# https://www.hackerrank.com/challenges/fibonacci-modified/problem
# Use pypy3 for submission. Python has some string value errors.

def fibonacciModified(t1, t2, n):
    holder = []
    holder.append(t1)
    holder.append(t2)
    for i in range(2, n):
        holder.append(holder[i-2]+(holder[i-1]*holder[i-1]))
    print(holder[n-1])


t1, t2, n = map(int, input().split())
fibonacciModified(t1, t2, n)