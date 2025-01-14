
#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"
#include "Animal.hpp"

class	Cat : public Animal {
private:
	Brain		*_brain;
public:
	Cat();
	Cat(const Cat& toCopy);
	~Cat();

	Cat&	operator=(const Cat& toAssign);
	void	makeSound() const override;
	Brain&	getBrain() const;
};

#endif
