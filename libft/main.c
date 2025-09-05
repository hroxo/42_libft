#include "libft_bonus.h"
#include <stdio.h>
#include <stdlib.h>

/* função que duplica o inteiro */
void *dup_int(void *content)
{
    if (!content)
        return NULL;
    int *out = malloc(sizeof(int));
    if (!out)
        return NULL;
    *out = *(int *)content * 2;
    return out;
}

/* função para libertar */
void del(void *content)
{
    free(content);
}

/* imprime a lista de inteiros */
void print_lst(t_list *lst)
{
    while (lst)
    {
        printf("%d ", *(int *)lst->content);
        lst = lst->next;
    }
    printf("\n");
}

int main(void)
{
    /* criar lista original com 3 elementos */
    t_list *list = NULL;
    t_list *node;
    int *a = malloc(sizeof(int));
    int *b = malloc(sizeof(int));
    int *c = malloc(sizeof(int));
    *a = 1; 
    *b = 2; 
    *c = 3;

    list = ft_lstnew(a);
    node = ft_lstnew(b);
    ft_lstadd_back(&list, node);
    node = ft_lstnew(c);
    ft_lstadd_back(&list, node);

    printf("Lista original: ");
    print_lst(list);

    /* aplicar map */
    t_list *mapped = ft_lstmap(list, dup_int, del);
    if (!mapped)
    {
        printf("Erro no ft_lstmap\n");
        ft_lstclear(&list, del);
        return (1);
    }

    printf("Lista mapeada: ");
    print_lst(mapped);

    /* limpar memória */
    ft_lstclear(&list, del);
    ft_lstclear(&mapped, del);
    return (0);
}

