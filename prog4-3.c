// position: �����ϰ��� �ϴ� ��ġ
// ��ȯ��: �����Ǵ� �ڷ�
element delete(ArrayListType *L, int position)
{
	int i;
	element item;

	if (position < 0 || position >= L->length)
		error("��ġ ����");
	item = L->list[position];
	for (i = position; i<(L->length - 1); i++)
		L->list[i] = L->list[i + 1];
	L->length--;
	return item;
}