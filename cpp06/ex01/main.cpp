#include <cstdint>
#include <iostream>
#include "Serializer.hpp"

int main ()
{
	Data data;
	uintptr_t  tmp  = 0;
	Data *dataDeserialize = NULL;

	std::cout << "INIT VALUES ->" << std::endl;
	data.name = "unai";
	data.age = 10;
	std::cout << "\tNUM = " << data.age << "\n\tNAME = " << data.name << std::endl << std::endl;

	std::cout << "serialize ->" << std::endl;
	tmp = Serializer::serialize(&data);
	std::cout << "\tData integer = " << tmp  << std::endl << std::endl;
	
	std::cout << "desserialize ->" << std::endl;
	dataDeserialize = Serializer::deserialize(tmp);
	std::cout << "\tNUM = " << dataDeserialize->age << "\n\tNAME = " << dataDeserialize->name << std::endl << std::endl;

	std::cout << "CHANGE VALUES ->" << std::endl;
	dataDeserialize->age = 2;
	std::cout << "\tNUM = " << dataDeserialize->age << "\n\tNAME = " << dataDeserialize->name << std::endl << std::endl;

	std::cout << "serialize ->" << std::endl;
	tmp = Serializer::serialize(&data);
	std::cout << "\tData integer = " << tmp  << std::endl << std::endl;
	
	std::cout << "desserialize ->" << std::endl;
	dataDeserialize = Serializer::deserialize(tmp);
	std::cout << "\tNUM = " << dataDeserialize->age << "\n\tNAME = " << dataDeserialize->name << std::endl << std::endl;
}
