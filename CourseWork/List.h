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
	class Errors {
	public:
		string cause;
		Errors(string _cause) {
			cause = _cause;
		};
	};
};
