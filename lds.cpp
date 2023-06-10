#include <iostream>
  using namespace std;

int sum(int a,int b);

int main(){
    int x=3,y=4;
    int c;
    c=sum(x,y);
    cout<<c;
  return 0;
}

int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}