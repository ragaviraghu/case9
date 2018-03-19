#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
long int kabali_ninjas,opp_ninjas;
while(cin>>kabali_ninjas>>opp_ninjas)
{
cout<<labs(kabali_ninjas-opp_ninjas)<<endl;
}
return 0;
}
