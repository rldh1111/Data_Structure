#pragma once
#include <iostream>
typedef int BTData;

typedef struct _bTreeNode
{
	BTData data;
	struct _bTreeNode* left;
	struct _bTreeNode* right;
} BTreeNode;


void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub);
void MakeRightSubTree(BTreeNode* main, BTreeNode* sub);

class TreeNode
{
private:
	int data;
	TreeNode* left;
	TreeNode* right;
public:
	TreeNode()
		: left(nullptr), right(nullptr) {};

	int getData()
	{
		return data;
	}

	void setData(int data)
	{
		this->data = data;
	}

	TreeNode* getLeftSubTree()
	{
		return left;
	}

	TreeNode* GetRightSubTree()
	{
		return right;
	}

	void MakeLeftSubTree(TreeNode* sub)
	{
		left = sub;
	}
	void MakeRightSubTree(TreeNode* sub)
	{
		right = sub;
	}



};