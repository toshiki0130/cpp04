#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    type = "WrongCat";
    std::cout << type << " default constructor is called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &ob) : WrongAnimal(ob)
{
    std::cout << type << " copy constructor is called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << type << " destructor is called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &ob)
{
    std::cout << type << " copy assignment is called" << std::endl;
    if (this == &ob) return *this;
    WrongAnimal::operator=(ob);
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "nya~ nya~!" << std::endl;
}