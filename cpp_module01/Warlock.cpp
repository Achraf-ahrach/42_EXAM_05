#include "Warlock.hpp"

Warlock::Warlock()
{}

Warlock::Warlock( Warlock const& other )
{
    *this = other;
}

Warlock&   Warlock::operator=( Warlock const& other )
{
    if (this != &other)
    {
        name = other.name;
        title = other.title;
    }
    return *this;
}

Warlock::Warlock( std::string const& _name, std::string const& _title )
{
    name = _name;
    title = _title;
    std::cout << name << ": This looks like another boring day." << std::endl;
}

const std::string Warlock::getName() const
{
    return name;
}

const std::string Warlock::getTitle() const
{
    return title;
}

void    Warlock::setTitle( std::string const& _title )
{
    title = _title;
}

void    Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void     Warlock::learnSpell( ASpell* spell )
{
    if (spell)
        spells[spell->getName()] = spell->clone();
}

void     Warlock::forgetSpell( std::string spell_name )
{
    if (spells.find(spell_name) != spells.end())
        delete spells[spell_name];
    spells.erase(spell_name);
}

void     Warlock::launchSpell( std::string spell_name, ATarget const& target )
{
    if (spells.find(spell_name) != spells.end())
        spells[spell_name]->launch(target);
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
    for(std::map<std::string, ASpell*>::iterator it = spells.begin(); it != spells.end(); it++)
        delete it->second;
    spells.clear();
}