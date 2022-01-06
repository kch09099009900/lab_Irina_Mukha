#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;
int main()
{
  setlocale(LC_ALL, "Russian");
  double x;
  cout<<"введите число:"<<endl;
  cin>>x;
  double s=sqrt(x);
  cout<<setprecision (4)<<fixed <<s; 
  while(x<=0)
  {cout<<"заданное число меньше нуля"<<endl;break;}/* понятия не имею, как убрать нан*/
 
  
  
  
  
  return 0;   
    
}

