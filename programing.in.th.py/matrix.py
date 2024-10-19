def Matrixin(m):
    arr = []
    for _ in range(m):
        arr.append(list(map(int,input().split())))
    return arr

def out(row, col, arrA, arrB):
    for i in range(row):
        for j in range(col):
            print(arrA[i][j] + arrB[i][j], end=" ")
        
        print("")


m, n = map(int, input().split())
ma = Matrixin(m)
mb = Matrixin(m)

out(m,n,ma,mb)