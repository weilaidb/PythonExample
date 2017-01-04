BLOCKING_NOTIFIER_HEAD(reboot_notifier_list);
static int notifier_chain_register(struct notifier_block **nl,
struct notifier_block *n)
static int notifier_chain_cond_register(struct notifier_block **nl,
struct notifier_block *n)
static int notifier_chain_unregister(struct notifier_block **nl,
struct notifier_block *n)
static int __kprobes notifier_call_chain(struct notifier_block **nl,
unsigned long val, void *v,
int nr_to_call,	int *nr_calls)
int atomic_notifier_chain_register(struct atomic_notifier_head *nh,
struct notifier_block *n)
EXPORT_SYMBOL_GPL(atomic_notifier_chain_register);
int atomic_notifier_chain_unregister(struct atomic_notifier_head *nh,
struct notifier_block *n)
EXPORT_SYMBOL_GPL(atomic_notifier_chain_unregister);
int __kprobes __atomic_notifier_call_chain(struct atomic_notifier_head *nh,
unsigned long val, void *v,
int nr_to_call, int *nr_calls)
EXPORT_SYMBOL_GPL(__atomic_notifier_call_chain);
int __kprobes atomic_notifier_call_chain(struct atomic_notifier_head *nh,
unsigned long val, void *v)
EXPORT_SYMBOL_GPL(atomic_notifier_call_chain);
int blocking_notifier_chain_register(struct blocking_notifier_head *nh,
struct notifier_block *n)
EXPORT_SYMBOL_GPL(blocking_notifier_chain_register);
int blocking_notifier_chain_cond_register(struct blocking_notifier_head *nh,
struct notifier_block *n)
EXPORT_SYMBOL_GPL(blocking_notifier_chain_cond_register);
int blocking_notifier_chain_unregister(struct blocking_notifier_head *nh,
struct notifier_block *n)
EXPORT_SYMBOL_GPL(blocking_notifier_chain_unregister);
int __blocking_notifier_call_chain(struct blocking_notifier_head *nh,
unsigned long val, void *v,
int nr_to_call, int *nr_calls)
EXPORT_SYMBOL_GPL(__blocking_notifier_call_chain);
int blocking_notifier_call_chain(struct blocking_notifier_head *nh,
unsigned long val, void *v)
EXPORT_SYMBOL_GPL(blocking_notifier_call_chain);
int raw_notifier_chain_register(struct raw_notifier_head *nh,
struct notifier_block *n)
EXPORT_SYMBOL_GPL(raw_notifier_chain_register);
int raw_notifier_chain_unregister(struct raw_notifier_head *nh,
struct notifier_block *n)
EXPORT_SYMBOL_GPL(raw_notifier_chain_unregister);
int __raw_notifier_call_chain(struct raw_notifier_head *nh,
unsigned long val, void *v,
int nr_to_call, int *nr_calls)
EXPORT_SYMBOL_GPL(__raw_notifier_call_chain);
int raw_notifier_call_chain(struct raw_notifier_head *nh,
unsigned long val, void *v)
EXPORT_SYMBOL_GPL(raw_notifier_call_chain);
int srcu_notifier_chain_register(struct srcu_notifier_head *nh,
struct notifier_block *n)
EXPORT_SYMBOL_GPL(srcu_notifier_chain_register);
int srcu_notifier_chain_unregister(struct srcu_notifier_head *nh,
struct notifier_block *n)
EXPORT_SYMBOL_GPL(srcu_notifier_chain_unregister);
int __srcu_notifier_call_chain(struct srcu_notifier_head *nh,
unsigned long val, void *v,
int nr_to_call, int *nr_calls)
EXPORT_SYMBOL_GPL(__srcu_notifier_call_chain);
int srcu_notifier_call_chain(struct srcu_notifier_head *nh,
unsigned long val, void *v)
EXPORT_SYMBOL_GPL(srcu_notifier_call_chain);
void srcu_init_notifier_head(struct srcu_notifier_head *nh)
EXPORT_SYMBOL_GPL(srcu_init_notifier_head);
int register_reboot_notifier(struct notifier_block *nb)
EXPORT_SYMBOL(register_reboot_notifier);
int unregister_reboot_notifier(struct notifier_block *nb)
EXPORT_SYMBOL(unregister_reboot_notifier);
static ATOMIC_NOTIFIER_HEAD(die_chain);
int notrace __kprobes notify_die(enum die_val val, const char *str,
struct pt_regs *regs, long err, int trap, int sig)
int register_die_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(register_die_notifier);
int unregister_die_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(unregister_die_notifier);
