/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 14:13:39 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/26 15:42:36 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void to_upper(int argc, char **str)
{
  int i;
  int argcount;

  argcount = 0;
  while (++argcount < argc)
  {
    i = -1;
    while (str[argcount][++i])
    {
      if (str[argcount][i] >= 'a' && str[argcount][i] <= 'z')
        str[argcount][i] = str[argcount][i] - 32;
    }
    if (argcount != argc - 1)
      std::cout << str[argcount];
    else
      std::cout << str[argcount] << std::endl;
  }
}

int main(int argc, char **argv)
{
  if (argc == 1)
  {
      std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
      return (0);
  }
  to_upper(argc, argv);
  return (0);
}
