#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal {
public:
    // orthodox canonical form
    Dog();
    Dog(const Dog &ob);
    ~Dog();
    Dog& operator=(const Dog &ob);
    // others
    void makeSound() const;
}; 


#endif