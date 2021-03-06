/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srakuma <srakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 20:52:04 by srakuma           #+#    #+#             */
/*   Updated: 2021/11/28 00:04:24 by srakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "avl_tree.h"

t_avl	*create_node(int key, int val)
{
	t_avl	*node;

	node = (t_avl *)malloc(sizeof(t_avl));
	if (node == NULL)
		return (NULL);
	node->key = key;
	node->val = val;
	node->depth = 0;
	node->parent = NULL;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
