#include<iostream>
using namespace std;
int main()
{
int n1,n2,n3,N;
char op;
while(cin>>n1>>op>>n2)
{if(op=='%')
N=1;
else if(op=='/')
N=2;
else
N=0;
switch(N)
{ case 1:n3=n1%n2;
           cout<<n3<<endl;
           break;
  case 2:n3=n1/n2;
           cout<<n3<<endl;
           break;
  default:cout<<"Invalid operation"<<endl;
}
}
return 0;
}
