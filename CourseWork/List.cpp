#include "List.h"

List::List() {};

void List::add(Figure& _figure) {
	list.push_back(&_figure);
};

void List::view() {
	if (list.size() == 0) {
		throw(Errors("������ ������!", "list", NULL, NULL));
	};
	for (auto element : list) {
		element->show();
	};
};

void List::remove() {
	list.clear();
};

List::~List() {
	this->remove();
};


