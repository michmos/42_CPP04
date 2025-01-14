
#include "../inc/Brain.hpp"
#include <stdexcept>

Brain::Brain() : _arrIdx(0) {
	#ifdef DEBUG
	std::cout << "[Brain] construcor called" << std::endl;
	#endif
}

Brain::Brain(const Brain& toCopy) {
	#ifdef DEBUG
	std::cout << "[Brain] copy constructor called" << std::endl;
	#endif
	*this = toCopy;
}

Brain::~Brain() {
	#ifdef DEBUG
	std::cout << "[Brain] destructor called" << std::endl;
	#endif
}

Brain&	Brain::operator=(const Brain& toAssign) {
	#ifdef DEBUG
	std::cout << "[Brain] assignment operator called" << std::endl;
	#endif
	if (this != &toAssign) {
		_ideas = toAssign._ideas;
		_arrIdx = toAssign._arrIdx;
	}
	return (*this);
}

void	Brain::addIdea(const std::string& newIdea) {
	_ideas[_arrIdx] = newIdea;
	_arrIdx = (_arrIdx + 1) % BRAINSIZE;
}

void	Brain::fillBrain(const std::string& newIdea) {
	for (int i = 0; i < BRAINSIZE; ++i) {
		setIdea(newIdea, i);
	}
}

void	Brain::printBrain() const {
	for (unsigned int i = 0; i < _arrIdx; ++i) {
		std::cout << _ideas[_arrIdx] << std::endl;
	}
}

void	Brain::setIdea(const std::string&	newIdea, int idx) {
	if (idx >= BRAINSIZE) {
		throw std::invalid_argument("Idx >= Brainsize");
	}
	_ideas[idx] = newIdea;
}

const std::string&	Brain::getIdea(int idx) const {
	if (idx >= BRAINSIZE) {
		throw std::invalid_argument("Idx >= Brainsize");
	}
	return(_ideas[idx]);
}
