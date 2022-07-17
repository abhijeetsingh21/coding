lik = []
dislk = []
for i in range(int(input())):
    likes = (input().split())
    dislikes = (input().split())
    lik.append(likes[1:])
    dislk.append(dislikes[1:])
for j in range(len(lik)):
    print(lik[j], end=" ")
print()
for k in range(len(dislk)):
    print(dislk[k], end=" ")
for l in range(len(lik)):
    for m in range(len(dislk)):
        if lik[l] == dislk[m]:
            continue
        else:
            print(lik[l])
print()
