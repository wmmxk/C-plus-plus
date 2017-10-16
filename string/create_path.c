/*
	
	
g++ -o			 create_path create_path.c
	*/
#include <stdio.h>
#include <string.h>
int main(int arg, char *argv[])

{
char file_path[11]="./data/";
strcat (file_path, argv[1]);

printf("merged: %s\n", file_path);

return 0;
}
