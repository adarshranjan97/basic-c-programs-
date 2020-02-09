n=int(input())
for i in range(n):
    a=input()
    print((a,a[0]+str(len(a)-2)+a[-1])[len(a)>10])