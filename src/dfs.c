/*
 * Search an expression using DFS.
 */

#include <stdio.h>		/* scanf, printf */
#include <stdlib.h>		/* abort */
#include <stdbool.h>		/* bool, true, false */
#include "dfs.h"


void DFT (node * root)
{
	// Implement DFS
	// Hint: You can use print_node, print_tree and/or print_stack.

  //using a recursive function, its checks all elements of the tree:

  if(root == NULL){ //if the current element is NULL, return
    return;
  }
  print_node(root); //prints the current element

  DFT(root->lchild); //calls DFT to the left child
  DFT(root->rchild); //calls DFT to the right child
  

  return;

}

node *make_node (int num, node * left, node * right)
{

  node *tree_node = (node*)malloc(sizeof(node)); //Allocating memory to new node
	tree_node->num = num; //gives new node a value
  tree_node->visited = false; //initializes visited as false
  tree_node->lchild = left; //sets left child to the node left
  tree_node->rchild = right; //sets left child to the node right
  
  return tree_node; //returns the created node
}

void free_node (node * p)
{
      free(p); //frees the node p
      return;    
}


void print_node (node * p)
{

  if (p == NULL)
    printf ("NULL\n");
  else
    printf ("%d, ", p->num);
}


void print_tree (node * p, int depth)
{
  for (int i = 0; i < depth; i = i + 1)
    printf (" ");
  printf ("| ");

  if (p == NULL)
    printf ("NULL\n");
  else
    printf ("[%d]\n", p->num);


  if (p->lchild)
    {
      print_tree (p->lchild, depth + 1);
    }

  if (p->rchild)
    print_tree (p->rchild, depth + 1);
}

stack *push (stack * topp, node * node)
{
	return 0;
}

bool isEmpty (stack * topp)
{
  return false;
}

node *top (stack * topp)
{
	return 0;
}

// Utility function to pop topp  
// element from the stack 

stack *pop (stack * topp)
{
	
  
  return 0;
}

void print_stack (stack * topp)
{
  struct stack *temp = topp;

  while (temp != NULL)
    {

      print_node (temp->node);
      printf ("\n");

      temp = temp->next;
    }

  printf ("====\n");

  return;
}
