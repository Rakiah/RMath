/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unions_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Rakiah <bkabbas@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 21:41:09 by Rakiah            #+#    #+#             */
/*   Updated: 2016/07/08 21:42:25 by Rakiah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <rmath.h>
int main(void)
{
	t_vector4f test;

	test = V4F_INIT(55, 12, 44, 24);
	printf("%f : %f : %f : %f\n", test.x, test.y, test.z, test.w);
	return (0);
}
