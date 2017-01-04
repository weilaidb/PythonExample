static struct saved_context saved_context;
unsigned long saved_context_ebx;
unsigned long saved_context_esp, saved_context_ebp;
unsigned long saved_context_esi, saved_context_edi;
unsigned long saved_context_eflags;
struct saved_context saved_context;
static void __save_processor_state(struct saved_context *ctxt)
void save_processor_state(void)
EXPORT_SYMBOL(save_processor_state);
static void do_fpu_end(void)
static void fix_processor_context(void)
static void __restore_processor_state(struct saved_context *ctxt)
void restore_processor_state(void)
EXPORT_SYMBOL(restore_processor_state);
