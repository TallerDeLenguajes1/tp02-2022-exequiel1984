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

void PcVieja(struct compu *);

void PcRapida(struct compu *);

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
    
    PcVieja(equipos);

    PcRapida(equipos);

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

void PcVieja(struct compu *equipos){
    int masAntigua = 2018;
    struct compu datosPcAntigua;

    for (int i = 0; i < 5; i++)
    {
        if (masAntigua > equipos[i].anio)
        {
            datosPcAntigua.velocidad = equipos[i].velocidad;
            datosPcAntigua.anio = equipos[i].anio;
            datosPcAntigua.tipo_cpu = equipos[i].tipo_cpu;
            datosPcAntigua.cantidad = equipos[i].cantidad;

            masAntigua = equipos[i].anio;
        }
    }

    printf("PC MAS ANTIGUA\n");
    printf("Velocidad: %d GHz\n", datosPcAntigua.velocidad);
    printf("Año: %d\n", datosPcAntigua.anio);
    printf("Tipo de procesador: %s\n", datosPcAntigua.tipo_cpu);
    printf("Cantidad de nucleos: %d\n", datosPcAntigua.cantidad);
    printf("\n");
    
}

void PcRapida(struct compu *equipos){
    int mayorVelocidad = 0;
    struct compu datosPcAntigua;

    for (int i = 0; i < 5; i++)
    {
        if (mayorVelocidad > equipos[i].velocidad)
        {
            datosPcAntigua.velocidad = equipos[i].velocidad;
            datosPcAntigua.anio = equipos[i].anio;
            datosPcAntigua.tipo_cpu = equipos[i].tipo_cpu;
            datosPcAntigua.cantidad = equipos[i].cantidad;

            mayorVelocidad = equipos[i].velocidad;
        }
    }

    printf("PC CON MAYOR VELOCIDAD\n");
    printf("Velocidad: %d GHz\n", datosPcAntigua.velocidad);
    printf("Año: %d\n", datosPcAntigua.anio);
    printf("Tipo de procesador: %s\n", datosPcAntigua.tipo_cpu);
    printf("Cantidad de nucleos: %d\n", datosPcAntigua.cantidad);
    printf("\n");
    
}