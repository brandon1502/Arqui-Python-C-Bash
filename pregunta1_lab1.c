// Desarrollar un programa en C el cual trabajará con 3 argumentos de entrada 
// (A B C) que se ingresan desde la terminal de Linux, donde:
// ● A: límite inferior del rango evaluar
// ● B: límite superior del rango evaluar
// ● C: opción (1-> para contar primos dentro del rango, 2 -> contar potencias de 2 dentro del rango, 3-> contar potencias de 3, 
// k-> contar potencias de k)


#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(int argc, char const *argv[]){

    int limit_inf= atoi(argv[1]);
    int limit_sup= atoi(argv[2]);
    int opcion= atoi(argv[3]);

    int i;

    if(opcion==1){

        int cant_primos=0;
        for(i=limit_inf;i<=limit_sup;i++){

            int j;
            int cant_divisores=0;
            
            for(j=1;j<=i;j++){
                if(i%j==0){
                    cant_divisores += 1;
                }

            }
            if(cant_divisores==2){
                cant_primos +=1;
            }
            
        }
        printf("Hay %d numeros primos en este rango \n", cant_primos);

    }
    else if(opcion==2){
        
        int cant_potencias_2=0;

         for(i=limit_inf;i<=limit_sup;i++){
           
            int indice=0;

            while(indice<=i){

                if(i==pow(2,indice)){
                    cant_potencias_2 +=1;
                    break;

                }
                else if(pow(2,indice)>i){
                    break;
                }
            indice++;
            }
              
        }
        printf("Hay %d potencias de 2 en este rango \n", cant_potencias_2);




    }
    else if(opcion==3){

        
        int cant_potencias_3=0;

         for(i=limit_inf;i<=limit_sup;i++){
           
            int indice=0;

            while(indice<=i){

                if(i==pow(3,indice)){
                    cant_potencias_3 +=1;
                    break;

                }
                else if(pow(3,indice)>i){
                    break;
                }
            indice++;
            }
              
        }
        printf("Hay %d potencias de 3 en este rango \n", cant_potencias_3);

    }
    
    else{
        int n=opcion;
        int cant_potencias_n=0;

         for(i=limit_inf;i<=limit_sup;i++){
           
            int indice=0;

            while(indice<=i){

                if(i==pow(n,indice)){
                    cant_potencias_n +=1;
                    break;

                }
                else if(pow(n,indice)>i){
                    break;
                }
            indice++;
            }
              
        }
        printf("Hay %d potencias de %d en este rango \n", cant_potencias_n,opcion);

    }


    return 0;
}

