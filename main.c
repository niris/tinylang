#include <stdio.h>
#define aton(c) (c-'0') // ascii to number
#define ntoa(c) (c+'0') // number to ascii

void main(){
	char storage[256]={}; // must be outside the while !
	while(1){
		char c = getchar();
		if(c==EOF)break;
		switch(c){
			case ' ':case '\n':case '\r': break;//skip spaces
			case '+':{
				char src1_index = getchar();
				char src1_value = aton(storage[src1_index]);
				char src2_index = getchar();
				char src2_value = aton(storage[src2_index]);
				char dest_index = getchar();
				storage[dest_index] = ntoa(src1_value + src2_value);
				}break;
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