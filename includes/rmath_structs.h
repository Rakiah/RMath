/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rmath_structs.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Rakiah <bkabbas@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/09 23:43:24 by Rakiah            #+#    #+#             */
/*   Updated: 2016/07/08 22:16:11 by Rakiah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RMATH_STRUCTS_H
# define RMATH_STRUCTS_H

union				u_vector2f
{
	struct
	{
		float		x;
		float		y;
	};
	struct
	{
		float		v[2];
	};
};

union				u_vector3f
{
	struct
	{
		float		x;
		float		y;
		float		z;
	};
	struct
	{
		float		r;
		float		g;
		float		b;
	};
	struct
	{
		float		v[3];
	};
	struct
	{
		t_vector2f	xy;
		float		best_padding_evar;
	};
};

union				u_vector4f
{
	struct
	{
		float		x;
		float		y;
		float		z;
		float		w;
	};
	struct
	{
		float		a;
		float		r;
		float		g;
		float		b;
	};
	struct
	{
		float		v[4];
	};
	struct
	{
		t_vector2f	xy;
		t_vector2f	zw;
	};
	struct
	{
		t_vector3f	xyz;
		float		best_padding_evar;
	};
};

union				u_matrix4f
{
	struct
	{
		float		m[4][4];
	};
	struct
	{
		float		v[16];
	};
	struct
	{
		t_vector4f row0;
		t_vector4f row1;
		t_vector4f row2;
		t_vector4f row3;
	};
	struct
	{
		t_vector4f rows[4];
	};
};


//union				u_matrix4f
//{
	//struct
	//{
		//float m[4][4];
	//};
	//struct
	//{
		//t_vector4f row0;
		//t_vector4f row1;
		//t_vector4f row2;
		//t_vector4f row3;
	//};
//};

#endif
