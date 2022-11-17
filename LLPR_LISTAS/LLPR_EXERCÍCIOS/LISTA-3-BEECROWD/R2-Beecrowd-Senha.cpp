#include <stdio.h>
 
int main() {
    
    int s;
	
	scanf("%d", &s);
	
	if(s == 2002) {
	    printf("Acesso Permitido\n");
	}
	while(s != 2002) {
		printf("Senha Invalida\n");
		scanf("%d", &s);
		if(s == 2002) {
	    printf("Acesso Permitido\n");
	}
	}
    
    return 0;
}
