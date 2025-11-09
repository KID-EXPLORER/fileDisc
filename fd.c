#include <stdio.h>

int main(){

	dprintf(1,"hello world");			
	
	// file opening fd and FILE* notation
	// FILE* being pointer (a higher level input output stream is a "type")
	FILE *fp=fopen("dummy.txt","r");
	int fdnum=fileno(fp);
	printf("%d",fdnum);
	return 0;

}
