#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP
# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {
public:
    // orthodox canonical form
    WrongDog();
    WrongDog(const WrongDog &ob);
    ~WrongDog();
    WrongDog& operator=(const WrongDog &ob);
    // others
    void makeSound() const;
}; 


#endif