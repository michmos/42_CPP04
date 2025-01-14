
#include "../inc/Animal.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Brain.hpp"
#include <array>
#include <string>

int main()
{
	// subject main1
	{
		std::array<Animal*, 10>	animals;

		// create Cats and Dogs
		for (int i = 0; i < 5; ++i) {
			animals[i] = new Cat();
		}
		for (int i = 5; i < 10; ++i) {
			animals[i] = new Dog();
		}

		for (int i = 0; i < 10; ++i) {
			std::cout << animals[i]->getType() << std::endl;
		}

		// delete objects
		for (int i = 0; i < 10; ++i) {
			delete animals[i];
		}

	}
	std::cout << std::endl;
	// subject main2
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		j->makeSound();
		i->makeSound();

		delete j;
		delete i;
	}
	std::cout << std::endl;
	// deep copy proof
	{
		Dog	d, d2;

		d.getBrain().fillBrain("old ideas");
		d2 = d;
		d.getBrain().fillBrain("new ideas");

		std::cout << d2.getBrain().getIdea(1) << std::endl;
		std::cout << d.getBrain().getIdea(1) << std::endl;
	}

	return 0;
}
