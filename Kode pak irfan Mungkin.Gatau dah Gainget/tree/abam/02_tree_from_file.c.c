#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

unsigned int leaf(struct node *root) 
{ 
  if(root == NULL)        
    return 0; 
  if(root->left == NULL && root->right==NULL)       
    return 1;             
  else 
    return leaf(root->left)+ 
           leaf(root->right);       
} 

int leftLeavesSum(struct node *root){
	int res = 0;
	
	if(root != NULL){
		if(leaf(root->left)){
			res += root->left->data; 
		}else{
			 res += leftLeavesSum(root->left); 
			 res += leftLeavesSum(root->right);
		}
	}
}

int rightLeavesSum(struct node *root){
	int res = 0;
	
	if(root != NULL){
		if(leaf(root->right)){
			res += root->right->data; 
		}else{
			 res += leftLeavesSum(root->left); 
			 res += leftLeavesSum(root->right);
		}
	}
}

struct node *newnode(int i){
	struct node *curnode = (struct node*)malloc(sizeof(struct node));
	curnode->data = i;
	curnode->left = NULL;
	curnode->right = NULL;
	
	return curnode;
}

void printpreorder(struct node *root){
	if(root == NULL){
		return;
	}
	printf(" %d ", root->data);
	printpreorder(root->left);
	printpreorder(root->right);
}
	

int main(){
	
	FILE *fp;
	fp = fopen("02_file_input.txt", "r");
	char varinput[150];
	
	while(!feof(fp)){
		fgets(varinput, 150, fp);
		puts(varinput);
	}
	fclose(fp);
	
	printf("binary tree in preorder traversal. \n");

	struct node *root = newnode(1);
	root->left = newnode(3);
	root->left->left = newnode(5); 
	root->left->right = newnode(7);
	root->right = newnode(9);
	root->right->right = newnode(11);
	root->right->left = newnode(13);
	
	printpreorder(root);
	
	printf("\n\n the leaf is : %d \n", leaf(root));
	
	printf("\n the left leaves sum is : %d \n", leftLeavesSum(root));
	
	printf("\n the right leaves sum is : %d \n", rightLeavesSum(root));
	
	return 0;
}

