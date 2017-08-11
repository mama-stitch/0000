#include<stdio.h>

int main(){
	
	int a[] = {3,4,1,6,5,83,43,2,34};
	int i, j, temp;
	
	printf("start\n");
	
	for(i = 0; i < 9; i++){
		printf(" %d ",a[i]);
	}

	for(i = 0; i < 8; i++){
		for(j = 8; j > i; j--){
			if(a[j] < a[j - 1]){
				temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;

			}
		}

	}

	
	printf("\nend\n");
	
	for(i = 0; i < 9; i++){
		printf(" %d ",a[i]);
	}

}
