/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:10:33 by smayrand          #+#    #+#             */
/*   Updated: 2022/05/25 16:39:08 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	char	*ln;
	int		i;
	int		fd1;

	fd1 = open("./text.txt", O_RDONLY);
	i = 0;
	while (i < 10)
	{
		ln = get_next_line(fd1);
		printf("lines: [%02d]: %s\n", i, ln);
		free(ln);
		i++;
	}
	close(fd1);
	return (0);
}
