#include "Animal.hpp"

Animal::Animal() : type("")
{
    std::cout << "Animal default constructor is called" << std::endl;
}

Animal::Animal(const Animal &ob)
{
    std::cout << "Animal copy constructor is called" << std::endl;
    Animal::operator=(ob);
}

Animal::~Animal()
{
    std::cout << "Animal destructor is called" << std::endl;
}

Animal& Animal::operator=(const Animal &ob)
{
    std::cout << "Animal copy assignment is called" << std::endl;
    if (this == &ob) return *this;
    this->type = ob.type;
    return *this;
}

std::string Animal::getType() const
{
    std::cout << "Animal getType() is called" << std::endl;
    return type;
}

void Animal::makeSound() const
{
    std::cout << "Animal makeSound() is called" << std::endl;
}