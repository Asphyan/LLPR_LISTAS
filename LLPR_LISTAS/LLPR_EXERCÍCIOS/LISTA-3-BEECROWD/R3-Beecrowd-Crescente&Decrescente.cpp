#include <stdio.h>
 
int main() {
    
    int x, y;
    
    scanf("%d", &x);
    scanf("%d", &y);
    
    do {
        if (x > y) {
            printf("Decrescente");
        } else {
            printf("Crescente");
        }
        scanf("%d", &x);
        scanf("%d", &y);
    } while (x != y);
 
    return 0;
}
