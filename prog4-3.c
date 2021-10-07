// position: 삭제하고자 하는 위치
// 반환값: 삭제되는 자료
element delete(ArrayListType *L, int position)
{
	int i;
	element item;

	if (position < 0 || position >= L->length)
		error("위치 오류");
	item = L->list[position];
	for (i = position; i<(L->length - 1); i++)
		L->list[i] = L->list[i + 1];
	L->length--;
	return item;
}