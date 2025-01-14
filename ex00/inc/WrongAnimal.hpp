
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class	WrongAnimal {
protected:
	std::string	_type;
public:
	WrongAnimal();
	WrongAnimal(const std::string& _type);
	WrongAnimal(const WrongAnimal& toCopy);
	virtual ~WrongAnimal();

	WrongAnimal&	operator=(const WrongAnimal& toAssign);

	const std::string& getType() const;
	void	makeSound() const;
};

#endif
