
#include "../inc/Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain()) {
	#ifdef DEBUG
	std::cout << "[Dog] dflt constructor called" << std::endl;
	#endif
}

Dog::Dog(const Dog& toCopy) : Animal("Dog"), _brain(new Brain()) {
	#ifdef DEBUG
	std::cout << "[Dog] copy constructor called" << std::endl;
	#endif
	*this = toCopy;
}

Dog::~Dog() {
	#ifdef DEBUG
	std::cout << "[Dog] destructor called" << std::endl;
	#endif
	delete _brain;
}

Dog& Dog::operator=(const Dog& toCopy) {
	#ifdef DEBUG
	std::cout << "[Dog] assingment operator called" << std::endl;
	#endif
	if (this != &toCopy) {
		Animal::operator=(toCopy);
		*_brain = *toCopy._brain;
	}
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "bark" << std::endl;
}

Brain&	Dog::getBrain() const {
	return (*_brain);
}
