#include <stdio.h>
#include "listbase"
int GetOpPrec(char op)
{
	char op;
	switch (op)
	{
	case '/':
	case '*':
		return 5;
	case '+':
	case '-':
		return 3;
	case '(':
		return 1;
	default:
		return -1;
	}
}
int CompOp(char op1, char op2)
{
	int m_op1 = GetOpPrec(op1);
	int m_op2 = GetOpPrec(op2);
	if (m_op1 > m_op2)
		return 1;
	else if (m_op1 < m_op2)
		return -1;
	return 0;
}
void ConvertEXP(char exp[]) {
	Stack stack;
}