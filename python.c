//JorTEC was here :)

#include <stddef.h> //Para size_t
#include <string.h> //Para strcmp
#include <stdio.h>  //Para printf

#define len(arr) (sizeof(arr) / sizeof((arr)[0]))

static int max_int(const int arr[], size_t n) { //static es como el private de Java: no puede ser llamada directamente
    int max = arr[0];
    for (size_t i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

static long max_long(const long arr[], size_t n) {
    long max = arr[0];
    for (size_t i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

static float max_float(const float arr[], size_t n) {
    float max = arr[0];
    for (size_t i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

static double max_double(const double arr[], size_t n) {
    double max = arr[0];
    for (size_t i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

static const char *max_string(char *const arr[], size_t n) {
    const char *max = arr[0];
    for (size_t i = 1; i < n; i++) {
        if (strcmp(arr[i], max) > 0) {
            max = arr[i];
        }
    }
    return max;
}

static const char *max_cstring(const char *arr[], size_t n) {
    const char *max = arr[0];
    for (size_t i = 1; i < n; i++) {
        if (strcmp(arr[i], max) > 0) {
            max = arr[i];
        }
    }
    return max;
}

static int min_int(const int arr[], size_t n) {
    int min = arr[0];
    for (size_t i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

static long min_long(const long arr[], size_t n) {
    long min = arr[0];
    for (size_t i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

static float min_float(const float arr[], size_t n) {
    float min = arr[0];
    for (size_t i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

static double min_double(const double arr[], size_t n) {
    double min = arr[0];
    for (size_t i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

static const char *min_string(char *const arr[], size_t n) {
    const char *min = arr[0];
    for (size_t i = 1; i < n; i++) {
        if (strcmp(arr[i], min) < 0) {
            min = arr[i];
        }
    }
    return min;
}

static const char *min_cstring(const char *arr[], size_t n) {
    const char *min = arr[0];
    for (size_t i = 1; i < n; i++) {
        if (strcmp(arr[i], min) < 0) {
            min = arr[i];
        }
    }
    return min;
}

static int sum_int(const int arr[], size_t n) {
    int total = 0;
    for (size_t i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

static long sum_long(const long arr[], size_t n) {
    long total = 0;
    for (size_t i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

static float sum_float(const float arr[], size_t n) {
    float total = 0.0f;
    for (size_t i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

static double sum_double(const double arr[], size_t n) {
    double total = 0.0;
    for (size_t i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

static double mean_int(const int arr[], size_t n) {
    return (double)sum_int(arr, n) / (double)n;
}

static double mean_long(const long arr[], size_t n) {
    return (double)sum_long(arr, n) / (double)n;
}

static double mean_float(const float arr[], size_t n) {
    return (double)sum_float(arr, n) / (double)n;
}

static double mean_double(const double arr[], size_t n) {
    return sum_double(arr, n) / (double)n;
}

static void sort_int(int arr[], size_t n) {
    for (size_t i = 0; i + 1 < n; i++) {
        for (size_t j = 0; j + 1 < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

static void sort_long(long arr[], size_t n) {
    for (size_t i = 0; i + 1 < n; i++) {
        for (size_t j = 0; j + 1 < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                long tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

static void sort_float(float arr[], size_t n) {
    for (size_t i = 0; i + 1 < n; i++) {
        for (size_t j = 0; j + 1 < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                float tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

static void sort_double(double arr[], size_t n) {
    for (size_t i = 0; i + 1 < n; i++) {
        for (size_t j = 0; j + 1 < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                double tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

static void sort_string(char *arr[], size_t n) {
    for (size_t i = 0; i + 1 < n; i++) {
        for (size_t j = 0; j + 1 < n - i; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                char *tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

static void sort_cstring(const char *arr[], size_t n) {
    for (size_t i = 0; i + 1 < n; i++) {
        for (size_t j = 0; j + 1 < n - i; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                const char *tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

static void print_int_arr(const int arr[], size_t n) {
    printf("[");
    for (size_t i = 0; i < n; i++) {
        if (i < n - 1) {
            printf("%d, ", arr[i]);
        } else {
            printf("%d", arr[i]);
        }
    }
    printf("]\n");
}

static void print_long_arr(const long arr[], size_t n) {
    printf("[");
    for (size_t i = 0; i < n; i++) {
        if (i < n - 1) {
            printf("%ld, ", arr[i]);
        } else {
            printf("%ld", arr[i]);
        }
    }
    printf("]\n");
}

static void print_float_arr(const float arr[], size_t n) {
    printf("[");
    for (size_t i = 0; i < n; i++) {
        if (i < n - 1) {
            printf("%.2f, ", arr[i]);
        } else {
            printf("%.2f", arr[i]);
        }
    }
    printf("]\n");
}

static void print_double_arr(const double arr[], size_t n) {
    printf("[");
    for (size_t i = 0; i < n; i++) {
        if (i < n - 1) {
            printf("%.2lf, ", arr[i]);
        } else {
            printf("%.2lf", arr[i]);
        }
    }
    printf("]\n");
}

static void print_string_arr(char *const arr[], size_t n) {
    printf("[");
    for (size_t i = 0; i < n; i++) {
        if (i < n - 1) {
            printf("%s, ", arr[i]);
        } else {
            printf("%s", arr[i]);
        }
    }
    printf("]\n");
}

static void print_cstring_arr(const char *arr[], size_t n) {
    printf("[");
    for (size_t i = 0; i < n; i++) {
        if (i < n - 1) {
            printf("%s, ", arr[i]);
        } else {
            printf("%s", arr[i]);
        }
    }
    printf("]\n");
}

//Nota: En C, no existe la sobrecarga de funciones.
#define max(arr) _Generic((arr)[0], \
    int: max_int, \
    long: max_long, \
    float: max_float, \
    double: max_double, \
    char *: max_string, \
    const char *: max_cstring \
)((arr), len(arr))

#define min(arr) _Generic((arr)[0], \
    int: min_int, \
    long: min_long, \
    float: min_float, \
    double: min_double, \
    char *: min_string, \
    const char *: min_cstring \
)((arr), len(arr))

#define sum(arr) _Generic((arr)[0], \
    int: sum_int, \
    long: sum_long, \
    float: sum_float, \
    double: sum_double \
)((arr), len(arr))

#define mean(arr) _Generic((arr)[0], \
    int: mean_int, \
    long: mean_long, \
    float: mean_float, \
    double: mean_double \
)((arr), len(arr))

#define sorted(arr) _Generic((arr)[0], \
    int: sort_int, \
    long: sort_long, \
    float: sort_float, \
    double: sort_double, \
    char *: sort_string, \
    const char *: sort_cstring \
)((arr), len(arr))

#define print_arr(arr) _Generic((arr)[0], \
    int: print_int_arr, \
    long: print_long_arr, \
    float: print_float_arr, \
    double: print_double_arr, \
    char *: print_string_arr, \
    const char *: print_cstring_arr \
)((arr), len(arr))