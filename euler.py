# Euler
import numpy as np
import time
import statistics

import matplotlib.pyplot as plt

import ctypes

def euler (x):
    return pow((1+1/x),x)




def encontrar_mediana(arreglo):
    # Ordena el arreglo
    arreglo_ordenado = sorted(arreglo)
    
    # Calcula la longitud del arreglo
    n = len(arreglo_ordenado)
    
    # Si el arreglo tiene un número impar de elementos, la mediana es el valor del medio
    if n % 2 == 1:
        mediana = arreglo_ordenado[n // 2]
    # Si el arreglo tiene un número par de elementos, la mediana es el promedio de los dos valores del medio
    else:
        mediana = (arreglo_ordenado[(n // 2) - 1] + arreglo_ordenado[n // 2]) / 2.0
    
    return mediana



if __name__ == '__main__':

    N = 1000

    # Cargamos la biblioteca compartida    
    lib = ctypes.CDLL('./lib_euler.so')

    # Especificamos el tipo de retorno y los tipos de argumentos
    lib.euler.argtypes = [ctypes.c_int]
    lib.euler.restype = ctypes.c_double

    iteraciones = 100

    time_python = []
    time_c = []

    for i in range(iteraciones):

        
        #Se está tomando 100 veces la medicion de cuanto tiempo le demora realizar un cálculo: (1+1/x)^x, con x=10000
        #Primero para c y luego para python

        tic2 = time.perf_counter()
        lib.euler(N)
        toc2 = time.perf_counter()

        time_c.append(1e6*(toc2-tic2))

        #print("Tiempo Pow en C",toc2-tic2)

        tic1 = time.perf_counter()
        euler(N)
        toc1 = time.perf_counter()

        time_python.append(1e6*(toc1-tic1))
        #print("Tiempo pow Python",toc1-tic1)



    print(time_c)
    print("----------------------------------------------------------------------------------------------------------------------")
    print(time_python)
    print("----------------------------------------------------------------------------------------------------------------------")
    n= encontrar_mediana(time_c)
    print(n)
    print("----------------------------------------------------------------------------------------------------------------------")
    
    print("python ordenado",sorted(time_python))

    plt.plot(time_python)
    plt.plot(time_c)
    plt.grid()
    plt.legend(["Time Python", "Time C"])
    plt.xlabel("Iteraciones")
    plt.ylabel("Tiempo [us]")
    plt.savefig("Euler_comparacion2.png")
    plt.close()
    