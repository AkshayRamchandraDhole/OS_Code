#include<stdio.h>
#include<fcntl.h>
void main(){

	char buff[50];

	int fd = open("Bielearn.txt",O_RDWR|O_CREAT);

/*	printf("%d\n",fd);

	int num = read(fd,buff,40);

	buff[num] ='/0';

	printf("%d\n",num);

	printf("%s\n",buff);
*/
	write(fd,"FullStack",10);


}
