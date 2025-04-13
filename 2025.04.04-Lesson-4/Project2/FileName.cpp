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

class BTree
{
private:
	node* root;

	void recursiveDelete(node* root)
	{
		if (root == nullptr)
		{
			return;
		}
		recursiveDelete(root->left);
		recursiveDelete(root->right);
		delete root;
	}

	void print(node* root, int depth = 0)
	{
		if (root == nullptr) return;
		print(root->left, depth + 1);
		for (int i = 0; i < depth; ++i) printf("\t");
		printf("%d\n", root->data);
		print(root->right, depth + 1);
	}

	void add(node*& root, int element)
	{
		if (root == nullptr)
		{
			root = new node(element);
			return;
		}
		if (element < root->data)
		{
			return add(root->left, element);
		}
		if (element > root->data)
		{
			return add(root->right, element);
		}
	}

public:
	BTree() : root(nullptr) {}
	~BTree()
	{
		recursiveDelete(root);
	}
	void add(int element)
	{
		add(root, element);
	}
	void print()
	{
		print(root);
	}
};

int main(int argc, char* argv)
{
	BTree tree1;
	tree1.add(16);
	tree1.add(8);
	tree1.add(12);
	tree1.add(4);
	tree1.add(24);
	tree1.add(20);
	tree1.print();

	return 0;
}