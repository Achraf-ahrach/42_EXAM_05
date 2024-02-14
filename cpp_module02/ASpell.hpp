#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
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
        ASpell( void );
        ASpell( ASpell const& other );
        ASpell& operator=( ASpell const& other );
        virtual ~ASpell( void );

        /*  Getters */
        std::string     getName( void ) const;
        std::string     getEffects( void ) const;

        /*  Methods */
        virtual ASpell*     clone( void ) const = 0;
        void                launch( ATarget const& target ) const;
};

#endif