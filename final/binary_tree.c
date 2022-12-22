#include <stdio.h>
#include <stdlib.h>
#define NUM 20

int data[NUM] = {0};
int BinaryTree[NUM] = {0};

void CreatBinaryTree(int data[], int n){
    int node = 1;

    for(int i = 0; i < NUM; i++){
        BinaryTree[i] = 0;
    }
    for(int i = 0; i < n; i++){
        BinaryTree[node] = data[i];
        node = node + 1;
    }
}

void Preorder(int node){
    if(BinaryTree[node] != 0){
        if(BinaryTree[node] != 0){
            printf("%d ", BinaryTree[node]);
        }
        Preorder(2*node);
        Preorder(2*node + 1);
    }
}

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf(" %d", &data[i]);
    }

    CreatBinaryTree(data, n);
    Preorder(1);
    printf("\n");
    
    return 0;
}
