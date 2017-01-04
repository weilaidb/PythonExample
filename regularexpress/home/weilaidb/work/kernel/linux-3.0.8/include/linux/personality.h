#define _LINUX_PERSONALITY_H
struct exec_domain;
struct pt_regs;
extern int		register_exec_domain(struct exec_domain *);
extern int		unregister_exec_domain(struct exec_domain *);
extern int		__set_personality(unsigned int);
enum ;
#define PER_CLEAR_ON_SETID (READ_IMPLIES_EXEC  | \
ADDR_NO_RANDOMIZE  | \
ADDR_COMPAT_LAYOUT | \
MMAP_PAGE_ZERO)
enum ;
typedef void (*handler_t)(int, struct pt_regs *);
struct exec_domain ;
#define personality(pers)	(pers & PER_MASK)
#define set_personality(pers) \
((current->personality == (pers)) ? 0 : __set_personality(pers))
