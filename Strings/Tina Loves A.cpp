#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.length();i++)
    {
      if(s[i]=='a')
      c++;
    }
    if(2*c-1>s.length())
    cout<<s.length()<<endl;
    else
    cout<<2*c-1<<endl;
  }
  return 0;
}