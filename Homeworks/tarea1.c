#include <stdio.h>

int main(int argc, char **argv) {
    int num1, num2;
    float division;

    printf("Ingrese el primer numero\n");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero\n");
    scanf("%d", &num2);

    if (num2 == 0) {
        printf("No se puede dividir por 0, pruebe otro valor\n");
    } else {
        division = (float)num1 / num2;
        printf("La division de %d y %d es %.3f\n", num1, num2, division);
    }

    return 0;
}
