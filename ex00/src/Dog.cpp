
#include "../inc/Dog.hpp"

Dog::Dog() : Animal("Dog") {
	#ifdef DEBUG
	std::cout << "[Dog] dflt constructor called" << std::endl;
	#endif
}

Dog::Dog(const Dog& toCopy) : Animal("Dog") {
	#ifdef DEBUG
	std::cout << "[Dog] copy constructor called" << std::endl;
	#endif
	*this = toCopy;
}

Dog::~Dog() {
	#ifdef DEBUG
	std::cout << "[Dog] destructor called" << std::endl;
	#endif
}

Dog& Dog::operator=(const Dog& toCopy) {
	#ifdef DEBUG
	std::cout << "[Dog] assignment operator called" << std::endl;
	#endif
	if (this != &toCopy) {
		Animal::operator=(toCopy);
	}
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "bark" << std::endl;
}
