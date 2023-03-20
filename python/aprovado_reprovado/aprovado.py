#user input
A, B= input().split()
A = float(A)
B = float(B)

#math and output
if (A+B)/2 >= 7:
    print("Aprovado")
elif (A+B)/2 >= 4:
    print("Recuperacao")
else:
    print("Reprovado")