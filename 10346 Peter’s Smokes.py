while True:
    try:
        n,k=map(int,input().split())
        #samsil arefin

        ans = n
        tem =n
        while tem>= k:
            ans += tem//k
            tem = tem %k + tem//k

        print(ans)
    except EOFError:
        break

#www.procodist.com