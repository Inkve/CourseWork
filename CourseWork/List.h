#pragma once
#include <list>
#include "complex_figure.h"

class List {
protected:
	list<Figure*> list;
public:
	List();
	void add(Figure&);
	void view();
	void deletion();
};
