#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class   ATarget
{
    protected:
        std::string         type;

    public:
        /* Constructors */
        ATarget( std::string const& _type );
        ATarget();
        ATarget( ATarget const& other );
        ATarget& operator=( ATarget const& other );
        virtual ~ATarget();

        /*  Getters */
        const std::string&  getType() const;

        /* Methods */
        virtual ATarget*    clone() const = 0;
        void                getHitBySpell( ASpell const& spell ) const;
};

#endif