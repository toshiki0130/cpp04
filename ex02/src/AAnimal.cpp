#include "AAnimal.hpp"

AAnimal::AAnimal() : type("")
{
    std::cout << "AAnimal default constructor is called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &ob)
{
    std::cout << "AAnimal copy constructor is called" << std::endl;
    AAnimal::operator=(ob);
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor is called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &ob)
{
    std::cout << "AAnimal copy assignment is called" << std::endl;
    if (this == &ob) return *this;
    this->type = ob.type;
    return *this;
}

std::string AAnimal::getType() const
{
    std::cout << "AAnimal getType() is called" << std::endl;
    return type;
}

void AAnimal::makeSound() const
{
    std::cout << "AAnimal makeSound() is called" << std::endl;
}