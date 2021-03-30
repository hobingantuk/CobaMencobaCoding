#include <stdio.h>  //Rangga Aulia Pradana 
#include <stdlib.h>  //5025201154
#include <string.h>


struct node
{
    int count;
    char* key;
    struct node* left;
    struct node* right;
};

struct node newNode(char item)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = NULL;
    temp->right = NULL;
    temp->count = 1;
    return temp;
};


void printpreOrder(struct node* root)
{
    if(root != NULL)
    {
        printpreOrder(root->left);
        printpreOrder(root->right);
        printf("%s \n", root->key);
    }
}

struct node* insert(struct node* node, char* key)
{
    if(node == NULL)//When tree is empty
        return newNode(key);
    if(strcmp(key, node->key) < 0)
        node->left = insert(node->left, key);
    if(strcmp(key, node->key) > 0)
        node->right = insert(node->right, key);

    return node;

};



int main()
{

    struct node *root = NULL;


    int i = 0;
    char str[100];
    FILE* fp;
    fp = fopen("02_file_input.txt", "r");
    if ((fp = fopen("02_file_input.txt","r")) == NULL)
    {
        printf("Could not open 02_file_input.txt\n");
        exit(1);
    }

    while(fgets(str, 100, fp) != NULL)
    {
        ++i;
        root = insert(root, str);
       

    }


    printf("bst printed\n");
    printpreOrder(root);
 
    return 0;
}
