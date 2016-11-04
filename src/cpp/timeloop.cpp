#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int i = 1; i < (a + 1); i++) {
        printf("%d Abracadabra\n", i);
    }
    
    return 0;
}