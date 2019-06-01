/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_condition_flag.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 22:45:42 by hhow-cho          #+#    #+#             */
/*   Updated: 2019/06/01 22:56:17 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_can_apply_plus(t_flag *flag, int sign)
{
	return (flag->plus == 1 && sign >= 0);
}

int	ft_can_apply_space(t_flag *flag, int sign)
{
	return (flag->plus == 0 && flag->space == 1 && sign >= 0);
}

int	ft_can_apply_prefix(t_flag *flag, int sign)
{
	return ((flag->hash && sign != 0) || (sign == 0 && flag->precision == 0 && flag->conv == 'o' && (flag->hash)) || (flag->key & KEY_P));
}

int	ft_can_apply_minus(t_flag *flag, int sign)
{
	(void) flag;
	return (sign < 0);
}
