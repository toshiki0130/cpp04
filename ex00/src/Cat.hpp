#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal {
public:
    // orthodox canonical form
    Cat();
    Cat(const Cat &ob);
    ~Cat();
    Cat& operator=(const Cat &ob);
    // others
    void makeSound() const;
}; 


#endif