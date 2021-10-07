// phead : 헤드 포인터에 대한 포인터 
// p: 삭제될 노드의 선행 노드
// removed: 삭제될 노드 
void remove_node(ListNode **phead, ListNode *p, ListNode *removed)
{
	if (p == NULL)
		*phead = (*phead)->link;
	else
		p->link = removed->link;
	free(removed);
}