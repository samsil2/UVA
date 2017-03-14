#include <iostream>
#include <string>
using namespace std;
int main(){
string line;
int cont=0;
while(getline (cin,line)) {
int t  =line.size();
for(int i=0;i<t ;i++){
if((line[i]>='A' && line[i]<='Z')||(line[i]>='a' && line[i]<='z')){
cont++;
for(;(line[i]>='A' && line[i]<='Z')||(line[i]>='a' && line[i]<='z') && i<t;i++){}
}
}
cout<<cont<<endl;
cont=0;
}
return 0;
}
