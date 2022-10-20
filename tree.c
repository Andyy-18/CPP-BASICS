#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#define MAX 5
typedef struct node TREE;
struct node {
   int data;

   TREE *leftChild;
   TREE *rightChild;
};

TREE *root = NULL;

void insert(int data) {
   TREE *tmp = (TREE*) malloc(sizeof(TREE));
   TREE *current;
   TREE *parent;

   tmp->data = data;
   tmp->leftChild = NULL;
   tmp->rightChild = NULL;

   //if tree is empty
   if(root == NULL) {
      root = tmp;
   } else {
      current = root;
      parent = NULL;

      while(1) {
         parent = current;

         //go to left of the tree
         if(data < parent->data) {
            current = current->leftChild;

            //insert to the left
            if(current == NULL) {
               parent->leftChild = tmp;
               return;
            }
         }  //go to right of the tree
         else {
            current = current->rightChild;

            //insert to the right
            if(current == NULL) {
               parent->rightChild = tmp;
               return;
            }
         }
      }
   }
}


void preorder(TREE* root) {
   if(root != NULL) {
      printf("%d ",root->data);
      preorder(root->leftChild);
      preorder(root->rightChild);
   }
}

void inorder(TREE* root) {
   if(root != NULL) {
      inorder(root->leftChild);
      printf("%d ",root->data);
      inorder(root->rightChild);
   }
}

void postorder(TREE* root) {
   if(root != NULL) {
      postorder(root->leftChild);
      postorder(root->rightChild);
      printf("%d ", root->data);
   }
}

int main() {
   int i;
   int array[MAX];
   printf("Enter Value : ");
   for(i=0;i<MAX;i++)
   {
       scanf("%d",&array[i]);
       insert(array[i]);
   }

   printf("\nPreorder traversal: ");
   preorder(root);

   printf("\n\nInorder traversal: ");
   inorder(root);

   printf("\n\nPostorder traversal: ");
   postorder(root);
   getch();
   return 0;
}
