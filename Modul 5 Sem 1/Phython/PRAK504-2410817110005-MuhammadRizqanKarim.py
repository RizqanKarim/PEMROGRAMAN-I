def reverse(n):
    return int(str(n)[::-1])

A, B = map(int, input().split())
A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))
