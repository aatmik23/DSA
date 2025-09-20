#include <stdio.h>

//traversal
void display(int arr[], int n){
    for ( int i = 0; i < n; i++)
    {
        printf("%d \n",arr[i]);
    }
    
}

//insertion
int deletona(int arr[],int size,int index){
    for (int i = index; i <= size; i++){
        arr[i]=arr[i+1];
      
    }
    
}


int main(){
    int arr[100]={1,3,56,45,78};
    int size = 5,index=3,capacity=100,element=45;
    display(arr,size);
    deletona(arr,size,index);
    size-=1;
    display(arr,size);



}