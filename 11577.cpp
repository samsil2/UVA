#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,num[28],n,X,Length,K,z;
    char str[202];

while(scanf("%d\n",&n)==1){

    for(z=0;z<n;z++)
    {
        int I[27]={0};
        gets(str); 

        Length=strlen(str); 
        for(i=0;i<Length;i++)
        {
        if(str[i]=='a'||str[i]=='A')
            I[0]++;
        else if(str[i]=='b'||str[i]=='B')
            I[1]++;
        else    if(str[i]=='c'||str[i]=='C')
            I[2]++;
        else if(str[i]=='d'||str[i]=='D')
            I[3]++;
        else    if(str[i]=='e'||str[i]=='E')
            I[4]++;
        else    if(str[i]=='f'||str[i]=='F')
            I[5]++;
        else    if(str[i]=='g'||str[i]=='G')
            I[6]++;
        else    if(str[i]=='h'||str[i]=='H')
            I[7]++;
        else    if(str[i]=='i'||str[i]=='I')
            I[8]++;
        else    if(str[i]=='j'||str[i]=='J')
            I[9]++;
        else    if(str[i]=='k'||str[i]=='K')
            I[10]++;
        else    if(str[i]=='l'||str[i]=='L')
            I[11]++;
        else    if(str[i]=='m'||str[i]=='M')
            I[12]++;
        else    if(str[i]=='n'||str[i]=='N')
            I[13]++;
        else    if(str[i]=='o'||str[i]=='O')
            I[14]++;
        else    if(str[i]=='p'||str[i]=='P')
            I[15]++;
        else    if(str[i]=='q'||str[i]=='Q')
            I[16]++;
        else    if(str[i]=='r'||str[i]=='R')
            I[17]++;
        else    if(str[i]=='s'||str[i]=='S')
            I[18]++;
        else    if(str[i]=='t'||str[i]=='T')
            I[19]++;
        else    if(str[i]=='u'||str[i]=='U')
            I[20]++;
        else    if(str[i]=='v'||str[i]=='V')
            I[21]++;
        else    if(str[i]=='w'||str[i]=='W')
            I[22]++;
        else    if(str[i]=='x'||str[i]=='X')
            I[23]++;
        else    if(str[i]=='y'||str[i]=='Y')
            I[24]++;
        else    if(str[i]=='z'||str[i]=='Z')
            I[25]++;

        }
        X=0;
        for(Length=200;Length>=0;Length--)
        {for(i=0;i<27;i++)
        {
            if(I[i]==Length && X<=I[i])
            {
                printf("%c",i+97);
                X=I[i];
            }
        }
        }
printf("\n");
    }}
    return 0;
}
