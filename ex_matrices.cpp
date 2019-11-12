

#include<iostream>
using namespace std;

void mult(double A[20][20], int filasA, int colsA, double B[20][20], int filasB, int colsB, double C[20][20])
{
if (colsA==filasB)
{
for (int i=0; i < filasA; i++)
{
for (int j=0; j<colsB; j++)
{
C[i][j]=0;
for (int k=0; k < colsA; k++)
{
C[i][j]+=A[i][k]*B[k][j];
}
}
}
}
}

void llenar_matriz(double M[20][20], int filas, int cols)
{
cout<<"Ingrese datos de la matriz: "<<endl;
for (int i=0; i<filas; i++)
{
for (int j=0;j<cols;j++)
{
cin>>M[i][j];
}
}
}

void mostrar_matriz(double M[20][20], int filas, int columnas)
{
cout<<"Ingrese los datos de la matriz:"<<endl;
for (int i=0; i<filas; i++)
{
for (int j=0;j<columnas;j++)
{
cout<<M[i][j]<<"\t"<<endl;
}
cout<<endl;
}
cout<<endl;
}

int main( int argc, char *argv[])
{
double A[20][20];
double B[20][20];
double C[20][20];
int filasA, colsA, filasB, colsB;
cout.precision(16);
cout.setf(std::ios::scientific);
cout<<"\t"<<"Matriz A:"<<endl;
cout<<"Ingrese filas de la matriz A:"<<endl;
cin>>filasA;
cout<<"Ingrese columnas de la matriz A:"<<endl;
cin>>colsA;
llenar_matriz(A, filasA, colsA);
cout<<"\t"<<"Matriz B:"<<endl;
cout<<"El npumero de filas tiene que ser."<<colsA<<"para que se puedan multiplicar"<<endl;
filasB=colsA;
cout<<"Ingrese columnas de la matriz B:"<<endl;
cin>>colsB;
llenar_matriz(B, filasB, colsB);
mult(A, filasA, colsA, B, filasB, colsB, C);
cout<<"Matriz A:"<<endl;
mostrar_matriz(A, filasA,colsA);
cout<<"Matriz B:"<<endl;
mostrar_matriz(B, filasB, colsB);
cout<<"Matriz AxB:"<<endl;
mostrar_matriz(C, filasA, colsB);

return 0;

}

