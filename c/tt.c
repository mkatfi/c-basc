/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tt.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:22:04 by mkatfi            #+#    #+#             */
/*   Updated: 2022/11/28 18:36:39 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef BUFFER_SIZE 
# define BUFFER_SIZE  1
#endif

#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>

size_t ft_strlen(char *s)
{
    size_t i;

    i = 0;
    while(s[i])
        i++; 
    return (i);
}

int ft_strchr(char *s)
{
    int i ;

    i = 0
    if (!s)
        return 0;
    while (s[i])
    {
        if (s[i] == '\n')
            return 1;
        i++;
    }
    return 0;
}

char *ft_strjoin(char * s1, char *s2)
{
    char *p;
    int i;
    int j;
    
    p =  malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
    if (!p)
        return(free(s1), NULL);
    i = 0;
    while(s1 && s1[i])
    {
        p[i] = s1[i];
        i++;
    }
    j = 0;
    while(s2 && s2[i])
        p[i++] = s2[j++];
    p[i] = '\0';
    free (s1);
    return(p);
}

char *ft_re(char *c)
{
    char *buff;
    int i;
    int fd;
    
    buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
    i = 1;
    while(ft_strchr(c) == 0 && i != 0)
    {
        i = read(fd, buff, BUFFER_SIZE);
        printf ("%s", buff);
        if (i == -1)
            return (free(buff), NULL);
        c[i] = '\0'; 
        c = ft_strjoin(c, buff);
        printf("%s", c);
    }
    free(buff);
    return(c);
    
}
char *get_next_line(int fd)
{
    char *l;
    static char *s;
    l = ft_re(s);
    return (l);
}
#include<stdio.h>

int main()
{
    
    int fd = open("file.txt", O_CREAT | O_RDWR);
    printf("%s" , get_next_line(fd));
}
