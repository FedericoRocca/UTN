#include <iostream>
using namespace std;

#include <cstdio>
#include <cstdlib>
#include <cstring>

// Declaraciones de funciones
void initMat(int[][10], int, int);
void showMat(int[][10], int, int);
int addbyRow(int[][10], int);

int main( void )
{

    int Mat[10][10];
    int selectedRow;
    cout << "Seleccione la columna a sumar: ";
    cin >> selectedRow;
    initMat(Mat, 10, 10);
    showMat(Mat, 10, 10);
    cout << "La suma de la fila " << selectedRow << " es " << addbyRow(Mat, selectedRow) << endl;
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

int addbyRow(int Mat[][10], int Row)
{
    int tmp = 0;
    for(int i = 0; i < 10; i++)
    {
        tmp += Mat[Row][i];
    }
    return tmp;
}
