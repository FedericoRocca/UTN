#include <iostream>
using namespace std;

#include <cstdio>
#include <cstdlib>
#include <cstring>

int GetMaxInRow(int[][10], int);
void InitMat(int[][10], int, int);
void ShowMat(int[][10], int, int);

int main( void )
{
    int Mat[10][10];
    int Row;
    cout << "Ingrese el numero de fila: ";
    cin >> Row;
    InitMat(Mat, 10, 10);
    ShowMat(Mat, 10, 10);
    cout << endl;
    cout << "-----------------------" << endl;
    cout << endl;
    cout << "El mayor numero en la fila " << Row << " es el: " << GetMaxInRow(Mat, Row) << endl;
    return 0;
}

int GetMaxInRow(int Mat[][10], int Row)
{
   int tmp = Mat[Row][0];
   
   for( int i = 0; i < 10; i++ )
   {
      if( Mat[Row][i] > tmp )
      {
         tmp = Mat[Row][i];
      }
   }

   return tmp;
}

void InitMat(int Mat[][10], int Rows, int Cols)
{
   for(int i = 0; i < Rows; i++)
   {
      for(int ni = 0; ni < Cols; ni++)
      {
         Mat[i][ni] = ni + i;
      }
   }
}

void ShowMat(int Mat[][10], int Rows, int Cols)
{
   for(int i = 0; i < Rows; i++)
   {
      cout << "Fila[" << i << "] " ;
      for(int ni = 0; ni < Cols; ni++)
      {
         cout << Mat[i][ni] << '\t';
      }
      cout << endl;
   }
}
