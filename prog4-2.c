// position: 삽입하고자 하는 위치
// item: 삽입하고자 하는 자료
void add(ArrayListType *L, int position, element item)
{
	if (!is_full(L) && (position >= 0) &&
		(position <= L->length)) {
		int i;
		for (i = (L->length - 1); i >= position; i--)
			L->list[i + 1] = L->list[i];
		L->list[position] = item;
		L->length++;
	}
}