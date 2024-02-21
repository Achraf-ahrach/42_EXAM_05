#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

// #include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class   SpellBook
{
    private:
        std::map<std::string, ASpell*>  spellsBook;
        SpellBook( SpellBook const& other );
        SpellBook& operator=( SpellBook const& other );

    public:
        SpellBook();
        ~SpellBook();

        /*  Methods */
        void            learnSpell(ASpell*);
        void            forgetSpell(std::string const& );
        ASpell*         createSpell(std::string const& );
};

#endif