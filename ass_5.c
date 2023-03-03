#include<stdio.h>
main(){
	
	int i,j,m,n,arr[10][10];
	
	printf("Enter the order of the Matrix : ");
	scanf("%d",&m);
	
	printf("Enter the order of the Matrix : ");
	scanf("%d",&n);
	
	printf("Enter the Elements of the Matrix ");
	for(i=0 ; i<m ; i++){
		for(j=0 ; j<n ; j++){
			printf("\nElement [%d][%d] ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0 ; i<m ; i++){
		for(j=0 ; j<n ; j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("Even Numbers of Matrix are : \n");
	for(i=0 ; i<m ; i++){
		for(j=0 ; j<n ; j++){
			if(arr[i][j]%2 == 0){
				printf("%d\n",arr[i][j]);
			}
		}
	}
}	
