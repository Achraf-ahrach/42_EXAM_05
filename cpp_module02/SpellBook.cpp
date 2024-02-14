#include "SpellBook.hpp"

SpellBook::SpellBook()
{}

SpellBook::SpellBook( SpellBook const& other )
{
    *this = other;
}

SpellBook& SpellBook::operator=( SpellBook const& other )
{
    if (this != &other)
        spellsBook = other.spellsBook;
    return *this;
}

void    SpellBook::learnSpell(ASpell* spell)
{
    if (spell)
        spellsBook[spell->getName()] = spell->clone();
}

void    SpellBook::forgetSpell(std::string const& name)
{
    if (spellsBook.find(name) != spellsBook.end())
        delete spellsBook[name];
    spellsBook.erase(name);
}

ASpell* SpellBook::createSpell(std::string const& name)
{
    if (spellsBook.find(name) != spellsBook.end())
		return spellsBook[name];
	return NULL;
}

SpellBook::~SpellBook()
{
    for (std::map<std::string, ASpell*>::iterator it = spellsBook.begin(); it != spellsBook.end(); it++)
		delete it->second;
}