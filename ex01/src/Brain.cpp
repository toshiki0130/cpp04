#include "Brain.hpp"

Brain::Brain() : _ideas(), _i(0)
{
    std::cout << "Brain default constructor is called" << std::endl;
}

Brain::Brain(const Brain &ob)
{
    std::cout << "Brain copy constructor is called" << std::endl;
    Brain::operator=(ob);
}

Brain::~Brain()
{
    std::cout << "Brain destructor is called" << std::endl;
}

Brain& Brain::operator=(const Brain &ob)
{
    std::cout << "Brain copy assignment is called" << std::endl;
    if (this == &ob) return *this;
    for (int i = 0; i < NUM_OF_IDEAS; i++) {
        _ideas[i] = ob._ideas[i];
    }
    _i = ob._i;
    return *this;
}

std::string Brain::getIdea(int i) const
{
    if (i < 0 || i >= NUM_OF_IDEAS) return "";
    return _ideas[i];
}

void Brain::addIdea(const std::string &idea)
{
    if (_i >= NUM_OF_IDEAS) {
        std::cout << "Brain ideas is full." << std::endl;
        return ;
    }
    _ideas[_i] = idea;
    _i++;
    return ;
}

std::ostream& operator<<(std::ostream &os, const Brain &b)
{
    os << "Begin inside brain" << std::endl;
    for (int i = 0; i < NUM_OF_IDEAS; i++) {
        if (b.getIdea(i) != "") {
            os << "Idea " << i << ": " << b.getIdea(i) << std::endl;
        }
    }
    os << "end of brain" << std::endl;
    return os;
}