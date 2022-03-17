#include"stdio.h"

main(){
	int x[10];
	int i;
	printf("++++++++++++++++++++\n");
	for(i=0;i<=9;i++){
		printf("Enter number %d : ",i+1);
		scanf("%d",&x[i]);
	}
	printf("++++++++++++++++++++\n");
	for(i=0;i<=9;i++){
		printf("Number %d : %d\n",i+1,x[i]);
	}
	printf("++++++++++++++++++++\n");
	
	
	getch();
}
