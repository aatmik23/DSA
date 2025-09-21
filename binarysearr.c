#include <stdio.h>


int binarysearch(int arr[],int size, int element){
    int low=0,high=size-1;

    while(low<=high){
      int mid=(low+high)/2;

        if (arr[mid]==element){
            return 1;
        }
        else if (arr[mid]<element)
        {
          low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;


}

int main(){
    int arr[]={1,4,5,17,29,32,65};
    int element = 32;
    int size = sizeof(arr)/sizeof(int);
    int searchindex = binarysearch(arr,size,element);
    printf("%d is found at %d",element,searchindex);

}
