#include <stdio.h>
#include <stdlib.h>

#define MAX_LIST_SIZE 100 // �迭�� �ִ�ũ��

typedef int element;
typedef struct {
	int list[MAX_LIST_SIZE];	  // �迭 ����
	int length;		  // ���� �迭�� ����� �ڷ���� ����
} ArrayListType;

// ���� ó�� �Լ�
void error(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}
// ����Ʈ �ʱ�ȭ
void init(ArrayListType *L)
{
	L->length = 0;
}
// ����Ʈ�� ��� ������ 1�� ��ȯ
// �׷��� ������ 0�� ��ȯ
int is_empty(ArrayListType *L)
{
	return L->length == 0;
}
// ����Ʈ�� ���� �� ������ 1�� ��ȯ
// �׷��� ������ 1�� ��ȯ
int is_full(ArrayListType *L)
{
	return L->length == MAX_LIST_SIZE;
}
// ����Ʈ ���
void display(ArrayListType *L)
{
	int i;
	for (i = 0; i<L->length; i++)
		printf("%d\n", L->list[i]);
}