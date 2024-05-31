#include "Dog.hpp"

Dog::Dog() : AAnimal(), _brain(new Brain())
{
    type = "Dog";
    std::cout << type << " default constructor is called" << std::endl;
}

Dog::Dog(const Dog &ob) : AAnimal(ob), _brain(new Brain(*ob._brain))
{
    std::cout << type << " copy constructor is called" << std::endl;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << type << " destructor is called" << std::endl;
}

Dog& Dog::operator=(const Dog &ob)
{
    std::cout << type << " copy assignment is called" << std::endl;
    if (this == &ob) return *this;
    AAnimal::operator=(ob);
    delete _brain;
    _brain = new Brain(*ob._brain);
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "wan wan!" << std::endl;
}