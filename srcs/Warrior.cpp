# include "../includes/Warrior.hpp"

Warrior::Warrior( const std::string& name, const std::string& title ) :
									_name(name), _title(title) {
}

Warrior::~Warrior( void ) {
	std::cout << _name << ": My job here is done!" << std::endl;
}

/////////////////////////////////////////////////////////////////////////////////////////

const std::string&	Warrior::getName( void ) const { return _name; }

const std::string&	Warrior::getTitle( void ) const { return _title; }

void	Warrior::setTitle( const std::string& title ) { _title = title; }

void	Warrior::setName( const std::string& name ) { _name = name; }

/////////////////////////////////////////////////////////////////////////////////////////

void	Warrior::introduce( void ) const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void	Warrior::learnWeapon( Weapons *aspell ) {
	_weapons.learnWeapon(aspell);
}

void	Warrior::launchSpell( const std::string& aspell_n, const Victims& atarget ) {
	Weapons			*ptr;

	if ( (ptr = _weapons.createWeapon(aspell_n)) )
		atarget.getHitBySpell(*ptr);
}

void	Warrior::forgetWeapon( const std::string& aspell_n ) {
	_weapons.forgetWeapon(aspell_n);
}

////////////////////////////////////////////////////////////////////////
// ********************* INTERACTIVITY *********************************
void	Warrior::printStatus( const char *color, const std::string& msg ) {
		std::cout << color << msg << ft_RESET_COLOR << std::endl;
}

bool Warrior::PromptForDetails( const char* prompt, char& choice )
{
    std::string	tmp;

	printStatus(ft_YELLOW, prompt);

    if ( std::getline(std::cin, tmp) ) {
        // Only accept single character input
        if ( tmp.length() == 1 )
            choice = tmp[0];
        else
        {
            // For most input, char zero is an appropriate sentinel
            choice = '\0';
        }
        return true;
    }
    return false;
}

void Warrior::modifyDetails( void ) {
	std::string	tmp;
    char choice = '\0';

    while( PromptForDetails( "Would You Like To Edit Your Identity? [y/n]", choice ) )
    {
        if ( choice == 'y' || choice == 'n') {
			if ( choice == 'y' ) {
				printStatus(ft_YELLOW, "Please Enter Your Preferred Name, then hit 'Enter' Key");
				std::getline(std::cin, tmp);
				_name = ( tmp.length() > 0 ) ? tmp : "Player X";
				printStatus(ft_YELLOW, "Now Enter your Title, then hit 'Enter' Key");
				std::getline(std::cin, tmp);
				_title = ( tmp.length() > 0 ) ? tmp : "The Unknown Warrior";
			}
            break;
        }
    }
}
