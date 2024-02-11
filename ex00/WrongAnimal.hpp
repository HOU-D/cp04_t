#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

// Abstract class Animal
class WrongAnimal
{
	protected:
	
		std::string	type;

	public:

		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(WrongAnimal & ref);
		WrongAnimal & operator=(WrongAnimal const & other);

		void makeSound() const;
		std::string getType( void ) const;
};

#endif