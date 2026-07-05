def minion_game(string)->None:
    kscore ,sscore =0,0
    length = len(string)
    for ind, i in enumerate(string):
        if i in "AEIOU":
            kscore += length-ind
        else:
            sscore += length-ind
            
    if kscore>sscore:
        print("Kevin",kscore)
    elif kscore < sscore:
        print("Stuart",sscore)
    else:
        print("Draw")
        
                                

if __name__ == '__main__':
    s = input()
    minion_game(s)