#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    cout<<__gcd(n,m)<<endl;
  }
  return 0;
}