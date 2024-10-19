def sol():
    n, m = map(int, input().split())
    t = []

    for i in range(n):
        row = list(input().strip().lower())
        t.append(row)

    ans = []

    k = int(input())
    for _ in range(k):
        word = input().strip().lower()
        
        found = False
        for i in range(n):
            if found:
                break
            for j in range(m):
                if found:
                    break
                if word[0] == t[i][j]:
                    directions = [  (-1, 0), (1, 0), (0, -1), (0, 1),
                                    (-1, -1), (1, 1), (-1, 1), (1, -1)  ]
                    for di, dj in directions:
                        a = ''
                        I, J = i, j
                        s = len(word)
                        while s > 0 and 0 <= I < n and 0 <= J < m:
                            a += t[I][J]
                            I += di
                            J += dj
                            s -= 1
                        if a == word:
                            ans.append((i, j))
                            found = True
                            break

    return ans

ans = sol()
for r in ans:
    print(r[0], r[1])
