#include <iostream>
using namespace std;
int main()
{
int m, n;
cout << "m="; cin >> m;
cout << "n="; cin >> n;
cout << m/n%10 << "\n" << (int) ((double)m/n*10)%10 << "\n";
cout << "Для продолжения нажмите Enter\n";
cin.get();//пару раз,чтобы наверняка
return 0;
}
