#include<iostream>
 
using namespace std;
int main()
{
long int a,b;
int count,c;
 while(cin>>a>>b)
 
             {
             	if(a==0 && b==0) break;
                     count=c=0;
                                while(a||b)
                                   {
                                    c=(a%10+b%10+c)/10;
                                     a=a/10;
                                     b=b/10;
                                     count=count+c;
                                   }
                      if(!count) cout<<"No carry operation.\n";
                      else if(count==1) cout<<"1 carry operation.\n";
                      else cout<<count<<" carry operations.\n";
                     
                     
            }
return 0;
}
