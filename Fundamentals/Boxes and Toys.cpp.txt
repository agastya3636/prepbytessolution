#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t,c=0;
  cin>>t;
  while(t--)
  {
    int a,b;
    cin>>a>>b;
    if(b-a>=2)
    c++;
  }
  
  cout<<c<<endl;
  return 0;
}