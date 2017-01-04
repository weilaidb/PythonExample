extern const struct file_operations discovery_seq_fops;
extern const struct file_operations irlap_seq_fops;
extern const struct file_operations irlmp_seq_fops;
extern const struct file_operations irttp_seq_fops;
extern const struct file_operations irias_seq_fops;
struct irda_entry ;
struct proc_dir_entry *proc_irda;
EXPORT_SYMBOL(proc_irda);
static const struct irda_entry irda_dirs[] = ;
void __init irda_proc_register(void)
void irda_proc_unregister(void)
