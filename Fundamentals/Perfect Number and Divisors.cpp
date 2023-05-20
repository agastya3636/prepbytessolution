#include <bits/stdc++.h>
using namespace std;

int sumd(int n)
{
  int s=0;
  for(int i=1;i<n;i++)
  {
    if(n%i==0)
    s=s+i;
  }
  return s;
}
int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--)
  {
    int a;
    cin>>a;
    if(a==sumd(a))
    cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
  }
  
  return 0;
}