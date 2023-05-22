#include <bits/stdc++.h>
using namespace std;
int f(int a,int b)
{
  if(a==b)
  return a;
   return a&f(a+1,b);
}
int main()
{
  //write your code here
  int l,r;
  cin>>l>>r;
  cout<<f(l,r)<<endl;
  return 0;
}