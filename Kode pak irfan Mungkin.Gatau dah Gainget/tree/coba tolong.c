#include <stdio.h>
#include <stdlib.h>
 #include <time.h>
 
 struct treeNode {                                        
      struct treeNode *leftPtr;  /* treeNode pointer */     
      int data;                  /* define data as an int */
      struct treeNode *rightPtr; /* treeNode pointer */     
   }; /* end structure treeNode */                          
   
   typedef struct treeNode TreeNode;
   typedef TreeNode *TreeNodePtr;
   
   /* prototypes */
   void insertNode( TreeNodePtr *treePtr, int value );
   void inOrder( TreeNodePtr treePtr );
   void preOrder( TreeNodePtr treePtr );
   void postOrder( TreeNodePtr treePtr );
   
 
int main() {
        FILE * ap;
        char cor;
        printf("File Input\n");
        //open a file
        ap = fopen("02_file_input.txt", "w");
        //writing operation
        while ((cor = getchar()) != EOF) {
            putc(cor, ap);
        }
        //close file
        fclose(ap);
        printf("Data Entered:\n");
        //reading
        ap = fopen("02_file_input.txt", "r");
        while ((cor = getc(ap)) != EOF) {
            printf("%c", cor);
        }
    
	    
    int i;                      /* counter */
    int item;                   /* variable to hold random values */ 
    TreeNodePtr rootPtr = NULL; /* initialize rootPtr */
 
    srand( time( NULL ) ); 
    printf( "The numbers being placed in the tree are:\n" );
 
    /* insert random values between 1 and 15 in the tree */
    for ( i = 1; i <= 10; i++ ) { 
       item = rand() % 15;
       printf( "%3d", item );
       insertNode( &rootPtr, item );
    } /* end for */
 
    /* traverse the tree preOrder */
    printf( "\n\nThe preOrder traversal is:\n" ); 
    preOrder( rootPtr );
 
    /* traverse the tree inOrder */
    printf( "\n\nThe inOrder traversal is:\n" );
    inOrder( rootPtr );
 
    /* traverse the tree postOrder */ 
    printf( "\n\nThe postOrder traversal is:\n" );
    postOrder( rootPtr );
    
    fclose(ap);
  	
	     return 0; /* indicates successful termination */ 
} /* end main */
        
/* insert node into tree */
void insertNode( TreeNodePtr *treePtr, int value )
{ 
   
   /* if tree is empty */
   if ( *treePtr == NULL ) {   
      *treePtr = malloc( sizeof( TreeNode ) );
      /* if memory was allocated then assign data */
      if ( *treePtr != NULL ) { 
         ( *treePtr )->data = value;
         ( *treePtr )->leftPtr = NULL;
         ( *treePtr )->rightPtr = NULL;
      } /* end if */
      else {
         printf( "%d not inserted. No memory available.\n",value);
		 } /* end else */
   } /* end if */   
   
        else { /* tree is not empty */ 
  
        /* data to insert is less than data in current node */
        if ( value < ( *treePtr )->data ) {                   
           insertNode( &( ( *treePtr )->leftPtr ), value );   
        } /* end if */                                        
  
        /* data to insert is greater than data in current node */
        else if ( value > ( *treePtr )->data ) {                 
           insertNode( &( ( *treePtr )->rightPtr ), value );     
        } /* end else if */                                      
        else { /* duplicate data value ignored */
           printf( "dup" );
        } /* end else */
  
     } /* end else */
  
  } /* end function insertNode */
  
  /* begin inorder traversal of tree */
  void inOrder( TreeNodePtr treePtr ){
     /* if tree is not empty then traverse */
    if ( treePtr != NULL ) {                
       inOrder( treePtr->leftPtr );               
		printf( "%3d", treePtr->data );             
		inOrder( treePtr->rightPtr );            } /* end if */                           
 } /* end function inOrder */
 
 /* begin preorder traversal of tree */
 void preOrder( TreeNodePtr treePtr )
 { 
 
    /* if tree is not empty then traverse */   
	if ( treePtr != NULL ) {            
	 printf( "%3d", treePtr->data );
	preOrder( treePtr->leftPtr );               
	preOrder( treePtr->rightPtr );          
	} /* end if */                           
 } /* end function preOrder */
    
  
  /* begin postorder traversal of tree */
  void postOrder( TreeNodePtr treePtr ){ 
     /* if tree is not empty then traverse */  
	if ( treePtr != NULL ) {                       
	postOrder( treePtr->leftPtr );             
	postOrder( treePtr->rightPtr );          
	printf( "%3d", treePtr->data );    
	} /* end if */                           
  } /* end function postOrder */        
    

