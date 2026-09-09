#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	try{
		Bureaucrat myBu(19, "unai");
		Form myForm("form", 40, 30);
		Form myForm1("form1", 10, 30);
		myForm.beSigned(myBu);
		myForm1.beSigned(myBu);
		myBu.signForm(myForm);
		std::cout << myForm << std::endl;
		std::cout << myForm1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}