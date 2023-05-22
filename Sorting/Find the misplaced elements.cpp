#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin >>t;
  while(t--)
  {
    int n ,c=0;
    cin>>n;
    int a[n],b[n];
    int i=0;
    while(i<n)
    {
      cin>>a[i];
      b[i]=a[i];
      i++;
    }
    sort(a,a+n);
     i=0;
    while(i<n)
    {
      if(a[i]==b[i])
      c++;
      i++;
    }
    cout<<n-c<<endl;
  }
  return 0;
}