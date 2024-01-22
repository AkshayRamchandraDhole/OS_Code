#include<stdio.h>
void main(){

FILE *fp = fopen("Core2web.txt","w");
if(fp==NULL)
	printf("File Not Found\n");
else
	printf("File Found\n");
printf("%d\n",fp->_fileno);

}
