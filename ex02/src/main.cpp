#include "AAnimal.hpp"
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

void test_array_of_animals()
{
    std::cout << "wwwwwwwwwwwww test_array_of_animals wwwwwwwwwwwww" << std::endl;
    AAnimal *animals[10];
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) animals[i] = new Cat();
        else animals[i] = new Dog();
    }
    for (int i = 0; i < 10; i++) {
        delete animals[i];
    }
}

void test_from_subject()
{
    std::cout << "wwwwwwwwwwwww test_from_subject wwwwwwwwwwwww" << std::endl;

    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();  // will output the cat sound!
    j->makeSound();
    delete j;//should not create a leak
    delete i;
    return ;
}

void test_memory_leak()
{
    std::cout << "wwwwwwwwwwwww test_memory_leak wwwwwwwwwwwww" << std::endl;
  // Test no memory leak in Cat
  {
    std::cout << "=== memory leak check in Cat ===" << std::endl;
    Cat a;
    std::cout << "Copy brain from a to b" << std::endl;
    { Cat b(a); }
    std::cout << "After b is destroyed" << std::endl;

    std::cout << "assign brain from a to c" << std::endl;
    {
        Cat c;
        c = a;
    }
    std::cout << "After c is destroyed" << std::endl;
  }
  // Test no memory leak in Dog
  {
    Dog a;
    std::cout << "Copy brain from a to b" << std::endl;
    { Dog b(a); }
    std::cout << "After b is destroyed" << std::endl;

    std::cout << "assign brain from a to c" << std::endl;
    {
        Dog c;
        c = a;
    }
    std::cout << "After c is destroyed" << std::endl;
  }
  // Test no memory leak in AAnimal *
  {
    Cat* a = new Cat();
    std::cout << "Copy brain from a to b" << std::endl;
    {
      AAnimal* b = new Cat(*a);
      delete b;
    }
    std::cout << "After b is destroyed" << std::endl;
    delete a;
  }
}

// Test deep Copy
void test_deep_copy() {
    std::cout << "wwwwwwwwwwwww test_deep_copy wwwwwwwwwwwww" << std::endl;
    Cat a;
    a.addIdea("Idea a1");
    a.addIdea("Idea a2");
    a.addIdea("Idea a3");
    a.addIdea("Idea a4");
    a.addIdea("Idea a5");
    a.printIdeas();
    std::cout << "Copy brain from a to b" << std::endl;
    {
        Cat b(a);
        b.printIdeas();
        b.addIdea("Idea b1");
        b.addIdea("Idea b2");
        b.addIdea("Idea b3");
        b.addIdea("Idea b4");
        b.addIdea("Idea b5");
        b.printIdeas();
    }   
    std::cout << "After b is destroyed" << std::endl;
    a.printIdeas();
}

void test_abstract_animal() {
    std::cout << "wwwwwwwwwwwww test_abstract_animal wwwwwwwwwwwww" << std::endl;
    //{
    //    AAnimal a;
    //    AAnimal b(a);
    //    AAnimal c;
    //    c = a;
    //}
    //// Test getType and makeSound
    //{
    //    AAnimal a;
    //    std::cout << a.getType() << " " << std::endl;
    //    a.makeSound();
    //}

    AAnimal *d = new Dog();
    AAnimal *c = new Cat();
    d->makeSound();
    d->AAnimal::makeSound();
    c->makeSound();
    c->AAnimal::makeSound();
}

int main()
{
    test_animal();
    test_dog();
    test_cat();
    test_from_subject();
    test_array_of_animals();
    test_memory_leak();
    test_deep_copy();
    test_abstract_animal();
}
