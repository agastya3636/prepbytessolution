#include <bits/stdc++.h>
using namespace std;
int main()
{
  //write your code here
  int t; 
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      int a;
      cin>>a;
      if(i%2==0)
      cout<<a<<" ";
    }
    cout<<endl;
  }
  return 0;
}