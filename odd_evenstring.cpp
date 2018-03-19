#include<iostream>
using namespace std;
int main()
{
string S;
cout<<"Enter a string : "<<endl;
cin>>S;
for(int i=0;S[i]!='\0';i++)
{if(i%2==0)
cout<<S[i];
}
cout<<'\t';
for(int i=0;S[i]!='\0';i++)
{if(i%2==1)
cout<<S[i];
}
return 0;
}
