# Enter your code here. Read input from STDIN. Print output to STDOUT
s = list(map(int,input().split(' ')))
n = s[0]
m = s[1]
d , do = '-','.|.'
c = 1
mid = n//2 + 1
for i in range(1,n+1):
    if i == mid:
        print("WELCOME".center(m,d))
    elif i!=mid :
        if i<mid:
            print((do * c).center(m,d))
            c+=2
        elif i >mid:
            c-=2 
            print((do * c).center(m,d))
            
        
        
        
    
