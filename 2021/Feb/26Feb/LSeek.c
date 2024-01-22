#include<stdio.h>
#include<fcntl.h>
void main(){

	/*int fd = creat("bielearn.txt",0744);
	
	write(fd,"Product E Learning Platform Secure Free Easy to use",30);
	
	char buff[30];
	
	int ofd = open("bielearn.txt",O_RDONLY);
	
	int num  = read(ofd,buff,15);*/

	char buff[30];	
	FILE *fp = fopen("bielearn.txt","r");

	lseek(fp->_fileno,10,0);
	int num = read(fp->_fileno,buff,10);
	
	buff[num]='\0';
	printf("%s\n",buff);


	lseek(fp->_fileno,10,1);
	num = read(fp->_fileno,buff,10);
	
	buff[num]='\0';
	printf("%s\n",buff);

	//printf("%s\n",buff);

}
