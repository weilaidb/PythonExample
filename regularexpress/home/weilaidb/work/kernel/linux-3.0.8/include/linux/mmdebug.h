#define LINUX_MM_DEBUG_H 1
#define VM_BUG_ON(cond) BUG_ON(cond)
#define VM_BUG_ON(cond) do  while (0)
#define VIRTUAL_BUG_ON(cond) BUG_ON(cond)
#define VIRTUAL_BUG_ON(cond) do  while (0)
