ListNode *reverse(ListNode *head)
{
   // ��ȸ �����ͷ� p, q, r�� ���
   ListNode *p, *q, *r;
   p = head;         // p�� �������� ���� ����Ʈ
   q = NULL;         // q�� �������� ���� ���
   while (p != NULL){
       r = q;          // r�� �������� �� ����Ʈ.    r�� q, q�� p�� ���ʷ� ���󰣴�.
       q = p;
       p = p->link;
       q->link =r;      // q�� ��ũ ������ �ٲ۴�.
    }
    return q; 	// q�� �������� �� ����Ʈ�� ��� ������
}