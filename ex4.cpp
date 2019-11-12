#include <iostream>

int getMax(int a, int b)
{
if (a>b)
{
return a;
}
else
{
return b;
}
}

double getMax(double a, double b)
{
if (a>b)
{
return a;
}
else
{

return b;
}
}


int main(void)

{



int x=1, y=20;
double z=5.8, w=2.9;
std::cout<<getMax(x,y)<<"\n";
std::cout<<getMax(z,w)<<"\n";
return 0;

}


