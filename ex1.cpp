#include <iostream>                                                                                                                                                   int addition( int &a, int &b)                                                      {                                                                                  int r;                                                                             r=a+b;                                                                             a=r;                                                                               return r;                                                                          }                                                                                                                                                                     int main(void)                                                                     {                                                                                  int x, y, z;                                                                       x=5;                                                                               y=3;                                                                               z=addition(x,y);                                                                   std::cout<<"La dirección de x es:"<<&x<<"\n";                                      std::cout<<"La dirección de y es:"<<&y<<"\n";                                      std::cout<<"La dirección de z es :"<<&z<<"\n"<<std::endl;                                                                                                             return 0;                                                                          }   