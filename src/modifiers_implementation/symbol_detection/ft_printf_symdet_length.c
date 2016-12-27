/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_strchri.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 01:00:13 by obelange          #+#    #+#             */
/*   Updated: 2016/11/15 01:00:15 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printf_symdet_length(char **seq, t_mod *conv)
{	
	size_t	delim_index;	
	size_t	i;

	i = 0;
	delim_index = 0;
	if (ft_printf_Nchr1sym(*seq, g_length_symbols, &(conv->length)) == 1)
	{		
		while (i < ft_printf_strlen(conv->length))
		{
			(*seq)++;
			i++;
		}	
	}

}
