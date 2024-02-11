#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:

        std::string type;

    public:
    
        Animal();
        Animal(const Animal& other);
        Animal operator = (const Animal& other);
        virtual ~Animal();

       // virtual void    makeSound() const;
        std::string     gettype() const;
        void settype(std::string h);
};

#endif
Animal::Animal()
{
    type = "Animal";
    std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal: Destructor called" << std::endl;
}

Animal Animal::operator = (const Animal& other)
{
    std::cout << "Animal: copy assignment operator" << std::endl;
    type = other.type;
    return (*this);
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal: copy constructor" << std::endl;
    *this = other;
}



std::string Animal::gettype() const
{
    return (type);
}

void Animal::settype(std::string h)
{
    type = h;
}
int main()
{
    Animal a1;
     Animal a;
      Animal a11;
    std::cout << a1.gettype() << std::endl;
    a.settype("hhhh");
    a11.settype("eeeee");
    a1 = a ;
     std::cout << a1.gettype() << std::endl;

}