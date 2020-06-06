def fatorial(n, k):
    fat = n
    i = n-k
    while n >= k+1:
        n -= 1
        fat = fat * n 
    print(fat)
    print(len(str(fat)))

n = 1

while (n != 0):    
    n = int(input("valor N: "))
    k = int(input("valor K: "))
    fatorial(n, k)
