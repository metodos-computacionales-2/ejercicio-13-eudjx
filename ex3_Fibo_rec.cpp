#include <iostream>

int fibo(int n);

int main()
{
int N;
std::cout<<"Ingrese un número"<<std::endl;
std::cin>>N;
int r=0;
int val;
std::cout<<"Los números de Fibonacci son: "<<std::endl;
for (val=1; val <= N; val++)
{
r=fibo(val);
std::cout<<r<<std::endl;
}
return 0;
}

int fibo(int n)
{
if (n ==0)
{
return 0;
}
else if (n ==1)
{
return 1;
}
else
{
return fibo(n-1) + fibo (n-2);
}
}

