#ifndef MAIN_H
# define MAIN_H

int	conv_d_launcher(void);
/*PROTOTYPES_HERE*/

typedef struct		s_launcher
{
	char			*fct_name;
	int				(*launcher)(void);
}					t_launcher;

t_launcher			g_launchtab[] =
{
	{"conv_d", conv_d_launcher},
	/*FCTS_HERE*/
	{"", NULL}
};

#endif
