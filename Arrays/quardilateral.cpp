#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--)
  {
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>x2>>x3>>x4>>y1>>y2>>y3>>y4;
    bool b=false;
    if(pow(x1-x2,2)+pow(y1-y2,2)==pow(x1-x4,2)+pow(y1-y4,2))
    {
      if(pow(x1-x2,2)+pow(y1-y2,2)==pow(x3-x4,2)+pow(y3-y4,2))
      {
        if(pow(x3-x2,2)+pow(y3-y2,2)==pow(x1-x4,2)+pow(y1-y4,2))
        b=true;
      }
    }
    if((x1==x2&&y1==y2)||(x1==x3&&y1==y3)||(x1==x4&&y1==y4)||(x3==x2&&y3==y2)||(x4==x2&&y4==y2)||(x3==x4&&y3==y4))
    b=false;
    if(b)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
  }
  return 0;
}