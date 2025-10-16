#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int key;
	struct Node *left,*right;
}
struct Node* newNode(int item)
{
	struct Node* temp = malloc(sizeof(struct Node));
	temp->key = item;
	temp->right = temp->left= NULL;
	return temp;
}

#insert()
struct Node* insertElement(struct Node* root,int key)
{
	if(root==NULL)
	return newNode(key);
	
	if(key<root->key)
	root->left=insertElement(root->left,key);
	else if(key>root->key)
	root->right=insertElement(root->right,key);
	
	return root;
	
}
void InorderTraversal(struct Node* root)
{
	if(root)
	{
		inorderTraversal(root->left);
		printf("%d ",root->key);
		inorderTraversal(root->right);
		
	}
}
void PreorderTraversal(struct Node* root)
{
	if(root)
	{
		printf("%d ",root->key);
		PreorderTraversal(root->left);
		PreorderTraversal(root->right);
	}
}

void Postordertraversal(struct Node* root)
{
	if(root)
	{
		Postordertraversal(root->left);
		Postordertraversal(root->right);
		printf("%d ",root->key);
	}
}

struct Node* deleteNode(struct Node*, int key)
{
	if(root==NULL)
	return root;
	if(key<root->key)
	root->left=deleteNode(root->left,key);
	root->right=deleteNode(root->right,key);
	else
	{
		if(root->left==NULL && root->right==NULL)
		{
			free(root);
			return NULL;
		}
	
	else if(root->left==NULL)
	{
		struct Node* temp = root->right;
		free(root);
		return temp;
	}
	else if(root->right==NULL)
	{
		struct Node* temp = root->left;
		free(root);
		return NULL;
	}
	struct Node* temp = MinvalueNode(root->right);
	root->key=temp->key;
	root->right = deleteNode(root->right,temp->key);
		}
		return root;
}





