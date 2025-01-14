
#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class	Cat : public Animal {
public:
	Cat();
	Cat(const Cat& toCopy);
	~Cat();

	Cat&	operator=(const Cat& toAssign);
	void	makeSound() const override;
};

#endif