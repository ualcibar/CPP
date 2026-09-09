#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
	//std::cout << "Default const of AMateria" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	//std::cout << "Type const of AMateria" << std::endl;
	this->type = type;
}

AMateria::AMateria(AMateria const & src)
{
	//std::cout << "Type const of AMateria" << std::endl;
	this->type = src.type;
	

}

AMateria & AMateria::operator=(AMateria const & src){
	this->type = src.type;		

	return(*this);
}


AMateria::~AMateria()
{
	//std::cout << "Destructor of AMateria" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Just ordinary AMateria called " << target.getName() << std::endl;
}