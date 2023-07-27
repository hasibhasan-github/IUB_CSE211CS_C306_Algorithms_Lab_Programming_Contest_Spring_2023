
# Author @Md Hasib Hasan
# https://www.hackerrank.com/challenges/equal/problem

def g(differences):
    ans = {0:0, 1:1, 2:1, 3:2, 4:2}
    return differences // 5 + ans[differences % 5]

def f(choco, goal):
    return sum(g(chocolate-goal) for chocolate in choco)

def get_ans(choco):
    min_choco = min(choco)
    return min(f(choco, min_choco - dc) for dc in range(4))

T = int(input(""))
for i in range(T):
    N = int(input(""))
    inp = input("").split()
    choco = [int(chocolate) for chocolate in inp]
    print (get_ans(choco))