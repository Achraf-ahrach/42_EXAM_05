#include "ATarget.hpp"

ATarget::ATarget()
{}

ATarget::ATarget( std::string const& _type )
{
    type = _type;
}

ATarget::ATarget( ATarget const& other ) 
{
    *this = other;
}

ATarget& ATarget::operator=( ATarget const& other )
{
    if (this != &other)
        type = other.type;
    return *this;
}

const std::string&  ATarget::getType() const
{
    return type;
}

void    ATarget::getHitBySpell( ASpell const& spell ) const
{
    std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}

ATarget::~ATarget()
{}