#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>
# define NUM_OF_IDEAS 100

class Brain {
private:
    std::string _ideas[NUM_OF_IDEAS];
    int _i;
public:
    // orthodox canonical form
    Brain();
    Brain(const Brain &ob);
    ~Brain();
    Brain& operator=(const Brain &ob);
    // others
    std::string getIdea(int i) const;
    void addIdea(const std::string &idea);
};

std::ostream& operator<<(std::ostream& os, const Brain &b);

#endif