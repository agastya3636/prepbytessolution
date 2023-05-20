#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  
  int t;
  cin>>t;
  int a[]={1000,500,100,50,20,10,5,2,1};
  while(t--)
  {
    int s=0;
    int n;
    cin>>n;
    for(int i=0;i<9;i++)
    {
      s=s+n/a[i];
      n=n%a[i];
    }
    cout<<s<<endl;
  }
  return 0;
}