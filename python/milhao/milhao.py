# Leio o número de dias
N = int(input()) 

total_de_acessos = 0
dia = -1

for i in range(1, N + 1):
    
    # Leio o número de acessos do dia i
    A = int(input())
    
    # Adiciono os acessos do dia i ao total 
    total_de_acessos += A 

    if total_de_acessos >= 1000000 and dia == -1: # Se a página atingiu 1 milhão de views,

        dia = i # salvo o dia em que isso aconteceu

# Exibo o dia que a página atingiu 1 milhão de acessos.
print(dia)

