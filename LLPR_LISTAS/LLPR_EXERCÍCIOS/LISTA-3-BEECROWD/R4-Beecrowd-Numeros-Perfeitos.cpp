#include <stdio.h>
 
int main() {
 
    int N, X, C, numero, soma=0;
    
    scanf("%d", &N);
    
    for(int C=0; C<N; C++){
        scanf("%d", &X);
        soma=0;
        for(int numero=1; numero<X; numero++){
            if(X%numero==0){
                soma+=numero;
                
            }
        }
        
        if(soma!=X){
            printf("%d nao eh perfeito\n", X);
        }else{
            printf("%d eh perfeito\n", X);
        }
    }
 
    return 0;
}
