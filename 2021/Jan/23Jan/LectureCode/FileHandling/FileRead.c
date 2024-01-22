#include<stdio.h>
void main(){

	printf("%d\n",stdin->_fileno); // 0
	printf("%d\n",stdout->_fileno); // 1 
	printf("%d\n",stderr->_fileno); // 2

	FILE *fp1 = fopen("OS.txt","r");
	printf("%d\n",fp1->_fileno);
	
	FILE *fp2 = fopen("OS.txt","w");
	printf("%d\n",fp2->_fileno);
	
	FILE *fp3 = fopen("OS.txt","r");
	printf("%d\n",fp3->_fileno);
	
	FILE *fp4 = fopen("outstd.txt","r");
	printf("%d\n",fp4->_fileno);

}
