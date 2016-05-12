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

void		v3f_set(t_vector3f *v, float x, float y, float z)
{
	v->x = x;
	v->y = y;
	v->z = z;
}

void		v3f_cpy(t_vector3f *dst, t_vector3f *src)
{
	dst->x = src->x;
	dst->y = src->y;
	dst->z = src->z;
}

t_vector3f	*v3f_lerp(t_vector3f *v1,
						t_vector3f *v2,
						t_vector3f *dst,
						float lerp_factor)
{
	t_vector3f tmp;

	v3f_cpy(&tmp, v2);
	v3f_sub(&tmp, v1);
	tmp.x *= lerp_factor;
	tmp.y *= lerp_factor;
	tmp.z *= lerp_factor;
	v3f_add(&tmp, v1);
	v3f_cpy(dst, &tmp);
	return (dst);
}
