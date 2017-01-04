static unsigned long no_fiq_insn;
static int fiq_def_op(void *ref, int relinquish)
static struct fiq_handler default_owner = ;
static struct fiq_handler *current_fiq = &default_owner;
int show_fiq_list(struct seq_file *p, int prec)
void set_fiq_handler(void *start, unsigned int length)
int claim_fiq(struct fiq_handler *f)
void release_fiq(struct fiq_handler *f)
void enable_fiq(int fiq)
void disable_fiq(int fiq)
EXPORT_SYMBOL(set_fiq_handler);
EXPORT_SYMBOL(__set_fiq_regs);
EXPORT_SYMBOL(__get_fiq_regs);
EXPORT_SYMBOL(claim_fiq);
EXPORT_SYMBOL(release_fiq);
EXPORT_SYMBOL(enable_fiq);
EXPORT_SYMBOL(disable_fiq);
void __init init_FIQ(void)
