#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int c=0;
  for(int i=0;i<n;i++)
  {
    int s=0;
    for(int j=0;j<n;j++)
    {
      if(a[i]==a[j])
      s++;
    }
    if(s==1)
    c++;
  }
  cout<<c<<endl;
  return 0;
}