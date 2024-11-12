#include <stdio.h> //Libreria estandar de entrada y salida en C

int main (int argc, char *argv[]) {
    float n1, n2, prom,asistencia;
    printf("Ingrese la nota 1: ");
    scanf("%f",&n1);

    printf("Ingrese la nota 2: ");
    scanf("%f",&n2);

    printf("Ingrese la asistencia: ");
    scanf("%f", &asistencia);

    //printf("Ingrese la nota 1 y nota 2 (n1,n2)");
    //scanf("%f %f", &n1,&n2);
    
    prom=(n1+n2)/2;
    printf("El promedio es: %f\n",prom);

    if (prom>=0 && prom<=3) //o=|| 
    {
        printf("Insuficiente\n");
    }
    if (prom>3 && prom<=5) 
    {
        printf("Regular\n");
    }
        if (prom>5 && prom<=7) 
    {
        printf("Bueno\n");
    }
        if (prom>7 && prom<=9) 
    {
        printf("Muy bueno\n");
    }
        if (prom>9 && prom<=10) 
    {
        printf("Excelente\n");
    }
    

    if (prom>=6)
    {
        printf("Aprobado");
    }
    else{
        printf("Reprobado\n");
        if (asistencia>=80)
        {
            printf("Puede dar examen de recuperacion");
        }
        else{
            printf("No puede dar examen de recuperacion");
        }
        
    }

    
    return 0;
}