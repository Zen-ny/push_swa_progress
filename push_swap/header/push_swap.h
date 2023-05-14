#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_list
{
	int				value;
	int				index;
	int				pos_a;
	int				pos_b;
	int				c_pos;
	int				t_pos;
	int				target_pos;
	int				cost_pos;
	int				cheapest_pos;
	struct s_list	*prev;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		pa(t_list **stack_b, t_list **stack_a);
int		pb(t_list **stack_a, t_list **stack_b);
int		rotate(t_list **stack);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);
int		reverse(t_list **stack);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);
int		swap(t_list **stack);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);
int		push(t_list **stack_to, t_list **stack_from);
int		get_min(t_list **stack);
void	index_stack(t_list **stack);
void	ft_free(char **str);
void	check_sorted(t_list **stack_a);
void    rearrange_b(t_list **stack_b, *int cost);
t_list	init_stack(t_list **stack, int argc, char **arguments);

#endif