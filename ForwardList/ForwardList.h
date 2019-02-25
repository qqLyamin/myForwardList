#pragma once
#include <stdexcept>

template <typename T>
class ForwardList
{
	class Node
	{
		T data;
		Node * pNext;
	};

	size_t size;
	Node head;

public:

	void push_back(const T & myT);
	void push_back(T && myT);

	void pop_back();

	T operator[](int id);

	ForwardList();
	~ForwardList();

};

