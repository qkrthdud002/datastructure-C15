ListNode *reverse(ListNode *head)
{
   // 순회 포인터로 p, q, r을 사용
   ListNode *p, *q, *r;
   p = head;         // p는 역순으로 만들 리스트
   q = NULL;         // q는 역순으로 만들 노드
   while (p != NULL){
       r = q;          // r은 역순으로 된 리스트.    r은 q, q는 p를 차례로 따라간다.
       q = p;
       p = p->link;
       q->link =r;      // q의 링크 방향을 바꾼다.
    }
    return q; 	// q는 역순으로 된 리스트의 헤드 포인터
}