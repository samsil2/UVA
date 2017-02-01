#include <iostream>
using namespace std;

int main(){
 int n, s, el;
     
    while(cin>>n && n!=-1)
    {
        int ans=0, p=0;
        for(int i=0;i<n;i++)
        {
            cin>>s>>el;
            ans+=s*(el-p);
            p=el;
        }
        cout<< ans <<" miles\n";
    }
  return 0;
}
