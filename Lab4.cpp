#include<iostream>
#include <locale>

using namespace std;
 double katalan(int n)
{
      double v=1, n1=1, n2=1;
      for (int i=1; i<=2*n; i++)
      v*=i;
      for(int i=1; i<=n+1; i++)
      n1*=i;
      for (int i=1;i<=n; i++)
      n2*=i;
     return v/(n1*n2);
}

int main()
{
  
  int n;
  cout<<"Enter number"<<endl;
  cin>>n;
 
  cout<<"Katalan number: "<<katalan(n)<<endl;
  return 0;
}
