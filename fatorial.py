def fatorial(n, k):
    fat = n
    i = n-k
    while n >= k+1:
        n -= 1
        fat = fat * n 
    print(fat)
    

n = 1


print(""" 
Calcular o fatorial de um número inteiro positivo\n
Para realizar com sucesso é necessario informar um numero N qualquer
Após é necessario informar um número de corte.
EX: para realizar fatorial de 10 começando pelo 7, informe um número N=10 para o fatorial, em seguida
em seguida o valor de corte k=7!
ou fatorial de 5: informe N=5, k=1.
""")
while (n != 0):    
    print("digite 0 para finalizar")
    n = int(input("valor N: "))
    if (n==0):
        break
    k = int(input("valor K: "))
    fatorial(n, k)
