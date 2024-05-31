#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>
# include <iostream>

class WrongAnimal {
protected:
    std::string type;
public:
    // orthodox canonical form
    WrongAnimal();
    WrongAnimal(const WrongAnimal &ob);
    virtual ~WrongAnimal();
    WrongAnimal& operator=(const WrongAnimal &ob);
    // others
    std::string getType() const;
    void makeSound() const;
};

#endif