n=int(input())
for i in range(0,n):
    s=0 
    a,b=map(int,input().split())
    l=[6,2,5,5,4,5,6,3,7,6]
    x=a+b
    while(x>0):
        s=s+l[int(x%10)]
        x=x//10
    print(s)