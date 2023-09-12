import numpy as np
import ctypes

def funcion_array_op(arr,N):
    for i in range(N):
        arr[i] = arr[i]+3.5

if __name__ == '__main__':
 
    lib = ctypes.CDLL('./lib_array.so')

    lib.funcion_op_array.argtypes = [np.ctypeslib.ndpointer(dtype = np.float32), ctypes.c_int]

    arreglo = [1.1,2.5,3.10,4.1,1.5,6.5,70.2]

    array_test = np.asarray(arreglo).astype(np.float32)
    array_test_C = np.asarray([1.1,2.5,3.10,4.1,1.5,6.5,70.2]).astype(np.float32)

    
    print("Arreglo en Python",array_test)
    funcion_array_op(array_test,len(array_test))
    print(array_test)

    print("Arreglo en C",array_test_C)
    lib.funcion_op_array(array_test_C,len(array_test_C))
    print(array_test_C)