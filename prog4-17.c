// ��� removed�� �����Ѵ�.
void dremove_node(DlistNode *phead_node, 
				DlistNode *removed) 
{ 
	if( removed == phead_node ) return; 
	removed->llink->rlink = removed->rlink; 
	removed->rlink->llink = removed->llink; 
	free(removed); 
}