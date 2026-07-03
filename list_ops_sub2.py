if __name__ == '__main__':
    N = int(input())
    lis =[]
    while N!=0:
        inp = input()
        com = inp.split(" ")
        if com[0]=="print":
            print(lis)
        elif com[0]=="insert":
            lis.insert(int(com[1]),int(com[2]))
        elif com[0]=="remove":
            lis.remove(int(com[1]))
        elif com[0]=="append":
            lis.append(int(com[1]))
        elif com[0]=="sort":
            lis.sort()
        elif com[0]=="pop":
            lis.pop()
        elif com[0]=="reverse":
            lis.reverse()
        N-=1               
            
        
        
 
