if __name__ == '__main__':
    s = input()
    an_key , a_k,n_k,l_k,u_k = 0,0,0,0,0
    for i in s:
        if i.isalnum() and an_key !=1:
            an_key = 1
        if i.isalpha() and a_k !=1:
            a_k = 1
        if i.isdigit() and n_k !=1:
            n_k = 1 
        if i.islower() and l_k !=1:
            l_k = 1
        if i.isupper() and u_k !=1:
            u_k = 1
    if an_key == 1:
        print('True')
    else:
        print('False')
    if a_k == 1:
        print('True')
    else:
        print('False')
    if n_k == 1:
        print('True')
    else:
        print('False')
    if l_k == 1:
        print('True')
    else:
        print('False')
    if u_k == 1:
        print('True')
    else:
        print('False')
    
    