#pragma once
#include <iostream>
#include <string>

using namespace std;

class Mensch
{
	private:
		string strName;
	protected:
		string birthPlace;
	public:
		Mensch(string name): strName(name){}
		void autofahren(){}
};
