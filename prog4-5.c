// phead: 리스트의 헤드 포인터의 포인터
// p : 선행 노드
// new_node : 삽입될 노드 
void insert_node(ListNode **phead, ListNode *p,
	ListNode *new_node)
{
	if (*phead == NULL) {	// 공백리스트인 경우
		new_node->link = NULL;
		*phead = new_node;
	}
	else if (p == NULL) { // p가 NULL이면 첫번째 노드로 삽입
		new_node->link = *phead;
		*phead = new_node;
	}
	else {			 // p 다음에 삽입
		new_node->link = p->link;
		p->link = new_node;
	}
}