#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct compu {
    int velocidad;//entre 1 y 3 Gherz
    int anio;//entre 2000 y 2017
    int cantidad;//entre 1 y 4
    char *tipo_cpu; //valores del arreglo tipos
};

void mostrarListaPC(struct compu *);

int main(){
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    struct compu equipos[5];    

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        equipos[i].velocidad = 1 + rand()%3;
        equipos[i].anio = 2000 + rand()%17;
        equipos[i].tipo_cpu = tipos[rand()%6];
        equipos[i].cantidad = 1 + rand()%4;
    }

    mostrarListaPC(equipos);
    
    getchar();
    return 0;
}

void mostrarListaPC(struct compu *equipos){
    for (int i = 0; i < 5; i++)
    {
        printf("PC %d\n", i+1);
        printf("Velocidad: %d GHz\n", equipos[i].velocidad);
        printf("Año: %d\n", equipos[i].anio);
        printf("Tipo de procesador: %s\n", equipos[i].tipo_cpu);
        printf("Cantidad de nucleos: %d\n", equipos[i].cantidad);
        printf("\n");
    }
}