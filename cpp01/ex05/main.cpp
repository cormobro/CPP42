/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:45:31 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/07 15:45:34 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	lol = Harl();
	lol.complain("DEBUG");
	lol.complain("INFO");
	lol.complain("WARNING");
	lol.complain("ERROR");
	lol.complain("ERRORR");
	lol.complain("error");
	lol.complain("ERROR ");
	return (0);
}
