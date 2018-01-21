def Main():
    while True:
        n=int(input())
        if n<0 : #Program will be terminated
            break
        else:
            print(1+((n*(n+1))//2)) # Gauss‘es arithmetic series formula

if __name__ == '__main__':
    Main()