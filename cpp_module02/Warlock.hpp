#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
#include <string>
#include <iostream>
#include <map>

class   Warlock
{
    private:
        std::string     name;
        std::string     title;
        SpellBook       spellBook;
        /*  Pivate constructors */
        Warlock();
        Warlock( Warlock const& other );
        Warlock& operator=( Warlock const& other );

        // /*  Added Attribute */
        // std::map<std::string, ASpell*>  spells;

    public:
        Warlock( std::string const& _name, std::string const& _title );
        ~Warlock( void );

        /* getters */
        const std::string getName() const;
        const std::string getTitle() const;

        /*  Setters */
        void              setTitle( std::string const& _title );

        /*  Methods */
        void              introduce() const;

        /* new Methods */
        void              learnSpell( ASpell* spell );
        void              forgetSpell( std::string name );
        void              launchSpell( std::string name, ATarget const& target );
};

#endif