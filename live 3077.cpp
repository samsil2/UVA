#include <cstdio>
#include<iostream>

using namespace std;

int main(){
    int Testcase,X,Y;
    
    cin>>Testcase;
    
    while(Testcase--){
     cin>>X>>Y;
        
        if(X>=Y) puts("MMM BRAINS");
        else puts("NO BRAINS");
    }
    
    return 0;
}
