#include <stdio.h>
#define parent(x) (x-1)/2

void heap(int *data, int size){
    for(int i =1; i<size; i++){
        int child = i;
        while(child>0){
            int root = parent(child);
            if(data[root] < data[child]){
                int temp = data[root];
                data[root] = data[child];
                data[child] = temp;
            }
            child = root;
        }
    }
}

void sort(int *data, int size){
    for(int i=size-1; i>=0; i--){
        int temp = data[i];
        data[i] = data[0];
        data[0] = temp;

        heap(data,i);
    }
}

int main()
{

    int size;
    scanf("%d ", &size);
    int data[size];

    for(int i=0; i<size; i++){
        scanf("%d ",&data[i]);
    }


    heap(data,size);
    sort(data,size);

    for(int i=0; i<size; i++){
        printf("%d ",data[i]);
    }
    int a = (size-1)/2;
    printf("\n%d",data[a]);
    return 0;
}