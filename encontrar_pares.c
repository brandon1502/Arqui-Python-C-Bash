#include <math.h>
#include <stdlib.h>

void encontrar_pares(int* arreglo,int longArreglo,int* x,int* y,int* k){
    int cantPares=0;
    for(int i=0;i<longArreglo;i++){
        for(int j=i+1;j<longArreglo;j++){
            if(fabs(sqrt(1.0*arreglo[i]*arreglo[j])-trunc(sqrt(1.0*arreglo[i]*arreglo[j])))<0.0001){
                
                //Con esto está llenando los vectores x e y
                x[cantPares]=arreglo[i];
                y[cantPares]=arreglo[j];  
                cantPares++;
            }
        }
    }
    *k=cantPares;
}
