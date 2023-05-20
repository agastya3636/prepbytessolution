#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  char c;
  cin>>c;
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<=i;j++)
    cout<<j+1;
    for(int j=i+1;j<5;j++)
    cout<<"  ";
    
    for(int j=i;j>=0;j--)
    cout<<j+1;
    cout<<endl;
  }
  
  return 0;
}