#include "mensch.hh"
class Kind : public Mensch
{
	//NICHT verebt: Konstruktor, Copy-Konstruktor, Destruktor, Zuwesiungsoperator
	public:
		/* 
		Attribute werden verebt
		Heiß, sie wurden nicht in der Klasse definiert
		Deshalb können sie nicht der Initialisierungsliste genutzt werden
		Dies alles gilt für den Fall das es sich um ein geerbtes private
		Attribut handelt
		*/
		Kind(string name) : Mensch(name){};
		Kind(string placeOfBirth) : birthPlace(placeOfBirth){};
};
