#include <stdio.h>
#include <stdarg.h>

void foo(int, ...);

int main(void) {
    double x = 1.1, y = 2.1, z = 3.9;
    double a = 0.1, b = 0.2, c = 0.3;

    puts("三個參數：");
    foo(3, x, y, z);

    puts("六個參數：");
    foo(6, x, y, z, a, b, c);

    return 0;
}

void foo(int len, ...) {
    
    va_list arg;
    va_start(arg, len);
    for(int j = 0; j < len; j++) {
        printf("%.1f\n", va_arg(arg, double));
    }

    va_end(arg);
}