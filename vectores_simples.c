#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double euler(int x){

    return pow((1+1.0/x),x);
}


int main(){

    int N=10;
    double vector[N];

    for(int i=1;i<=N;i++){

        vector[i-1]=euler(i);
        printf("%.20lf \n",vector[i-1]);

    }

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double euler (int x){   
    
    return pow(1+1/(double)x,(double)x);
}

int main()
{
    int N = 10;

    //double vector[N];
    //double *vector = (double *)calloc(N,sizeof(double));
    double *vector = (double *)malloc(N*sizeof(double));
    
    printf ("[");
    for (int i = 1; i<=N;i++)
    {
        vector[i-1] = euler(i);
        
        printf("%.2lf,",vector[i-1]);
    }
    printf ("] \n");
    free (vector);
    return 0;
}

*/
