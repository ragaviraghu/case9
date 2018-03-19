#include <iostream>
using namespace std;
int main()
{
string s;
int n=0;
char temp;
cout<<"Enter a  string : " <<endl;
cin>>s;
for(int i=0;s[i]!='\0';i++)
n++;
for(int i=0;i<n;++i)
for(int j=i+1;j<n;++j)
{
if(s[i]>s[j])
{
temp=s[i];
s[i]=s[j];
s[j]=temp;
}
}
cout<<"In lexicographical order: " <<endl;
for(int i=0;i<n;++i)
{
cout<<s[i];
}
return 0;
}
