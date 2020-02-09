number,place = map(int,input().split())
score = []
score = list(map(int,input().split()))
output = 0
for x in range(number):
    if(score[place-1] <= score[x] and score[x]>0):
        output+= 1
 
print(output)
