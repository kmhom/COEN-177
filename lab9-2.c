#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){

	int buff_size = argv[2]; 
	int buffer[buff_size]; 
	FILE *fp;

	fp = fopen("testfile1.txt", "r+");


	if (fp){
		while(fp != EOF){
		fread(buffer,4 ,2500, fp);	
		}
	
	}


	return 0; 
}
