#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[200];
	int t=0;
	while(cin>>str)
	{
		 if(strcmp(str,"*") == 0) break;
		 if(strcmp(str,"Hajj") == 0)
		 {
		 	cout<<"Case "<<++t<<": Hajj-e-Akbar"<<endl;
		 }
		   if(strcmp(str,"Umrah") == 0)
		   {
		   cout<<"Case "<<++t<<": Hajj-e-Asghar"<<endl;;
		   }
	}
	
	return 0;
}
