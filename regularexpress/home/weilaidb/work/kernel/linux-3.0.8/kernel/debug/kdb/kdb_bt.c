static void kdb_show_stack(struct task_struct *p, void *addr)
static int
kdb_bt1(struct task_struct *p, unsigned long mask,
int argcount, int btaprompt)
int
kdb_bt(int argc, const char **argv)
