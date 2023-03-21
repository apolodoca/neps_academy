
#user input
A, B, C = map (int, input().split())
#math and output
if A == B == C:#draw
    print("*")
elif A != B and B == C:#if A is diferent
    print("A")
elif B != A and A == C:#if B is diferent
    print("B")
else:#else C is diferent
    print("C")

