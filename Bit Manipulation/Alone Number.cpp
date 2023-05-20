#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--)
  {
    int l;
    cin>>l;
    int a=0;
    for(int i=0;i<l;i++)
    {
      int b;
      cin>>b;
      a=a^b;
    }
    cout<<a<<endl;
  }
  
  return 0;
}