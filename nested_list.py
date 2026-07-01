if __name__ == '__main__':
    nes = []
    mark = []
    names = []
    n = int(input())
    while n!=0:
        name = input()
        marks = float(input())
        mark.append(marks)
        nes.append([name ,marks])
        n-=1
    mini = min(mark)
    c = mark.count(mini)
    while c!=0:
        mark.remove(mini)
        c-=1
    new_min = min(mark)
    for i in nes:
        if i[1]==new_min:
            st = i[0]
            names.append(st)
    names.sort(key=str.lower)
    for i in names:
        print(i)
         
                   
            
