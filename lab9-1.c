#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){

	
	int buffer[10000]; 
	FILE *fp;

	fp = fopen("testfile1.txt", "r+");


	if (fp){
		while(fp != EOF){
		fread(buffer,1 ,10000, fp);	
		}
	
	}


	return 0; 
}
