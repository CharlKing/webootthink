/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_brackets.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 17:16:48 by cking             #+#    #+#             */
/*   Updated: 2018/03/31 17:52:49 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *find_brackets(char *sub)
{
	int i;
	int brc[2] = {0,0};

	i = 0;
	while (sub[i])
	{
		if(sub[i] == ')')
			brc[1] = i;
		i++;
	}
	while (i > 0)
	{
		if(sub[i] == '(')
			brc[0] = i;	
	}
	return (*brc);
}
