#include<iostream>
using namespace std;
int main()
{
string S;
int count=0;
cout<<"Enter a string : "<<endl;
cin>>S;
for(int i=0;S[i]!='\0';i++)
{
for(int j=i+1;S[j]!='\0';j++)
{
if(S[i]==S[j])
{
count=count+1;
}
}
}
if(count==0)
cout<<"Yes(given string is isogram)"<<endl;
else
cout<<"No";
return 0;
}
