
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
//	{
//		temp[i] = ft_toupper(temp[i]);
//	}
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

#include <stdio.h>
int main()
{
	t_list *head;

	head = ft_lstnew(ft_strdup("hello"));
	ft_lstadd_back(&head ,ft_strdup("world"));
	ft_lstadd_back(&head ,ft_strdup("merhaba"));
	ft_lstadd_back(&head ,ft_strdup("dunya"));
	
	t_list *last;

	last = ft_lstlast(head);
	printf("%s\n", (char *)last->content);
}
