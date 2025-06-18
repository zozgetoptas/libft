#include "libft.h"
#include <stdio.h>
#include <fcntl.h>  // open fonksiyonu ve bayraklarÄ± (flags) iÃ§in
#include <unistd.h> // write ve close fonksiyonlarÄ± iÃ§in
#include <string.h> // strlen fonksiyonu iÃ§in
#include <stdlib.h>
void uppercase (void *content)
{
	int i = 0;
	char *s = (char *)content;
	while(s[i])
	{
		if (s[i] <= 'z' && s[i] >= 'a')
			s[i] -= 32;
		i++;
	}
}
int main(void)
{
t_list *head = NULL;
t_list *firstnode;
t_list *secondnode;
t_list *thirdnode;


char str1[] = "ozge";
char str2[] = "toptas";
char str3[] = "asd";

char *content1 = ft_strdup(str1);
char *content2 = ft_strdup(str2);
char *content3 = ft_strdup(str3);

firstnode = ft_lstnew(content1);
secondnode = ft_lstnew(content2);
thirdnode = ft_lstnew(content3);

ft_lstadd_front(&head,secondnode);
ft_lstadd_front(&head,firstnode);
ft_lstadd_back(&head,thirdnode);

t_list *temp = head;

// while (temp)
// {
//     // content'in bir string (char *) olduÄŸunu varsayÄ±yoruz
//     char *str = (char *)temp->content;
    
//     // String'in boÅŸ olmadÄ±ÄŸÄ±ndan ve ilk karakterinin olduÄŸundan emin olalÄ±m
//     if (str && *str != '\0') 
//     {
//         // String'in ilk karakterini kontrol et
//         if (ft_isalpha(*str))
//         {
//             // EÄŸer alfabetik ise, string'in tamamÄ±nÄ± yazdÄ±r
//             printf("String: %s\n", str);
//         }
//         else
//         {
// 			ft_putnbr_fd(*str,1);
//         }
//     }
//     temp = temp->next;
// }
// printf("\n");

printf("%d\n",ft_lstsize(head));
//printf("%s\n",(char *)(ft_lstlast(head)->content));
t_list *prev = NULL;
t_list *curr = head;
while (curr)
{
	if (!ft_strncmp(curr->content, str2, ft_strlen(str2)))
	{
		prev->next = curr->next;
		ft_lstdelone(curr,&free);
		curr = prev->next;
	}
	else
	{
		prev = curr;
		curr = curr->next;
	}
}

temp = head;
while(temp)
{
	printf("%s\n",(char *)temp->content);
	temp = temp->next;
}
ft_lstiter(head,&uppercase);
temp = head;
while(temp)
{
	printf("%s\n",(char *)temp->content);
	temp = temp->next;
}
}