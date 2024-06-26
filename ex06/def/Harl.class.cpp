
#include "../dec/Harl.class.hpp"

Harl::Harl(void)
{
	std::cout << "Harl created" << std::endl;
	return ;
}

Harl::~Harl(void)
{
	std::cout << "Harl destroyed" << std::endl;
	return ;
}

void Harl::_debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl
				<< std::endl;
	return ;
}

void Harl::_info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn\'t put enough bacon in my burger! ";
	std::cout << " If you did, I wouldn\'t be asking for more!" << std::endl
				<< std::endl;
	return ;
}

void Harl::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I\'ve been coming for years whereas you started working here since last month." << std::endl
				<< std::endl;
	return ;
}

void Harl::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl
				<< std::endl;
	return ;
}

void Harl::complain(std::string level)
{
	int	idx;

	void (Harl::*f[4])(void);
	std::string levels[4];
	f[0] = &Harl::_debug;
	f[1] = &Harl::_info;
	f[2] = &Harl::_warning;
	f[3] = &Harl::_error;
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	idx = 0;
	while (idx < 4 && levels[idx] != level)
	{
		idx += 1;
	}
	switch (idx)
	{
		case 0:
			(this->*f[idx++])();
		case 1:
			(this->*f[idx++])();
		case 2:
			(this->*f[idx++])();
		case 3:
			(this->*f[idx++])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return ;
}
