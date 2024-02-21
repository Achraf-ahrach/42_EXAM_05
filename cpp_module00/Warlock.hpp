#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class   Warlock
{
    private:
        std::string     name;
        std::string     title;

        /*  Pivate constructors */
        Warlock();
        Warlock( Warlock const& other );
        Warlock& operator=( Warlock const& other );

    public:
        Warlock( std::string const& _name, std::string const& _title );
        ~Warlock();

        /* getters */
        const std::string&  getName() const;
        const std::string&  getTitle() const;

        /*  Setters */
        void    setTitle( std::string const& _title );

        /*  Methods */
        void    introduce() const;
};

#endif