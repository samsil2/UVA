#include<iostream>
#include<cstdio>
#include<algorithm>
 
using namespace std;

 int main()
{
int i,j,n,mat[100][100],row,col,s1=0,s2=0,tem1,tem2;
while(cin>>n && n!=1)
    {
    if(n==0)    break;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>mat[i][j];
    
    row=0;
    col=0;
    for(i=1;i<=n;i++)
        {
        s1=0;
        for(j=1;j<=n;j++)
            {
            s1=s1+mat[i][j];
            }
            
        if(s1%2!=0)
            {
            tem1=i;
            row++;
            }    
        }
            
    for(j=1;j<=n;j++)
        {
        s2=0;
        for(i=1;i<=n;i++)
            {
            s2=s2+mat[i][j];
            }
        if(s2%2!=0)
            {
            tem2=j;
            col++;
            }
        }
    if(row==0 && col==0) cout<<"OK"<<endl;
     
    else if(row==1 && col==1)cout<<"Change bit ("<<tem1<<","<<tem2<<")"<<endl;
    else cout<<"Corrupt"<<endl;
     
     
    }
return 0;
}
