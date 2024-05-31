#ifndef DOG_HPP
# define DOG_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {
private:
    Brain *_brain;
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