#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  int s=0;
  while(t>0)
  {
    s=s*10+t%10;
    t=t/10;
  }
  cout<<s<<endl;
  return 0;
}