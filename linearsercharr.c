#include <stdio.h>

int lines(int arr[],int size,int element){
    for (int i = 0; i < size; i++)
    {  
        if (arr[i]==element){
            return i;
        }
    
    }
        return -1;
    
}

int main(){
    int arr[]={10,20,56,87,56,32,45};
    int size = sizeof(arr)/sizeof(int);
    printf("%d \n",size);
    printf("%d",lines(arr,size,87));

}