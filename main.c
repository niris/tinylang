#include <stdio.h>
void main(){
	char storage[256]={}; // must be outside the while !
	while(1){
		char c = getchar();
		if(c==EOF)break;
		switch(c){
			case ' ':case '\n':case '\r': break;//skip spaces
			case 's':{
				char index = getchar();
				char value = getchar();
				storage[index] = value;
				}break;
			case 'p':{
				char index = getchar();
				printf("storage[%c]=%c\n", index, storage[index]);
				}break;
			default:printf("unknown char '%c'\n", c);
		}
	}
}