
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class	Animal {
protected:
	std::string	_type;
public:
	Animal();
	Animal(const std::string& _type);
	Animal(const Animal& toCopy);
	virtual ~Animal();

	Animal&	operator=(const Animal& toAssign);

	const std::string& getType() const;
	virtual void	makeSound() const = 0;
};

#endif
