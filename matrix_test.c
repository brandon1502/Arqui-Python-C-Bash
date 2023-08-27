#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int rows = 3, cols = 4;

    //Esto asigna memoria para 3 punteros a enteros, donde cada 
    // puntero apuntará eventualmente a una fila de la matriz
    // COMO COLUMNA
    int **matrix = (int **) malloc (rows*sizeof(int*));

    for (int i = 0; i< rows; i++)
    {
        // se utiliza para asignar memoria a cada fila. 
        //Asigna memoria para 4 enteros (valores int) para cada fila.
        matrix [i] = (int*) malloc (cols*sizeof(int));
    }

    for (int i = 0;i<rows;i++)
    {
        for(int j = 0;j< cols; j++)
        {
            matrix[i][j] = i+j;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    // matrix[0][0] = 5;
        for (int i = 0;i<rows;i++)
    {
        for(int j = 0;j< cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}