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
	int				cheapest_pos;
	struct s_list	*prev;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(int *value);
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
int		swap(t_list **stack);
int		sa(t_list **stack_a);
int		push(t_list **stack_to, t_list **stack_from);
t_list	*get_min(t_list *stack);
void	index_stack(t_list **stack);
int		check_sorted(t_list **stack_a);
void    rearrange_b(t_list **stack_b, int *cost);
t_list	**init_stack(t_list **stack, char **arguments);
void	assign_a(t_list **stack_a);
void	assign_b(t_list **stack_b);
int		find_cheapest_cost(t_list **stack_a, t_list **stack_b);
int		stack_b_cost(t_list **stack_b);
int		stack_a_cost(t_list **stack_a);
int		target(t_list **stack_a, t_list **stack_b);
void    rearrange(t_list **stack_a, t_list **stack_b, int *cost);
void	send_to_a(t_list **stack_a, t_list **stack_b);
void	sort_large(t_list **stack_a, t_list **stack_b);
int		find_midpoint(t_list **stack);
void	push_to_b(t_list **stack_a, t_list **stack_b, int *total_nodes, int *i);
void	send_to_b(t_list **stack_a, t_list **stack_b, int *total_nodes);
void	send_to_b_by_midpoint(t_list **stack_a, t_list **stack_b);
void	sort(t_list **stack_a, t_list **stack_b);
void	sort3(t_list **stack_a);
char	**join_arguments(char **argv);
void	validate(char *arguments);
void	sig_check(char *arguments);
void	check_dup(char	*argu);
void	check_int(char *argu);
void	ft_error(void);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
int		find_cheapest_pos(t_list **stack_a, t_list **stack_b);
void    del(void *value);
void    sort_large(t_list **stack_a, t_list **stack_b);
void	free_arguments(char **arguments);
int		ft_min(t_list **stack_a);
int		ft_max(t_list **stack_a);
int		find_target_index(t_list **stack_a, t_list **stack_b);

#endif