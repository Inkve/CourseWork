#include "List.h"

List::List() {};

void List::add(Figure& _figure) {
	list.push_back(&_figure);
};

void List::view() {
	for (auto element : list) {
		element->show();
	};
};

void List::deletion() {
	list.clear();
};


