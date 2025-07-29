#include<stdio.h>
#include<stdlib.h>
int arr[20],piv,n=sizeof(arr)/sizeof(arr[0]);
void partition(int arr,int i,int j){
    int i=0;
    piv=arr[i ];
    j=n-1;
    while(i<j){
        while(piv>arr[i]){
            i++;
        }
        while(arr[piv]<arr[j]){
            j--;
        }
        if(i<j){

        }
    }


    
}