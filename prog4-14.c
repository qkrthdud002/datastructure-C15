// phead: ����Ʈ�� ��� �������� ������
// p : ���� ���
// node : ���Ե� ��� 
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