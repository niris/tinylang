#include <stdio.h>
void main(){
	while(1){
		char c = getchar();
		if(c==EOF)break;
		switch(c){
			case ' ':case '\n':case '\r': break;//skip spaces
			case 'h':printf("Hi !\n");break;
			default:printf("unknown char '%c'\n", c);
		}
	}
}