#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char* argv[]){

    int i;
    int j;
    int k;
    long long int accum;

    int n = atoi(argv[1]);

    printf("n = %d\n\n", n);
    
    int *a = malloc(n* n * sizeof(int));
    int *b = malloc(n* n * sizeof(int));

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            a[i*n +j] = rand()%10;
            printf("%d ", a[i*n +j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            b[i*n +j] = rand()%10;
            printf("%d ", b[i*n +j]);
        }
        printf("\n");
    }

    printf("\n");

    time_t begin = time(NULL);
    for(i=0; i<n; i++){
        
        for(j=0; j<n; j++){
            accum = 0;

            for(k=0; k<n; k++){
                accum += a[i * n + k] * b[n * k + j];  
            }

            printf("%lld ", accum);
        }
        printf("\n");
    }
    time_t end = time(NULL);
    
    printf("Tiempo de ejecucion es %f", difftime(end, begin));

    return 0;
}
