#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

void test_animal()
{
    {
        std::cout << "wwwwwwwwwwwww test_Animal wwwwwwwwwwwww" << std::endl;
        std::cout << "=== orthodox canonical form ===" << std::endl;
        Animal a;
        Animal b(a);
        Animal c;
        c = a;
    }
    {
        std::cout << "=== getType / makeSound ===" << std::endl;
        Animal a;
        std::cout << a.getType() << std::endl;
        a.makeSound();
    }
}

void test_dog()
{
    {
        std::cout << "wwwwwwwwwwwww test_Dog wwwwwwwwwwwww" << std::endl;
        std::cout << "=== orthodox canonical form ===" << std::endl;
        Dog a;
        Dog b(a);
        Dog c;
        c = a;
    }
    {
        std::cout << "=== getType / makeSound ===" << std::endl;
        Dog a;
        std::cout << a.getType() << std::endl;
        a.makeSound();
    }
}

void test_cat()
{
    {
        std::cout << "wwwwwwwwwwwww test_cat wwwwwwwwwwwww" << std::endl;
        std::cout << "=== orthodox canonical form ===" << std::endl;
        Cat a;
        Cat b(a);
        Cat c;
        c = a;
    }
    {
        std::cout << "=== getType / makeSound ===" << std::endl;
        Cat a;
        std::cout << a.getType() << std::endl;
        a.makeSound();
    }
}

void test_from_subject()
{
    std::cout << "wwwwwwwwwwwww test_from_subject wwwwwwwwwwwww" << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;
    return ;
}

void test_wrong_animal()
{
    std::cout << "wwwwwwwwwwwww test_wrong_animal wwwwwwwwwwwww" << std::endl;

    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* j = new WrongDog();
    const WrongAnimal* i = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;
    return ;
}
int main()
{
    test_animal();
    test_dog();
    test_cat();
    test_from_subject();
    test_wrong_animal();
}