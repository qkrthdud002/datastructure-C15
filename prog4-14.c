// phead: 리스트의 헤드 포인터의 포인터
// p : 선행 노드
// node : 삽입될 노드 
void insert_last(ListNode **phead, ListNode *node) 
{
	if( *phead == NULL ){
		*phead = node;
		node->link = node;
	}
	else {
		node->link = (*phead)->link;
		(*phead)->link = node;
		*phead = node;
	}
}