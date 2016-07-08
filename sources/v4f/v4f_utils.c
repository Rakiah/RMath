/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v4f_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Rakiah <bkabbas@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/09 23:43:26 by Rakiah            #+#    #+#             */
/*   Updated: 2016/07/08 21:09:12 by Rakiah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rmath_v4f.h"

t_vector4f	v4f_lerp(t_vector4f v1, t_vector4f v2, float lerp_factor)
{
	return (v4f_add(v4f_mul_float(v4f_sub(v2, v1), lerp_factor), v1));
}

t_vector4f	v4f_opposite(t_vector4f v)
{
	return (V4F_INIT(-v.x, -v.y, -v.z, -v.w));
}

int			v4f_to_color(t_vector4f color)
{
	return (((unsigned char)(minf(color.w, 1.0f) * 255.0f) << 24) |
			((unsigned char)(minf(color.x, 1.0f) * 255.0f) << 16) |
			((unsigned char)(minf(color.y, 1.0f) * 255.0f) << 8) |
			((unsigned char)(minf(color.z, 1.0f) * 255.0f)));
}
