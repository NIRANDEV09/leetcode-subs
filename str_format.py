def print_formatted(number)->None:
    w = len(bin(number)[2:])
    for i in range(1,number+1):
        oc = oct(i)[2:]
        he = hex(i)[2:].upper()
        bi = bin(i)[2:]
        print(str(i).rjust(w),oc.rjust(w),he.rjust(w),bi.rjust(w) )

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)