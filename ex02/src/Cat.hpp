#ifndef CAT_HPP
# define CAT_HPP
# include "AAnimal.hpp"
# include "Brain.hpp" 

class Cat : public AAnimal {
private:
    Brain *_brain;
public:
    // orthodox canonical form
    Cat();
    Cat(const Cat &ob);
    ~Cat();
    Cat& operator=(const Cat &ob);
    // others
    void makeSound() const;
    void addIdea(const std::string &idea);
    void printIdeas() const;
}; 


#endif