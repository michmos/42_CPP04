
#include "../inc/Cat.hpp"

Cat::Cat() : Animal("Cat") {
	#ifdef DEBUG
	std::cout << "[Cat] dflt constructor called" << std::endl;
	#endif
}

Cat::Cat(const Cat& toCopy) {
	#ifdef DEBUG
	std::cout << "[Cat] copy constructor called" << std::endl;
	#endif
	*this = toCopy;
}

Cat::~Cat() {
	#ifdef DEBUG
	std::cout << "[Cat] destructor called" << std::endl;
	#endif
}

Cat& Cat::operator=(const Cat& toCopy) {
	#ifdef DEBUG
	std::cout << "[Cat] assignment operator called" << std::endl;
	#endif
	if (this != &toCopy) {
		Animal::operator=(toCopy);
	}
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "miau" << std::endl;
}
