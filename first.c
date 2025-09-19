#include <stdio.h>
#include <stdlib.h>

struct myarray {
    int totalsize;
    int usedsize;
    int* ptr;
};
void createarray(struct myarray* a,int tsize,int usize){
    a->totalsize = tsize;
    a->usedsize = usize;
    a->ptr = (int*)malloc(tsize*sizeof(int));

} 
void show(struct myarray* a){
    for (int i = 0; i < a->usedsize; i++)
    {
        printf("%d",a->ptr[i]);
    }
    
}
void set(struct myarray* a){
    int n;
    for (int i = 0; i < a->usedsize; i++)
    {
        printf("enter the umber");
        scanf("%d",&n);
        a->ptr[i]=n;
    }
    
}
int main(){
    struct myarray marks;
    createarray(&marks,10,2);
    
    set(&marks);
show(&marks);10

  
}







