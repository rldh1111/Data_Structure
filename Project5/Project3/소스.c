//#include <stdio.h>
//#include <stdlib.h>
//#include "../../../../OneDrive/πŸ≈¡ »≠∏È/Data_Structure_Src/Ch06/ListBaseStack/ListBaseStack.h"
//#include<string.h>
//#include <ctype.h>
//
//
//
//int GetOpPrec(char op)
//{
//	char op;
//	switch (op)
//	{
//	case '/':
//	case '*':
//		return 5;
//	case '+':
//	case '-':
//		return 3;
//	case '(':
//		return 1;
//	default:
//		return -1;
//	}
//}
//int CompOp(char op1, char op2)
//{
//	int m_op1 = GetOpPrec(op1);
//	int m_op2 = GetOpPrec(op2);
//	if (m_op1 > m_op2)
//		return 1;
//	else if (m_op1 < m_op2)
//		return -1;
//	return 0;
//}
//void ConvertEXP(char exp[]) {
//	Stack stack;
//	int expLen = strlen(exp);
//	char* convExp = (char*)malloc(expLen + 1);
//	int idx = 0;
//	char tok, popOp;
//	StackInit(&stack);
//	memset(convExp, 0, sizeof(char) * expLen + 1);
//	for (int i = 0; i < expLen; i++)
//	{
//		tok = exp[i];
//		if (isdigit(tok)) {
//			convExp[idx++] = tok;
//		}
//		else {
//			switch(tok)
//			{
//			case '(':
//				SPush(&stack, tok);
//				break;
//			case ')':
//				while (1)
//				{
//					popOp = SPop(&stack);
//					if (popOp == '(') 
//						break;
//					convExp[idx++] = popOp;
//				}
//				break;
//			case '+':case'-':
//			case'*':case'/':
//				while (!SIsEmpty(&stack) && CompOp(SPeek(&stack), tok) >= 0)
//					convExp[idx++] = SPop(&stack);
//
//				SPush(&stack, tok);
//				break;
//			}
//		}
//		while (!SIsEmpty(&stack)) {
//			convExp[idx++] = SPop(&stack);
//		}
//		strcpy_s(exp, expLen + 1, convExp);
//		free(convExp);
//	}
//}
//
//int infixCalc(char exp[])
//{
//	Stack stack;
//	int expLen = strlen(exp);
//	int tok;
//	int op1, op2;
//	StackInit(&stack);
//	for (int i = 0; i < expLen; i++) {
//		tok = exp[i];
//		if (isdigit(tok)) {
//			SPush(&stack,tok);
//		}
//		else {
//			int op1 = SPop(&stack) - '0';
//			int op2 = SPop(&stack) - '0'; 
//			switch(tok) {
//			case '+':
//				SPush(&stack,op1 + op2);
//				break;
//			case '-':
//				SPush(&stack, op1 - op2);
//				break;
//			case '*':
//				SPush(&stack, op1 * op2);
//				break;
//			case '/':
//				SPush(&stack, op1 / op2);
//				break;
//			}
//		}
//	}
//	return SPop(&stack);
//}
