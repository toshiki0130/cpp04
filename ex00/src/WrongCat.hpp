#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    // orthodox canonical form
    WrongCat();
    WrongCat(const WrongCat &ob);
    ~WrongCat();
    WrongCat& operator=(const WrongCat &ob);
    // others
    void makeSound() const;
}; 


#endif