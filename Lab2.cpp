#include<cmath>
#include<iostream>
using namespace std;
int main()
{
int x,y;
cout <<"Enter x,y" <<std::endl;
cin >> x >> y;
if(x>=0 && y>=0 && y>=x/2 && pow((x-2),2)+pow((y-0),2)<=4) {
cout << "yes" << std::endl;
}
else
{
cout << "no" <<::endl;
}
return 0;
}
