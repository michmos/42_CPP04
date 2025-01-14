
#include "../inc/Animal.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/Dog.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* d = new Dog();
		const Animal* c = new Cat();

		std::cout << meta->getType() << " " << std::endl;
		std::cout << d->getType() << " " << std::endl;
		std::cout << c->getType() << " " << std::endl;

		c->makeSound();
		d->makeSound();
		meta->makeSound();

		delete d;
		delete c;
	}
	std::cout << std::endl;
	{
		// wrong Animal - wrong cat
		const WrongAnimal* c2 = new WrongCat();
		std::cout << c2->getType() << " " << std::endl;
		c2->makeSound();

		delete c2;
	}
	return 0;
}
