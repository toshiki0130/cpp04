#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class Animal {
protected:
    std::string type;
public:
    // orthodox canonical form
    Animal();
    Animal(const Animal &ob);
    virtual ~Animal();
    Animal& operator=(const Animal &ob);
    // others
    std::string getType() const;
    virtual void makeSound() const;
};

#endif