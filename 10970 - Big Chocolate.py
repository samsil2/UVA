while True:
    try:
        m,n = map(int,input().split())

        print((m*n-1))
    except EOFError:
        break
