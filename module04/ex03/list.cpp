#include <iostream>

struct node
{
    std::string ptr;
    struct node *next;
};


node    *lstnew(std::string ptr)
{
    node *list;
    list = NULL;
    list = new node;
    list->ptr = ptr;
    return (list);
}

void    AddBack(node **list, node *next)
{
    if (*list == NULL)
	{
		*list = next;
		return ;
	}
    node *tmp = *list;
    while ((*list)->next)
        (*list) = (*list)->next;
    (*list)->next = next;
    next->next = NULL;
    *list = tmp;
}

int main()
{
    node *list = NULL;
    std::string am = "walid";
    for(int i = 0; i < 4; i++) 
        AddBack(&list, lstnew(am));
    while (list)
    {
        std::cout << list->ptr << std::endl;
        list = list->next;
    }
}