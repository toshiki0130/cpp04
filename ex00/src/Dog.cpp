#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    std::cout << type << " default constructor is called" << std::endl;
}

Dog::Dog(const Dog &ob) : Animal(ob)
{
    std::cout << type << " copy constructor is called" << std::endl;
}

Dog::~Dog()
{
    std::cout << type << " destructor is called" << std::endl;
}

Dog& Dog::operator=(const Dog &ob)
{
    std::cout << type << " copy assignment is called" << std::endl;
    if (this == &ob) return *this;
    Animal::operator=(ob);
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "wan wan!" << std::endl;
}