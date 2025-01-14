
#include "../inc/Animal.hpp"

Animal::Animal() {
	#ifdef DEBUG
	std::cout << "[Animal] dflt constructor called" << std::endl;
	#endif
}

Animal::Animal(const std::string& type) {
	#ifdef DEBUG
	std::cout << "[Animal] param constructor called" << std::endl;
	#endif
	_type = type;
}

Animal::Animal(const Animal& toCopy) {
	#ifdef DEBUG
	std::cout << "[Animal] copy constructor called" << std::endl;
	#endif
	*this = toCopy;
}

Animal::~Animal() {
	#ifdef DEBUG
	std::cout << "[Animal] destructor called" << std::endl;
	#endif
}

Animal& Animal::operator=(const Animal& toCopy) {
	#ifdef DEBUG
	std::cout << "[Animal] assignment operator called" << std::endl;
	#endif
	if (this != &toCopy) {
		_type = toCopy._type;
	}
	return (*this);
}

const std::string& Animal::getType() const {
	return (_type);

}

void	Animal::makeSound() const {
	std::cout << "Standard animal sound" << std::endl;
}
