void display_recur(ListNode *head)
{
	ListNode *p=head;
	if( p != NULL ){
		printf("%d->", p->data);
		display_recur(p->link);
	}
}