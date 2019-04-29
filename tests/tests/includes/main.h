#ifndef MAIN_H
# define MAIN_H

int	conv_i_launcher(void);
int	conv_u_launcher(void);
int	conv_o_launcher(void);
int	conv_x_launcher(void);
/*PROTOTYPES_HERE*/

typedef struct		s_launcher
{
	char			*fct_name;
	int				(*launcher)(void);
}					t_launcher;

t_launcher			g_launchtab[] =
{
	{"conv_i", conv_i_launcher},
	{"conv_u", conv_u_launcher},
	{"conv_o", conv_o_launcher},
	{"conv_x", conv_x_launcher},
	/*FCTS_HERE*/
	{"", NULL}
};

#endif
