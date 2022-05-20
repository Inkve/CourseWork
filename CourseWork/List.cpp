#include "List.h"

List::List() {};

void List::add(Figure& _figure) {
	lists.push_back(&_figure);
};

void List::view() {
	if (lists.empty()) {
		throw(Errors("Список пустой!", "list", NULL, NULL));
	}
	else {
		for (auto element : lists) {
			element->show();
		};
	};
};

void List::remove() {
	lists.clear();
};

List::~List() {
	this->remove();
};


