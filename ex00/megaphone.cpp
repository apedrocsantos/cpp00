/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:49:19 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/14 20:17:32 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int words;
    int i;

    words = 0;
    if (ac == 1)
        std::cout << "* LOUND AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (++words < ac)
        {
            i = -1;
            while (av[words][++i])
                std::cout << (char) std::toupper (av[words][i]);
            if (av[words + 1])
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return (0);
}