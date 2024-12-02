#include<stdio.h>

int main(){
	int arr[]={2,1,5,3,6};
	for(int i=0;i<5-1;i++){
		for(int j=0;j<5-i-1;j++){
 	 	if(arr[j] >arr[j+1]){
 	 		int temp;
 	 		temp=arr[j+1];
 	 		arr[j+1]=arr[j];
 	 		arr[j]=temp;
		  }
	  }
	}
	for(int i=0;i<5;i++){
	   	 printf("%d",arr[i]);
	   }
}
