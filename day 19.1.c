#include<stdio.h>

int main() {
	
	int n;
	
	printf("Enter Size : ");
	scanf ("%d",&n);
	
	int arr [n] [n];
	int i,j;
	
	for (i=0;j<n;j++){
		
		for (j=0;j<n;j++){
			
			printf ("Enter Elements [%d] [%d] :",i,j);
			scanf  ("%d",&arr[i][j]);
		}
	}
	for (i=0;j<n;i++){
		
		for (j=0;j<n;j++){
			
			printf ("%d",arr[i][j]);
		}
		
		    printf ("\n");
	}
	return 0;
}
