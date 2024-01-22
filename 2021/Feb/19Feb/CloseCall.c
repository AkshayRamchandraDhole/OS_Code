#include<stdio.h>
void main(){

	FILE *fp = fopen("HealthCare.txt","r");

	char buff[30];

	int num = read(fp->_fileno,buff,15);

	buff[num] = '/0';

	printf("%s\n",buff);

	//fclose(fp);
	
	close(fp->_fileno);

	fp = NULL;

	num = read(fp->_fileno,buff,15);

	buff[num] = '/0';

	printf("%s\n",buff);

}
