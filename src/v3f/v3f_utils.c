/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v3f_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkabbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 02:50:42 by bkabbas           #+#    #+#             */
/*   Updated: 2016/01/13 02:52:57 by bkabbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rmath.h"

t_vector3f	*v3f_new_cpy(t_vector3f *src)
{
	return (v3f_new(src->x, src->y, src->z));
}

t_vector3f	v3f_lerp(t_vector3f v1, t_vector3f v2, float lerp_factor)
{
	t_vector3f tmp;

	tmp = v3f_sub(v2, v1);
	tmp.x *= lerp_factor;
	tmp.y *= lerp_factor;
	tmp.z *= lerp_factor;
	return (v3f_add(tmp, v1));
}
