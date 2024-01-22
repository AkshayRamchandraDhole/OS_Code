#include<stdio.h>
#include<fcntl.h>
void main(){

int fd = open("Core2web.txt",O_CREAT,0744);
printf("%d\n",fd);
}
