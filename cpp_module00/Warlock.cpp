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

Warlock::Warlock ( std::string const& _name, std::string const& _title )
{
    name = _name;
    title = _title;
    std::cout << name << ": This looks like another boring day." << std::endl;
}

const std::string& Warlock::getName() const
{
    return name;
}
const std::string& Warlock::getTitle() const
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

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
}