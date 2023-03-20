#include<stdio.h>

int main (){
	
	int i , j , n , sum = 0 ;
	float average ;
	
	printf("Enter Size : ");
	scanf("%d",&n);
	
	int arr[n][n] ;
	
	for(i=0 ; i<n ; i++){
		
		for(j=0 ; j<n ; j++){
			printf("Enter Elements [%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0 ; i<n ; i++){
		
		for(j=0 ; j<n ; j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0 ; i<n ; i++){
		
		for(j=0 ; j<n ; j++){
			
			sum += arr[i][j];
			
		}
	}
	
	average = sum / (n*n) ; 
	
	printf("Average of your 2D Array is : %.2f",average);
	
	return 0 ;
}
