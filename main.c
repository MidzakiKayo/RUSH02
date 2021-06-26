# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    main                                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bchytter <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/26 10:41:57 by bchytter          #+#    #+#              #
/*   Updated: 2021/06/26 12:08:56 by bchytter         ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

#include <stdlib.h>
#include <unistd.h>


//read dict
//read buffer
char	*ft_read(char *buffer)
{
	int i;
	int	j;

	i = 0;
	k = 0;
	buffer = (char *)malloc(50);
	while (i = read(0, &buffer[k], 1))
	{
		if (buffer[k] == '\n')
			break;
		k++;
	}
	return (buffer);
}

//read dict and check error
char read_dict(char *arg, int fd, char *dict)
{
	int		i;
	char	*r_dict;
	i = 0;
	fd = open("numbers.dict", O_RDONLY);
	if (fd < 0)
	{
		write (1, "Dict err...", 11);
		return (void);
	}
	while ((read(fd, &dict, 1)))
	{
		i++;
	}
	if (close(fd) < 0)
	{
		write (1, "Close error...", 14);
		return (void);
	}
	r_dict = ft_read(dict);
	if (r_dict == 0)
		return (void);
	//return buffer
	ft_print (r_dict);
}

//processing line down;

int not_number(char *argv)
{
	int i;

	i = 0;
	while (argv[i] != '\0')	
	{
		if (argv[i] < '0' || argv[i] > '9')
			write (1, "invalid argument...", 19);
			return (1);	
	}
	return (0);
}

//check error
void errors(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc > 3)
	{
		write (1, "Too many argument..." 20);	
	}
	if (not_number(argv[1]))
	{
		return (1);
	}
	if (argc < 2)
	{
		write (1, "Too low argument...", 19);
		return (1);
	}
	while  (argv[i] != '\0' )
	{
		if ((argv[i] == ':') || (argv[i] == 32) || (argv[i] >= 9 && argv[i] <= 13)
				return (1);
	}
}
//processing line up;

int main(int argc, char **argv)
{
	int i;
	int fd;
	char	dict;
	
	i = 0;
	fd = 0;
	dict = 0;
	errors (argc, argv);
	read_dict(argv[1], fd, dict)
		
}
