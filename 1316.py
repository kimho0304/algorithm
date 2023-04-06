word = []
for i in range(int(input())):
    word.append(input())
cnt = 0
for i in word:
    flag, q = True, dict()
    fuck = list(i)
    for j in range(len(fuck)):
        if fuck[j] not in q:
            q[fuck[j]] = j
        else:
            if q[fuck[j]] == j - 1:
                q[fuck[j]] = j
            else:
                flag = False
                break
    if flag:
        cnt += 1
    #print(q)
print(cnt)
