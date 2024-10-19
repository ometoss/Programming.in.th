d = int(input())
arr = [0,0,0,0,0]

def roman(n:int):

    while(n):
        if n == 4 :
            arr[0] += 1
            arr[1] += 1
            break
        elif n == 9 :
            arr[0] += 1
            arr[2] += 1
            break
        elif n >= 1 and n < 4 :
            arr[0] += n
            break
        elif n < 9 :
            arr[0] += n%5
            arr[1] += 1
            break
        elif n < 40 :
            arr[2] += 1
            n -= 10
        elif n < 50 :
            arr[2] += 1
            arr[3] += 1
            n -= 40
        elif n < 90 :
            arr[3] += 1
            n -= 50
        elif n < 100 :
            arr[2] += 1
            arr[4] += 1
            n -= 90
        else :
            arr[4] += 1
            n -= 100

for i in range(1,d+1):
    roman(i)

print(*arr)