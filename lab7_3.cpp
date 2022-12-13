#include<iostream>

using namespace std;

int adiff(int x1,int x2)
{
  int r1,r2;
  r1 = x1%360;
  r2 = x2%360;
  if(r1>r2)
  {
  if( (r1-r2) <=180 )
  {
    return (r1-r2);
  }
  else if ( (r1-r2) >180)
  {
    return (360-(r1-r2));
  }
  }
  else
  {
    if( (r2-r1) <=180 )
  {
    return (r2-r1);
  }
  else if ( (r2-r1) >180)
  {
    return (360-(r2-r1));
  }
  }
  
  return 0;
}

int main(){
  cout << adiff(180,270)<<"\n";
  cout << adiff(210,45)<<"\n";
  cout << adiff(0,360)<<"\n";
  cout << adiff(10,350)<<"\n";
  cout << adiff(95,260)<<"\n";
  cout << adiff(90,-90)<<"\n";
  cout << adiff(1000,280)<<"\n";
  cout << adiff(60,244)<<"\n";
}
