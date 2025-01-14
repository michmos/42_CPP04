
#include "../inc/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	#ifdef DEBUG
	std::cout << "[WrongCat] dflt constructor called" << std::endl;
	#endif
}

WrongCat::WrongCat(const WrongCat& toCopy) : WrongAnimal("WrongCat") {
	#ifdef DEBUG
	std::cout << "[WrongCat] copy constructor called" << std::endl;
	#endif
	*this = toCopy;
}

WrongCat::~WrongCat() {
	#ifdef DEBUG
	std::cout << "[WrongCat] destructor called" << std::endl;
	#endif
}

WrongCat& WrongCat::operator=(const WrongCat& toCopy) {
	#ifdef DEBUG
	std::cout << "[WrongCat] assignment operator called" << std::endl;
	#endif
	if (this != &toCopy) {
		WrongAnimal::operator=(toCopy);
	}
	return (*this);
}

void	WrongCat::makeSound() const {
	std::cout << "wrong cat miau" << std::endl;
}
