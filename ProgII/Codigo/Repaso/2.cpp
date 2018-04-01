#include <iostream>
using namespace std;

#include <cstdio>
#include <cstdlib>
#include <cstring>

// Definicion de funciones;
void initMat(int[][10], int, int); 
void showMat(int [][10], int, int);
int getPosofMaxinRow(int[][10], int);

int main(void)
{
    int selectedRow;
    cout << "Ingrese la fila a consultar: ";
    cin >> selectedRow;
    int Mat[10][10];
    initMat(Mat, 10, 10);
    showMat(Mat, 10, 10); 
    cout << "El mayor numero de la fila " << selectedRow  << " se encuentra en la posicion " << getPosofMaxinRow(Mat, 3) << endl;
    return 0;
}

// Declaracion de funciones
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
    for(int i = 0; i < Rows; i++)
    {
        cout << "Fila[" << i << "] ";
        for(int ni = 0; ni < Cols; ni++)
        {
            cout << Mat[i][ni] << '\t';
        }
        cout << endl;
    }
}

int getPosofMaxinRow(int Mat[][10], int Row)
{
    int tmp = Mat[Row][0];
    int pos = 0;
    for(int i = 0; i < 10; i++)
    {
        if( Mat[Row][i] > tmp )
        {
            tmp = Mat[Row][i];
            pos = i;
        }
    }
    return pos;
}

