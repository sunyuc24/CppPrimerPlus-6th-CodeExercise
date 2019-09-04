#include "Ch10_8.h"


List::List()
{
	count = 0;
}

bool List::isempty() const
{
	return count == 0;
}

bool List::isfull() const
{
	return count == MAX;
}

int List::itemcount() const
{
	return count;
}

bool List::additem(const Item & item)
{
	if (isfull()){
		std::cout << "full already" << std::endl;
		return false;
	}
	else{
		items[++count] = item;
		return true;
	}
		
}

void List::visit(void(*pf)(Item &))
{
	for (int i = 0; i < count; ++i)
		(*pf)(items[i]);
}
