#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
        materiaBook[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	
	for (int i = 0; i <= 3; i++)
		if(this->materiaBook[i] != NULL)
		{
			delete this->materiaBook[i];
		}
}

MateriaSource::MateriaSource(MateriaSource const & rhs)
{
	for(int i = 0; i < 4 ; i++)
    {
        if (materiaBook[i])
            *materiaBook[i] = *rhs.materiaBook[i];
    }
}

void MateriaSource::learnMateria(AMateria *newMateria)
{
	for (int i = 0; i <= 3; i++)
	{
		if (this->materiaBook[i] == NULL)
			{
				this->materiaBook[i] = newMateria;
				//delete newMateria;
				return;
			}
	}
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i <= 3; i++)
	{
		if (this->materiaBook[i]->getType() == type)
			{
				//std::cout << this->materiaBook[i]->getType() << std::endl;
				return (this->materiaBook[i]);
			}
	}
	return 0;
}

MateriaSource& MateriaSource::operator=(MateriaSource const &rhs)
{
	for(int i = 0; i < 4 ; i++)
    {
        if (materiaBook[i])
            *materiaBook[i] = *rhs.materiaBook[i];
    }
    return (*this);
}
   