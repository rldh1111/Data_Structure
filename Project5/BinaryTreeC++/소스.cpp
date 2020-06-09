#include "BinaryTree.h"
#include <iostream>
#include <stack>
#include <string>

TreeNode* makeTreeNode(char exp[])
{
	std::stack<TreeNode*> stack;
	int expLen = strlen(exp);
	TreeNode* newNode;
	for (int i = 0; i < expLen; i++)
	{
		newNode = new TreeNode;
		if (isdigit(exp[i]))
		{
			newNode->setData(exp[i] - '0');
		}
		else {
			newNode->MakeRightSubTree(stack.top());
			stack.pop();
			newNode->MakeLeftSubTree(stack.top());
			stack.pop();
			newNode->setData(exp[i]);
		}
		stack.push(newNode);
	}
	newNode = stack.top();
	stack.pop();
	return newNode;
}
int EvaluateExpTree(TreeNode* tn)
{
	int op1, op2;
	if (tn->getLeftSubTree() == NULL && tn->GetRightSubTree() == NULL)
		return tn->getData();

	op1 = EvaluateExpTree(tn->getLeftSubTree());
	op2 = EvaluateExpTree(tn->GetRightSubTree());

	switch (tn->getData())
	{
	case '+':
		return op1 + op2;
	case '-':
		return op1 - op2;
	case '*':
		return op1 * op2;
	case '/':
		return op1 / op2;
	}
	return 0;

}
void ShowNodeData(int data)
{
	if (0 <= data && data <= 9)
		printf("%d ", data);
	else
		printf("%c ", data);
}
typedef void VisitFuncPtr(BTData data);
void PreorderTraverse(TreeNode* bt, VisitFuncPtr action)
{
	if (bt == NULL)
		return;

	action(bt->getData());
	PreorderTraverse(bt->getLeftSubTree(), action);
	PreorderTraverse(bt->GetRightSubTree(), action);
}

void InorderTraverse(TreeNode* bt, VisitFuncPtr action)
{
	if (bt == NULL)
		return;

	
	InorderTraverse(bt->getLeftSubTree(), action);
	action(bt->getData());
	InorderTraverse(bt->GetRightSubTree(), action);
}

void PostorderTraverse(TreeNode* bt, VisitFuncPtr action)
{
	if (bt == NULL)
		return;


	PostorderTraverse(bt->getLeftSubTree(), action);
	PostorderTraverse(bt->GetRightSubTree(), action);
	action(bt->getData());
}
void ShowPrefixTypeExp(TreeNode* bt)
{
	PreorderTraverse(bt, ShowNodeData);
}

void ShowInfixTypeExp(TreeNode* bt)
{
	InorderTraverse(bt, ShowNodeData);
}

void ShowPostfixTypeExp(TreeNode* bt)
{
	PostorderTraverse(bt, ShowNodeData);
}
int main(void)
{
	

	char exp[] = "12+7*";

	TreeNode* eTree = makeTreeNode(exp);
	
	printf("전위 표기법의 수식: ");
	ShowPrefixTypeExp(eTree); printf("\n");

	printf("중위 표기법의 수식: ");
	ShowInfixTypeExp(eTree); printf("\n");

	printf("후위 표기법의 수식: ");
	ShowPostfixTypeExp(eTree); printf("\n");

	printf("연산의 결과: %d \n", EvaluateExpTree(eTree));
	
	


	
	return 0;
}