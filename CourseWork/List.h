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
	void remove();
	class Errors {
	public:
		string cause;
		string var;
		int value1;
		int value2;
		Errors(string _cause, string _var, int _value1, int _value2) {
			cause = _cause;
			var = _var;
			value1 = _value1;
			value2 = _value2;
		};
	};
	~List();
};
