#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){

	int buff_size = argv[2]; 
	int buffer[buff_size]; 
	FILE *fp;
	FILE *write_file;

	fp = fopen("testfile1.txt", "r+");
	write_file = fopen("writefile.txt", "w");

	if (fp){
		while(fp != EOF){
		fread(buffer,1 ,10000, fp);
		fwrite(buffer, 1, 10000, write_file);	
		}

		fclose(fp);
		fclose(write_file);
	
	}


	return 0; 
}
