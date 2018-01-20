while True:
    s = (input()) #skew  binary input
    if s=='0' :
        break #when input =0 program will be terminated

    else :

        s = s[::-1] #reverse string
        res = 0
        for i, n in enumerate(s):
            res += int(n) * ((2 ** (i + 1)) - 1) #(2**(n+1))-1 is the formula of skew binary

        print(res) #print result




