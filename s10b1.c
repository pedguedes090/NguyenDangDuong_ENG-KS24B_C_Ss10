#include<stdio.h>

int main(){
	int arr[6]={3,5,6,7,8,2};
	int x;
	printf("moi ban nhap phan tu: ");
	scanf("%d",&x);
	for(int i = 0;i < 6; i++){
		if(arr[i] ==x){
			printf("phan tu %d ton tai o vi tri %d.\n", x,i+1);
		}
		}		
	}
