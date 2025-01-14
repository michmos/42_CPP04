
#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	#ifdef DEBUG
	std::cout << "[WrongAnimal] dflt constructor called" << std::endl;
	#endif
}

WrongAnimal::WrongAnimal(const std::string& type) {
	#ifdef DEBUG
	std::cout << "[WrongAnimal] param constructor called" << std::endl;
	#endif
	_type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& toCopy) {
	#ifdef DEBUG
	std::cout << "[WrongAnimal] copy constructor called" << std::endl;
	#endif
	*this = toCopy;
}

WrongAnimal::~WrongAnimal() {
	#ifdef DEBUG
	std::cout << "[WrongAnimal] destructor called" << std::endl;
	#endif
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& toCopy) {
	#ifdef DEBUG
	std::cout << "[WrongAnimal] copy constructor called" << std::endl;
	#endif
	if (this != &toCopy) {
		_type = toCopy._type;
	}
	return (*this);
}

const std::string& WrongAnimal::getType() const {
	return (_type);

}

void	WrongAnimal::makeSound() const {
	std::cout << "Wrong animal sound" << std::endl;
}
