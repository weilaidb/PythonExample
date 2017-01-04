#define _LINUX_KDEBUG_H
struct notifier_block;
struct die_args ;
int register_die_notifier(struct notifier_block *nb);
int unregister_die_notifier(struct notifier_block *nb);
int notify_die(enum die_val val, const char *str,
struct pt_regs *regs, long err, int trap, int sig);
