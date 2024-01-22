#include<stdio.h>
#include<fcntl.h>
void main(){

	int fd = creat("Bielearn.txt",0744);

	write(fd,"Company Product",15);

	char buff[15];

	int fp = open("Bielearn.txt",O_RDONLY);

	int num = read(fp,buff,15);

	printf("%s\n",buff);
}
