#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell  () {}

ASpell::ASpell  ( ASpell const& other ) 
{
    *this = other;
}

ASpell&         ASpell::operator=( ASpell const& other ) 
{
    if (this != &other)
    {
        name = other.name;
        effects = other.effects;
    }
    return *this;
}

ASpell::ASpell  ( std::string const& _name, std::string const& _effects )
{
    name = _name;
    effects = _effects;
}

std::string     ASpell::getName() const
{
    return name;
}

std::string     ASpell::getEffects() const
{
    return effects;
}

void    ASpell::launch( ATarget const& target ) const
{
    target.getHitBySpell(*this);
}

ASpell::~ASpell( void )
{}