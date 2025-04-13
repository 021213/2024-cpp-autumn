#include<iostream>

struct node
{
	int data;
	node* left;
	node* right;
	node(int data, node* left = nullptr, node* right = nullptr) :
		data(data),
		left(left),
		right(right)
	{}
};

void printtree(node* root, int depth = 0)
{
	if (root == nullptr) return;
	printtree(root->left, depth + 1);
	for (int i = 0; i < depth; ++i) printf("\t");
	printf("%d\n", root->data);
	printtree(root->right, depth + 1);
}

void addelement(node*& root, int element)
{
	if (root == nullptr)
	{
		root = new node(element);
		return;
	}
	if (element < root->data)
	{
		return addelement(root->left, element);
	}
	if (element > root->data)
	{
		return addelement(root->right, element);
	}
}

void recursiveDeleteNode(node* root)
{
	if (root == nullptr)
	{
		return;
	}
	recursiveDeleteNode(root->left);
	recursiveDeleteNode(root->right);
	delete root;
}

int main(int argc, char* argv)
{
	node* node1 = new node(5);
	node1->left = new node(3);
	node1->right = new node(8);
	node1->left->left = new node(1);
	node1->left->right = new node(4);
	node1->right->left = new node(7);
	node1->right->right = new node(9);
	printtree(node1);

	node* node2 = nullptr;
	addelement(node2, 16);
	addelement(node2, 8);
	addelement(node2, 12);
	addelement(node2, 4);
	addelement(node2, 24);
	addelement(node2, 20);
	printtree(node2);

	recursiveDeleteNode(node1);
	recursiveDeleteNode(node2);

	return 0;
}