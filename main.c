#include <stdio.h>
void main(){
	while(1){
		char c = getchar();
		if(c==EOF)break;
		printf("c = %c\n", c);
	}
}