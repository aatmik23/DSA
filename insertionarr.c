#include <stdio.h>

//traversal
void display(int arr[], int n){
    for ( int i = 0; i < n; i++)
    {
        printf("%d \n",arr[i]);
    }
    
}

//insertion
int insertion(int arr[],int size,int index,int capacity,int element){
    if(size>=capacity){
       return -1;
    }
    for (int i= size-1;i >= index;i--){
           arr[i+1]=arr[i];

    }
    arr[index]=element;
    size+=1;
    if (arr[index]=element){
        display(arr,size);
    }
}


int main(){
    int arr[100]={1,3,56,78};
    int size = 4,index=3,capacity=100,element=45;
    display(arr,size);
    insertion(arr,size,index,capacity,element);
    size=5;



}