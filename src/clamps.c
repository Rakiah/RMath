/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clamps.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkabbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 04:04:35 by bkabbas           #+#    #+#             */
/*   Updated: 2016/01/13 05:36:37 by bkabbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rmath_utils.h"

inline int		clampi(int val, int min, int max)
{
	if (val < min)
		return (min);
	if (val > max)
		return (max);
	return (val);
}

inline float	clampf(float val, float min, float max)
{
	if (val < min)
		return (min);
	if (val > max)
		return (max);
	return (val);
}

inline float	clampf01(float val)
{
	if (val > 1.0f)
		return (1.0f);
	if (val < 0.0f)
		return (0.0f);
	return (val);
}
