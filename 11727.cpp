 #include<iostream>
 #include<iomanip>
 #include<algorithm>
 #include<vector> 
 #include<cstring>
  
  

 using namespace std;
 
  
 
 int main()
 {
    
 int  t,i;
 cin>>t;
 for(i=0;i<t;i++)
 {
 	 int a[3];
 	 cin>>a[0]>>a[1]>>a[2];
 	sort(a,a+3);
 	cout<<"Case "<<i+1<<": "<<a[1]<<endl;
 }
 	
  } 
 
	

