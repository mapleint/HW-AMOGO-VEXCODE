#include <stdio.h>

int main (){
	int str[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int strb[10];
	FILE* fp = fopen("test.txt", "w");
	fwrite(str, sizeof(int), 10, fp);
	fclose(fp);
	fp = fopen("test.txt", "r");
	fread(&strb, sizeof(int), 10, fp);
	fclose(fp);
	for(int i = 0; i < sizeof(strb)/sizeof(int); i++)
		printf("%i %i\n", str[i], strb[i]);
}
