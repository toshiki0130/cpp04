#include "Cat.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    std::cout << type << " default constructor is called" << std::endl;
}

Cat::Cat(const Cat &ob) : Animal(ob)
{
    std::cout << type << " copy constructor is called" << std::endl;
}

Cat::~Cat()
{
    std::cout << type << " destructor is called" << std::endl;
}

Cat& Cat::operator=(const Cat &ob)
{
    std::cout << type << " copy assignment is called" << std::endl;
    if (this == &ob) return *this;
    Animal::operator=(ob);
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "nya~ nya~!" << std::endl;
}