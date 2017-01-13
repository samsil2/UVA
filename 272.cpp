#include<iostream>

using namespace std;

int main(){
   

    char c;
    bool x=1;

    while(scanf("%c",&c)!=EOF){
        if(c=='"'){
            if(x) printf("``");
            else printf("''");
            
            x=(!x);
        }else printf("%c",c);
    }

    return 0;
}
