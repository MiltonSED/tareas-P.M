#include <stdio.h>

int main()
{    // entradas
    float consumo_min, consumo_max, precio_G;
    const float LPG = 3.78;  // G = 3.78 litros


    printf("Ingrese el consumo minimo en L/100 km: ");
    scanf("%f", &consumo_min);
    printf("Ingrese el consumo maximo en L/100 km: ");
    scanf("%f", &consumo_max);
    printf("Ingrese el costo del galon de combustible: ");
    scanf("%f", &precio_G);

    // Imprimir la tabla
    printf("%-20s %-20s\n","Consumo (L/100 km)", "Precio por km");
    for (float consumo = consumo_min; consumo <= consumo_max; consumo++)
    {
        float precio_por_km = (consumo / 100) * (precio_G / LPG);
        printf("%-20.2f %-20.4f\n", consumo, precio_por_km);
    }

    return 0;
}
