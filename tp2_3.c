#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 7

int main() {
    int i,j;
    int mt[N][M];
    int *punteroMatriz;

    punteroMatriz = &mt[0][0];

    for(i = 0;i<N; i++){
        
        for(j = 0;j<M; j++){
            *(punteroMatriz+i+j)= 1 + rand()%100;
            printf("%d ", *(punteroMatriz+i+j));
        }

        printf("\n");
    }
}


