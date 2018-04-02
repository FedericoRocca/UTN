#include <iostream>
using namespace std;

#include <cstdio>
#include <cstdlib>
#include <cstring>

// Declaraciones de funciones
void initMat(int[][10], int, int);
void showMat(int[][10], int, int);
int addbyCol(int[][10], int);

int main( void )
{

    int Mat[10][10];
    int selectedCol;
    cout << "Seleccione la columna a sumar: ";
    cin >> selectedCol;
    initMat(Mat, 10, 10);
    showMat(Mat, 10, 10);
    cout << "La suma de la columna " << selectedCol << " es " << addbyCol(Mat, selectedCol) << endl;
    return 0;
}

void initMat(int Mat[][10], int Rows, int Cols)
{
    for(int i = 0; i < Rows; i++)
    {
        for(int ni = 0; ni < Cols; ni++)
        {
            Mat[i][ni] = ni + i;
        }
    }
}

void showMat(int Mat[][10], int Rows, int Cols)
{
    for( int i = 0; i < Rows; i++ )
    {
        cout << "Fila[" << i << "] ";
        for( int ni = 0; ni < Cols; ni++ )
        {
            cout << Mat[i][ni] << '\t';
        }
        cout << endl;
    }
}

int addbyCol(int Mat[][10], int Col)
{
    int tmp = 0;
    for(int i = 0; i < 10; i++)
    {
        tmp += Mat[i][Col];
    }
    return tmp;
}
