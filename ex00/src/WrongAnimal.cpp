#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("")
{
    std::cout << "WrongAnimal default constructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ob)
{
    std::cout << "WrongAnimal copy constructor is called" << std::endl;
    WrongAnimal::operator=(ob);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor is called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &ob)
{
    std::cout << "WrongAnimal copy assignment is called" << std::endl;
    if (this == &ob) return *this;
    this->type = ob.type;
    return *this;
}

std::string WrongAnimal::getType() const
{
    std::cout << "WrongAnimal getType() is called" << std::endl;
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makeSound() is called" << std::endl;
}