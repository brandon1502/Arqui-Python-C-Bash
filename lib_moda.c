
long long moda_c(long long *array, int N)
{
    int contador_global = 0;
    int contador_interno;

    long long valor_retorno;

    for (int i = 0;i<N;i++){
        
        contador_interno = 0;
        for (int j = 0; j<N; j++)
        {
            if (array[j] == array[i])
            {
                contador_interno++;
            }
        }
        if (contador_interno>contador_global)
        {
            contador_global = contador_interno;
            valor_retorno = array[i];
        }
    }
    return valor_retorno;
}
