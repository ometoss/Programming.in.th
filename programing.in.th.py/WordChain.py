def arrIn(N) :
    arr = []
    for _ in range(N):
        arr.append(input())
    return arr

def out(L, N, arr):

    if N == 1 :
        print(arr[0])

    else:
        for i in range(N-1):
            count = 0
            for j in range(L):
                if arr[i][j] != arr[i+1][j] :
                    count += 1
                    if count > 2:
                        break
            if count > 2:
                print(arr[i])
                break 
            elif i == N-2:
                print(arr[i+1])
                break

def main():
    L = int(input())
    N = int(input())

    arr = arrIn(N)
    out(L, N, arr)

main()