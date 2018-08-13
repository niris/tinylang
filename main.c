#include <stdio.h>
void main(){
	char storage = '?'; // must be outside the while !
	while(1){
		char c = getchar();
		if(c==EOF)break;
		switch(c){
			case ' ':case '\n':case '\r': break;//skip spaces
			case 's':storage=getchar();break;
			case 'p':printf("storage=%c\n", storage);break;
			default:printf("unknown char '%c'\n", c);
		}
	}
}