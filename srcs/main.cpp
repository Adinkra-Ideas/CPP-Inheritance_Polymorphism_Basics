# include "../includes/Warrior.hpp"
# include "../includes/Weapons.hpp"
# include "../includes/Gun.hpp"
# include "../includes/Golok.hpp"
# include "../includes/Greenade.hpp"
# include "../includes/Victims.hpp"
# include "../includes/Dummy.hpp"
# include "../includes/BrickWall.hpp"
# include "../includes/VictimGenerator.hpp"

int main()
{
	{
		Warrior warrior("Player X", "Unknown Warrior");
		std::string	tmp;

		warrior.modifyDetails();
		warrior.printStatus(ft_GREEN, (tmp + "Welcome " + warrior.getName() 
							+ ", The " + warrior.getTitle() + "!").c_str());
		warrior.printStatus(ft_YELLOW, "Now Enter your wish, then hit 'Enter' Key");
		std::getline(std::cin, tmp);
	}

	Warrior warrior("Richard", "foo");
	warrior.setTitle("Hello, I'm Richard the Warrior!");
	BrickWall model1;

	Golok* polymorph = new Golok();
	VictimGenerator vicGen;

	vicGen.learnTargetType(&model1);
	warrior.learnWeapon(polymorph);

	Greenade* fireball = new Greenade();

	warrior.learnWeapon(fireball);

	Victims* wall = vicGen.createTarget("Inconspicuous Red-brick Wall");

	warrior.introduce();
	warrior.launchSpell("Golok", *wall);
	warrior.launchSpell("Greenade", *wall);

	delete polymorph;
	delete fireball;

	return 0;
}
