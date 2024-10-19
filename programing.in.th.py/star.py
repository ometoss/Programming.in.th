def out(L, col):
    for i in range((col+1)//2):
        for j in range(col):

            if i == 0 and j+1 == (col+1)/2:
                print("*",end="")
            
            elif j == (col-1)/2-i or j == ((col-1)/2-i)+2*i:
                print("*",end="")
                
            else:
                print("-",end="")
            
        print("")

    if L%2 == 0:
        loop = L//2
    else:
        loop = (col+1)//2-1

    k = loop-1
    for i in range(loop):
        for j in range(col):

            if i == loop-1 and j+1 == (col+1)/2:
                print("*",end="")

            elif j == (col-1)/2-k or j == ((col-1)/2-k)+2*k:
                print("*",end="")

            else:
                print("-",end="")

        print("")
        k-=1

def main() :
    N = int(input())
    f = lambda x : x-1 if x%2 == 0 else x

    out(N, f(N))

main()