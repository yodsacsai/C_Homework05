#include"stdio.h"

main(){
	int score[4][3]; // 2 Dimension
	int i,j;
	
	for(i=0;i<=3;i++){
		for(j=0;j<=2;j++){
			printf("Enter score subject %d : ",i+1);
			scanf("%d",&score[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	getch();
}
