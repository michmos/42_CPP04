
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class	Animal {
protected:
	std::string	_type;
	Brain		*_brain;
public:
	Animal();
	Animal(const std::string& _type);
	Animal(const Animal& toCopy);
	virtual ~Animal();

	Animal&	operator=(const Animal& toAssign);

	const std::string& getType() const;
	virtual void	makeSound() const;
	Brain& getBrain() const;
};

#endif
