#include<iostream>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<queue>
#include<cstring>
#include<cstdlib>
#include<sstream>
#include<cmath>
#include<map>
#include<set>
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
#define M 10000007

using namespace std;
int main(){
    
     string str;
    while(getline(cin,str)){
        istringstream is(str);
       bool flag=false;
        
        while(is>>str){
            if(flag) cout<<" ";
            flag=true;
            
            for(int i=str.size()-1;i>=0;i--) cout<<str[i];
        }
        cout<<endl;
    }

    return 0;
}
