#include <iostream>
using namespace std;
int main()
{
string s;
cout<<"Enter the string : "<<endl;
cin>>s;
for(int i=0;s[i]!='\0';i++)
{
if(isdigit(s[i]))
cout<<s[i];
else
continue;
}
return 0;
}
