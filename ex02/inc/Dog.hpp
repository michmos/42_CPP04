

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"
#include "Animal.hpp"

class	Dog : public Animal {
private:
	Brain		*_brain;
public:
	Dog();
	Dog(const Dog& toCopy);
	~Dog();

	Dog&	operator=(const Dog& toAssign);
	void	makeSound() const override;
	Brain&	getBrain() const;
};

#endif
