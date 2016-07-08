/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v3f_manipulations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Rakiah <bkabbas@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/09 23:43:25 by Rakiah            #+#    #+#             */
/*   Updated: 2016/07/08 21:11:48 by Rakiah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rmath_v3f.h"

float		v3f_length(t_vector3f vector)
{
	return ((float)sqrt(vector.x * vector.x +
						vector.y * vector.y +
						vector.z * vector.z));
}

float		v3f_dot(t_vector3f v1, t_vector3f v2)
{
	return (v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);
}

t_vector3f	v3f_normalized(t_vector3f vector)
{
	return (v3f_div_float(vector, v3f_length(vector)));
}

t_vector3f	v3f_rotate(t_vector3f vector, float angle)
{
	float rad;
	float cosf;
	float sinf;

	rad = angle * PI / 180.0f;
	cosf = (float)cos(rad);
	sinf = (float)sin(rad);
	vector.x = vector.x * cosf - vector.y * sinf;
	vector.y = vector.x * sinf + vector.y * cosf;
	return (vector);
}

t_vector3f	v3f_cross(t_vector3f v1, t_vector3f v2)
{
	return (V3F_INIT(v1.y * v2.z - v1.z * v2.y,
					v1.z * v2.x - v1.x * v2.z,
					v1.x * v2.y - v1.y * v2.x));
}
