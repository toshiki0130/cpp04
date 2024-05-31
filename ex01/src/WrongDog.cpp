#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal()
{
    type = "WrongDog";
    std::cout << type << " default constructor is called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &ob) : WrongAnimal(ob)
{
    std::cout << type << " copy constructor is called" << std::endl;
}

WrongDog::~WrongDog()
{
    std::cout << type << " destructor is called" << std::endl;
}

WrongDog& WrongDog::operator=(const WrongDog &ob)
{
    std::cout << type << " copy assignment is called" << std::endl;
    if (this == &ob) return *this;
    WrongAnimal::operator=(ob);
    return *this;
}

void WrongDog::makeSound() const
{
    std::cout << "wan wan!" << std::endl;
}