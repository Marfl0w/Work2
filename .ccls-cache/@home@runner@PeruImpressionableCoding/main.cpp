#include <iostream>
#include <math.h>
using namespace std;
int main(){
double x,y,h,a,b,z;
cout << "Введіть початкове значення х: "; cin>>a;
cout << "Введіть кінцеве значення х: "; cin >> b;
cout << "Введіть крок для х: "; cin >> h;
cout<<"\n  Х   Y(X)   Z(X) \n";   
for (x=a; x<=b+0.1*h; x+=h){
y=x/pow(x-3,2);
z=fabs(cos(x/3));
  cout<<"x= "<< x << "  "<< y << "  "<< z << endl;
}
}
