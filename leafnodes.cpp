#include<stdio.h>
#include<stdlib.h>
struct node
{
	node *left;
	int info;
	node *right;	
};
node * memory(int n)
{
    node* t =(node*)malloc(sizeof(node));
    t->info=n;
    t->left= NULL;
    t->right= NULL;
    return(t);
}
int check(node *r)
{
	if(r!=NULL)
	{
		if(r->left==NULL&&r->right==NULL)
		{		
			return 1;
		}
		else 
		{
			return 0;	
		}
	}
	else
	{
		return 0;
	}
}
void l_leaf(node *r)
{
	if(r!=NULL)
	{
		if(check(r->left))
		printf("\nThis node %d is a left leaf node",r->left->info);
		
		l_leaf(r->left);
		l_leaf(r->right);
	}
}
int main()
{
  	node *root =NULL;
  	root=memory(4);
    root->left=memory(2);
 	root->right =memory(6);
 	root->left->left=memory(1);
 	root->left->right=memory(3); 
 	root->right->left=memory(5); 
	l_leaf(root);
}
