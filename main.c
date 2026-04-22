//JorTEC was here :)

#include "python.c"

int main() {
    printf("Creando lista de enteros...\n");
    int arr[] = {5, 2, 9, 1, 5, 6};
    print_arr(arr);

    printf("Longitud: %zu\n", len(arr));
    printf("Máximo: %d\n", max(arr));
    printf("Mínimo: %d\n", min(arr));
    printf("Suma: %d\n", sum(arr));
    printf("Media: %.2f\n", mean(arr));
    printf("\nOrdenando la lista...\n");
    sorted(arr);
    print_arr(arr);

    printf("\nCreando lista de strings...\n");
    char *arr2[] = {"I like ya cut g", "XDDD", "N O I C E", "JorTEC was here :D"};
    print_arr(arr2);
    printf("Longitud: %zu\n", len(arr2));
    printf("Mayor alfabeticamente: %s\n", max(arr2));
    printf("Menor alfabeticamente: %s\n", min(arr2));
    printf("\nOrdenando la lista...\n");
    sorted(arr2);
    print_arr(arr2);

    return 0;
}