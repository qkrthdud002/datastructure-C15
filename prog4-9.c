ListNode *search(ListNode *head, int x)
{
	ListNode *p;
	p = head;
	while( p != NULL ){
		if( p->data == x ) return p;  // Ž�� ����
		p = p->link;
	}
      return p;  // Ž�� ������ ��� NULL ��ȯ
}