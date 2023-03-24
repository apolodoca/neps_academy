a = 0
b = 0
n = int(input())
interruptor = input().split(' ')

for i in range(n):
    a = int(not a)
    if(interruptor[i] == '2'):
        b = int(not b)

print(a)
print(b)