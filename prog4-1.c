#include <stdio.h>
#include <stdlib.h>

#define MAX_LIST_SIZE 100 // 배열의 최대크기

typedef int element;
typedef struct {
	int list[MAX_LIST_SIZE];	  // 배열 정의
	int length;		  // 현재 배열에 저장된 자료들의 개수
} ArrayListType;

// 오류 처리 함수
void error(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}
// 리스트 초기화
void init(ArrayListType *L)
{
	L->length = 0;
}
// 리스트가 비어 있으면 1을 반환
// 그렇지 않으면 0을 반환
int is_empty(ArrayListType *L)
{
	return L->length == 0;
}
// 리스트가 가득 차 있으면 1을 반환
// 그렇지 많으면 1을 반환
int is_full(ArrayListType *L)
{
	return L->length == MAX_LIST_SIZE;
}
// 리스트 출력
void display(ArrayListType *L)
{
	int i;
	for (i = 0; i<L->length; i++)
		printf("%d\n", L->list[i]);
}