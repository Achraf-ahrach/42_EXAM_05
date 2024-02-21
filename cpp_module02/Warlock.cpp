#include "Warlock.hpp"

Warlock::Warlock()
{}

Warlock::Warlock(Warlock const& other)
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

Warlock::Warlock (std::string const& _name, std::string const& _title)
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

void     Warlock::learnSpell(ASpell* spell)
{
    spellBook.learnSpell(spell);
}

void     Warlock::forgetSpell( std::string name )
{
    spellBook.forgetSpell(name);
}

void     Warlock::launchSpell( std::string name, ATarget const& target )
{
    if (spellBook.createSpell(name))
		spellBook.createSpell(name)->launch(target);
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
}
