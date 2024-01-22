#include<fcntl.h>
#include<stdio.h>
void main(){

	char buff[10];

	int fd = open("Core2web.txt",O_RDONLY);

	printf("%d\n",fd);

	int num = read(fd,buff,10);

	printf("%d\n",num);
	
	printf("%s\n",buff);
}
