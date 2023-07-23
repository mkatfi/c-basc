/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:56:07 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/12 16:09:42 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

typedef struct node
{
    int data;
    struct node* next;
} Node;


Node lats(Node* var)
{
    int i = 0;
    while (var != NULL)
    {
        var = var->next;
        i++;
    }
    if (var == NULL) 
        write(1, var, 1);
}

int main()
{
    Node    a;
    Node    b;
    Node    c;
    Node    d;
    Node    e;

    a.data = 0;
    b.data = 1;
    c.data = 2;
    d.data = 3;
    e.data = 4;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL;
    printf("%d", lats(&a));
}