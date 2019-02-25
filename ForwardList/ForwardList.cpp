#include "ForwardList.h"

template<typename T>
T ForwardList<T>::operator[](int id)
{
	if (size == 0) throw /*"error"*/ std::out_of_range("list is empty");

	int counter = 0;
	Node * tmp = ForwardList::head->pNext;

	while (counter != id)
	{
		tmp = tmp->pNext;
	}

	return tmp;
}

ForwardList::ForwardList()
{
}


ForwardList::~ForwardList()
{
}
