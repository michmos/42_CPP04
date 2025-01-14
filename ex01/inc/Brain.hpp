
#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <array>
#include <string>
#include <iostream>

#define	BRAINSIZE 100

class	Brain {
private:
	std::array<std::string, BRAINSIZE>	_ideas;
	unsigned int						_arrIdx;
public:
	Brain();
	Brain(const Brain& toCopy);
	~Brain();

	Brain&	operator=(const Brain&	toAssign);

	void	setIdea(const std::string&	newIdea, int idx);
	const std::string&	getIdea(int idx) const;

	void	addIdea(const std::string&	newIdea);
	void	fillBrain(const std::string&	newIdea);
	void	printBrain() const;
};

#endif
