#include<iostream>

struct Node
{
	int data;
	Node* left;
	Node* right;
	Node(int data, Node* left = nullptr, Node* right = nullptr) :
		data(data), left(left), right(right)
	{}
	~Node()
	{
		data = 0;
		left = nullptr;
		right = nullptr;
	}
};

class BTree
{
private:
	Node* root;
	void addElement(int element, Node*& node)
	{
		if (node == nullptr)
		{
			node = new Node(element);
		}
		else
		{
			if (node->data > element)
			{
				return addElement(element, node->left);
			}
			if (node->data < element)
			{
				return addElement(element, node->right);
			}
		}
	}
	void addElement1(int element, Node* node)
	{
		if (node == nullptr)
		{
			return;
		}
		else
		{
			if (node->data > element)
			{
				if (node->left == nullptr)
				{
					node->left = new Node(element);
				}
				else
				{
					return addElement(element, node->left);
				}
			}
			if (node->data < element)
			{
				if (node->right == nullptr)
				{
					node->right = new Node(element);
				}
				else
				{
					return addElement(element, node->right);
				}
			}

		}

	}
	Node* addElement2(int element, Node* node)
	{
		if (node == nullptr)
		{
			return new Node(element);
		}
		else
		{
			if (node->data > element)
			{
				node->left = addElement2(element, node->left);
			}
			if (node->data < element)
			{
				node->right = addElement2(element, node->right);
			}
		}
		return node;
	}
	void print(Node* node, int depth = 0)
	{
		if (node != nullptr)
		{
			print(node->right, depth + 1);
			for (int i = 0; i < depth; ++i) printf("  ");
			printf("%d\n", node->data);
			print(node->left, depth + 1);
		}
	}

public:
	BTree() : root(nullptr) {}
	void add0(int element)
	{
		if (root == nullptr)
		{
			root = new Node(element);
			return;
		}
		Node* temp = root;
		while (true)
		{
			if (temp->data > element)
			{
				if (temp->left == nullptr)
				{
					temp->left = new Node(element);
					break;
				}
				else
				{
					temp = temp->left;
					continue;
				}
			}
			if (temp->data < element)
			{
				if (temp->right == nullptr)
				{
					temp->right = new Node(element);
					break;
				}
				else
				{
					temp = temp->right;
					continue;
				}
			}
			break;
		}
		
	}
	void add(int element)
	{
		//root = addElement2(element, root);
		return addElement(element, root);
	}
	void print()
	{
		return print(root);
	}

};

int main(int argc, char* argv[])
{
	BTree btree;
	btree.add(8);
	btree.add(6);
	btree.add(10);
	btree.add(7);
	btree.add(5);
	btree.add(9);
	btree.add(11);
	btree.print();
	return EXIT_SUCCESS;
}