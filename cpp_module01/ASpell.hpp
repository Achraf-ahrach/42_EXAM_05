#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>

class ATarget;

class   ASpell
{
    protected:
        std::string     name;
        std::string     effects;

    public:

        /*  Constructors    */
        ASpell( std::string const& _name, std::string const& _effects );
        ASpell();
        ASpell( ASpell const& other );
        ASpell&  operator=( ASpell const& other );
        virtual ~ASpell();

        /*  Getters */
        std::string     getName() const;
        std::string     getEffects() const;

        /*  Methods */
        virtual ASpell* clone() const = 0;
        void            launch( ATarget const& target ) const;
};

#endif