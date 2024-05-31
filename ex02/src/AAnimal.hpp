#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <string>
# include <iostream>

class AAnimal {
protected:
    std::string type;
public:
    // orthodox canonical form
    AAnimal();
    AAnimal(const AAnimal &ob);
    virtual ~AAnimal();
    AAnimal& operator=(const AAnimal &ob);
    // others
    std::string getType() const;
    virtual void makeSound() const = 0;
};

#endif