ListNode *concat(ListNode *head1, ListNode *head2)
{
	ListNode *p;
	if( head1 == NULL ) return head2;
	else if( head2 == NULL ) return head1;
	else {
		p = head1;
		while( p->link != NULL )
			p = p->link;
		p->link = head2;
		return head1;
	}
}