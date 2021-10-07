ListNode *search(ListNode *head, int x)
{
	ListNode *p;
	p = head;
	while( p != NULL ){
		if( p->data == x ) return p;  // 탐색 성공
		p = p->link;
	}
      return p;  // 탐색 실패일 경우 NULL 반환
}