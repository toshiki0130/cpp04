#include "Cat.hpp"

Cat::Cat() : AAnimal(), _brain(new Brain())
{
    type = "Cat";
    std::cout << type << " default constructor is called" << std::endl;
}

Cat::Cat(const Cat &ob) : AAnimal(ob), _brain(new Brain(*ob._brain))
{
    std::cout << type << " copy constructor is called" << std::endl;

}

Cat::~Cat()
{
    delete _brain;
    std::cout << type << " destructor is called" << std::endl;
}

Cat& Cat::operator=(const Cat &ob)
{
    std::cout << type << " copy assignment is called" << std::endl;
    if (this == &ob) return *this;
    AAnimal::operator=(ob);
    delete _brain;
    _brain = new Brain(*ob._brain);
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "nya~ nya~!" << std::endl;
}

void Cat::addIdea(const std::string &idea)
{
    std::cout << "Cat addIdead() is called" << std::endl;
    _brain->addIdea(idea);
}

void Cat::printIdeas() const
{
    std::cout << *_brain;
}
