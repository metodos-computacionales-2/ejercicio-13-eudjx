#include <iostream>

int subs(int a , int b)
{
int r;
r=a-b;
return r;
}

int main(void)
{
int x=5, y=3, z;
z=subs(7,2);
std::cout<<"La dirección de x es: "<<&x<<std::endl;
std::cout<<"La dirección de y es: "<<&y<<std::endl;
std::cout<<"La dirección de z es: "<<&z<<std::endl;
return 0;
}
