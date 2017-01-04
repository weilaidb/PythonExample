int putreg(struct task_struct *child, unsigned long regno,
unsigned long value)
int poke_user(struct task_struct *child, long addr, long data)
unsigned long getreg(struct task_struct *child, unsigned long regno)
int peek_user(struct task_struct *child, long addr, long data)
