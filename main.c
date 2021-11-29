/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srakuma <srakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 02:41:26 by srakuma           #+#    #+#             */
/*   Updated: 2021/11/30 03:22:02 by srakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "avl_tree.h"
#include <stdio.h>

int	main(void)
{
	{
		t_avl	*root = create_node(0, 15);
		add_node(create_node(1, 10), &root);
		add_node(create_node(2, 0), &root);
		add_node(create_node(3, 20), &root);
		add_node(create_node(4, 30), &root);
		add_node(create_node(5, -10), &root);
		add_node(create_node(6, 5), &root);
		add_node(create_node(7, 3), &root);
		add_node(create_node(8, 7), &root);
		add_node(create_node(9, 8), &root);
		destruct_avl(root);
	}
	{
		t_avl	*root = create_node(0, 200);
		for (size_t i = 0; i < 15; i++)
		{
			if (add_node(create_node(i + 1, 200 - (i + 1) * 4), &root) == -1)
				exit(printf("malloc error\n"));
		}
		t_avl	*target = seach_node(root, 200);
		delete_node(&root, target);
		delete_node(&root, seach_node(root, 180));
		delete_node(&root, seach_node(root, 172));
		delete_node(&root, root);
		destruct_avl(root);
	}
}