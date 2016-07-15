/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m4f_operators.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Rakiah <bkabbas@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/09 23:43:25 by Rakiah            #+#    #+#             */
/*   Updated: 2016/07/15 11:50:26 by bkabbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rmath_m4f.h"

t_matrix4f	*m4f_new(void)
{
	return ((t_matrix4f *)malloc(sizeof(t_matrix4f)));
}

t_matrix4f	*m4f_new_row(t_vector4f r0, t_vector4f r1,
							t_vector4f r2, t_vector4f r3)
{
	t_matrix4f *m

	m = m4f_new();
	m->row0 = r0;
	m->row1 = r1;
	m->row2 = r2;
	m->row3 = r3;
	return (m);
}

t_matrix4f	*m4f_mul(t_matrix4f *m1, t_matrix4f *m2)
{
	t_matrix4f	tmp;
	int			x;
	int			y;

	tmp = *m1;
	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			m1->m[x][y] = tmp.m[x][0] * m2->m[0][y] +
							tmp.m[x][1] * m2->m[1][y] +
							tmp.m[x][2] * m2->m[2][y] +
							tmp.m[x][3] * m2->m[3][y];
			y++;
		}
		x++;
	}
	return (m1);
}

t_vector4f	m4f_mul_vector(t_matrix4f *m, t_vector4f v)
{
	t_vector4f ret;

	ret.x = m->m[0][0] * v.x + m->m[0][1] * v.y +
			m->m[0][2] * v.z + m->m[0][3] * v.w;
	ret.y = m->m[1][0] * v.x + m->m[1][1] * v.y +
			m->m[1][2] * v.z + m->m[1][3] * v.w;
	ret.z = m->m[2][0] * v.x + m->m[2][1] * v.y +
			m->m[2][2] * v.z + m->m[2][3] * v.w;
	ret.w = m->m[3][0] * v.x + m->m[3][1] * v.y +
			m->m[3][2] * v.z + m->m[3][3] * v.w;
	return (ret);
}

t_matrix4f	*m4f_mul_new(t_matrix4f *m1, t_matrix4f *m2)
{
	t_matrix4f	*ret;
	int			x;
	int			y;

	x = 0;
	ret = m4f_new();
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			ret->m[x][y] = m1->m[x][0] * m2->m[0][y] +
							m1->m[x][1] * m2->m[1][y] +
							m1->m[x][2] * m2->m[2][y] +
							m1->m[x][3] * m2->m[3][y];
			y++;
		}
		x++;
	}
	return (ret);
}
