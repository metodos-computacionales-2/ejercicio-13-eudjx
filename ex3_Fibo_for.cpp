#include <iostream>

int main ()
{
std::cout<<"Ingrese un número"<<std::endl;
int N;
std::cin>>N;
int a=1;
int b=0;
while(b<N){
a=a+b;
std::cout<<a<<std::endl;

b=a+b;
std::cout<<b<<std::endl;

}

return 0;
}
