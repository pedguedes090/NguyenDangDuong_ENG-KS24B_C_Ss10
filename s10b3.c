#include<stdio.h>
 
 int main() {
   int arr[]={2,1,5,3,6};
   for(int i=0;i <5-1;i++) {
		int minIndex = i;
    	for(int j=i+1;j < 5;j++) {
	  		if(arr[j] < arr[minIndex]){
	   			minIndex=j;
		}
	}
		int temp=arr[minIndex];
		arr[minIndex]=arr[i];
		arr[i]=temp;	  
  }
	for(int i=0;i <5;i++){
	 	printf("%d",arr[i]);
	} 
}
 

