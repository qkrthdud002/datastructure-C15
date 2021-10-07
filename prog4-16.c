// 노드 new_node를 노드 before의 오른쪽에 삽입한다.
void dinsert_node(DlistNode *before,	DlistNode *new_node) 
{ 
	new_node->llink = before; 
	new_node->rlink = before->rlink; 
	before->rlink->llink = new_node; 
	before->rlink = new_node; 
}