/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v2f_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Rakiah <bkabbas@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/09 23:43:25 by Rakiah            #+#    #+#             */
/*   Updated: 2016/07/08 21:12:01 by Rakiah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rmath_v2f.h"

t_vector2f	v2f_lerp(t_vector2f v1, t_vector2f v2, float lerp_factor)
{
	return (v2f_add(v2f_mul_float(v2f_sub(v2, v1), lerp_factor), v1));
}

t_vector2f	v2f_opposite(t_vector2f v)
{
	return (V2F_INIT(-v.x, -v.y));
}
