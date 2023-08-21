import sys


def es_primo(num):

    i=1
    cant_divisores=0
    while(i<=num):
    
        if(num%i==0):
            cant_divisores= cant_divisores+1

        i= i+1

    if(cant_divisores==2):
            return 1


def es_potencia_n(num,n):

    indice=0

    while(indice<=num):

        if(num==pow(n,indice)):
            
            return 1

            
        elif(pow(n,indice)>i):
            break
            
        indice +=1
            


if __name__ == "__main__":

    limit_inf = int(sys.argv[1])
    limit_sup = int(sys.argv[2])
    opcion = int(sys.argv[3])

    if(opcion==1):
        
        cant_primos=0

        for i in range(limit_inf,limit_sup+1):

            #Hallaremos si es primo mediante una funcion
            if(es_primo(i)):
                cant_primos +=1
                


        print("Hay",cant_primos," números primos en este rango")
    
    elif(opcion==2):

        cant_potencias2=0

        for i in range(limit_inf,limit_sup+1):

            

            indice=0

            while(indice<=i):

                if(i==pow(2,indice)):
                    cant_potencias2 +=1
                    break

                
                elif(pow(2,indice)>i):
                    break
                
                indice +=1
            
        print(" Hay",cant_potencias2, "potencias de 2 en este rango")

    elif(opcion==3):

        cant_potencias3=0

        for i in range(limit_inf,limit_sup+1):

            indice=0

            while(indice<=i):

                if(i==pow(3,indice)):
                    cant_potencias3 +=1
                    break

                
                elif(pow(3,indice)>i):
                    break
                
                indice +=1
            
        print(" Hay",cant_potencias3, "potencias de 3 en este rango")

    else:

        n=opcion
        cant_potencias_n=0

        for i in range(limit_inf,limit_sup+1):

            # Hallaremos  si el numero(i) es potencia de n mediante una funcion
            if(es_potencia_n(i,n)):
                cant_potencias_n +=1

        
        print("Hay",cant_potencias_n," potencias de",opcion," en este rango \n")
