#include <stdio.h>

int main() {
    int n;
    int S = 0;
    for (n = 1; n <= 20; n++) {
        if (n % 2 == 1) {
            S += 12 * n - 11;
        } else {
            S -= 12 * n - 22;
        }
        printf("Termino %d: %d\n", n, S);
    }
    return 0;
}