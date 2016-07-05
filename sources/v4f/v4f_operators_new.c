/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v4f_operators_new.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Rakiah <bkabbas@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/09 23:43:26 by Rakiah            #+#    #+#             */
/*   Updated: 2016/07/05 18:04:35 by Rakiah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rmath_v4f.h"

t_vector4f	*v4f_new(float x, float y, float z, float w)
{
	t_vector4f	*ret;

	ret = (t_vector4f *)malloc(sizeof(t_vector4f));
	ret->x = x;
	ret->y = y;
	ret->z = z;
	ret->w = w;
	return (ret);
}
