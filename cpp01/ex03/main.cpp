# include "HumanB.hpp"
# include "HumanA.hpp"
# include "Weapon.hpp"
//la referencia no puede ser NULL
int main()
{
    {
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
return 0;
    /*Weapon club1 = Weapon("lo que sea"); //Memoria stack
    Weapon *club2 = new Weapon("esta es heap");//Memoria de heap (como hacer un malloc habria que liberar la memoria al final)*/
}