#include "IMateriaSource.hpp"


#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP


class MateriaSource : public IMateriaSource
{
private:
	AMateria *materiaBook[4];

public:
	MateriaSource();
	MateriaSource(MateriaSource const & rhs);

	virtual ~MateriaSource();
	virtual void learnMateria(AMateria *newMateria);
	virtual AMateria* createMateria(std::string const & type);
	MateriaSource& operator=(MateriaSource const & rhs);
};

#endif