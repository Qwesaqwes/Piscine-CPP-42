/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 21:14:31 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/28 14:33:57 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ZombieHorde.hpp"

 int	ft_atoi(const char *str)
 {
	 int	i;
 	int		res;
 	int		sign;

 	res = 0;
 	i = 0;
 	while (str[i] == '\n' || str[i] == '\v' || str[i] == '\t' ||
 			str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
 		i++;
 	sign = (str[i] == '-') ? -1 : 1;
 	if (str[i] == '-' || str[i] == '+')
 		i++;
 	while (str[i] != '\0')
 	{
 		if (str[i] >= 48 && str[i] <= 57)
 			res = res * 10 + (str[i] - '0');
 		else
 			return (res * sign);
 		i++;
 	}
 	return (res * sign);
 }

 int	main(int argc, char **argv)
 {
	 int nb_argv;

	 nb_argv = 0;
	 if (argc == 2)
	 {
		 nb_argv = ft_atoi((const char*)argv[1]);
		 ZombieHorde	*zombies = new ZombieHorde(nb_argv);
		 zombies->announceHorde();
		 delete zombies;
	 }
	 else
	 	std::cout << "Choose number of zombies" << std::endl;
	 return (0);
 }
