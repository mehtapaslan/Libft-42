
#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

//int main()
//{
//	char *d = "-**-*- yahya,aydilek,ordu   *-*-*- ";
//	char *set = "-* ";
//	char *temp;
//	temp = ft_strtrim(d, set);
//	size_t i = ft_strlen(temp);
//	while(--i)
//		temp[i] = ft_toupper(temp[i]);
//	temp[i] = ft_toupper(temp[i]);
//	char **new = ft_split(temp, ',');
//	printf("%s\n", new[0]);
//	printf("%s\n", new[1]);
//	printf("%s\n", new[2]);
//	free(new);
//	free(new[0]);
//	free(new[1]);
//	free(new[2]);
//	free(temp);
//	return (0);
//	int fd;
//	fd = open("deneme.txt", O_CREAT | O_RDWR , 0644);
//}

//int main()
//{
//	unsigned char s1[] = "ş";
//	printf("%d\n", s1[0]);
//	printf("%d\n", s1[1]);
//	char s1[10];
//	ft_memset(s1, -59, 1);
//	ft_memset(s1+1, -97, 1);
//	ft_memset(s1+2, 0, 1);
//	printf("%s\n", s1);
//	unsigned char s2[] = "🥲";
//	printf("%d\n", s2[0]);
//	printf("%d\n", s2[1]);
//	printf("%d\n", s2[2]);
//	printf("%d\n", s2[3]);
//	char s2[10];
//	ft_memset(s2, 240, 1);
//	ft_memset(s2+1, 159, 1);
//	ft_memset(s2+2, 165, 1);
//	ft_memset(s2+3, 178, 1);
//	printf("%s\n", s2);
//}

/*void	*f(void *s)
{
	int i = 0;
	char *str;
	str = ft_strdup((char*)s);
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}
int main()
{
    t_list  *mapped_list;
    t_list  *temp;

    t_list *s1 = ft_lstnew(ft_strdup("mehtap"));
    t_list *s2 = ft_lstnew(ft_strdup("aslan"));
    t_list *s3 = ft_lstnew(ft_strdup("suhan"));
    t_list *s4 = ft_lstnew(ft_strdup("gomec"));

    s1->next = s2;
    s2->next = s3;
    s3->next = s4;

    mapped_list = ft_lstmap(s1, f, free);

    temp = mapped_list;
    while (temp != NULL)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }
    return (0);
}*/

//void function(void *s)
//{
//	int i = 0;
//	char *str = (char *)s;
//	while(str[i])
//	{
//		if (str[i]<= 'z' && str[i] >= 'a')
//			str[i] -= 32;
//		i++;
//	}
//}
//int main()
//{
//	t_list *head = ft_lstnew(ft_strdup("odun"));
//	t_list *node1 = ft_lstnew(ft_strdup("tas"));
//	t_list *node2 = ft_lstnew(ft_strdup("elma"));
//	ft_lstadd_back(&head, node1);
//	ft_lstadd_back(&node1, node2);
//	int size = ft_lstsize(head);
//	ft_lstiter(head, function);

//	printf("%s\n", (char *)head->content);
//	printf("%s\n", (char *)head->next->content);
//	printf("%s\n", (char *)head->next->next->content);
//	printf("size:%d\n", size);

//	t_list *new_node = head->next;
//	head->next = new_node->next;
//	ft_lstdelone(new_node, free);
//	printf("%s\n", (char *)head->content);
//	printf("%s\n", (char *)head->next->content);
//	ft_lstclear(&head, free);
//}
