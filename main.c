#include <stdio.h>
#define aton(c) (c-'0') // ascii to number
#define ntoa(c) (c+'0') // number to ascii

void main(){
	char storage[256]={}; // must be outside the while !
	FILE* file = fopen("code.txt","r");
	if(!file)printf("unable to open code.txt file");
	else while(1){
		char c = getc(file);
		if(c==EOF)break;
		switch(c){
			case ' ':case '\n':case '\r': break;//skip spaces
			case '@':{
				char position = aton(getc(file));
				fseek(file, position, SEEK_SET);
				}break;
			case '+':{
				char src1_index = getc(file);
				char src1_value = aton(storage[src1_index]);
				char src2_index = getc(file);
				char src2_value = aton(storage[src2_index]);
				char dest_index = getc(file);
				storage[dest_index] = ntoa(src1_value + src2_value);
				}break;
			case 's':{
				char index = getc(file);
				char value = getc(file);
				storage[index] = value;
				}break;
			case 'p':{
				char index = getc(file);
				printf("storage[%c]=%c\n", index, storage[index]);
				}break;
			default:printf("unknown char '%c'\n", c);
		}
	}
}