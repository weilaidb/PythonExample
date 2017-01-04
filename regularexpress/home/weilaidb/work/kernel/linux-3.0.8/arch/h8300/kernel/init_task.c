static struct signal_struct init_signals = INIT_SIGNALS(init_signals);
static struct sighand_struct init_sighand = INIT_SIGHAND(init_sighand);
__asm__(".align 4");
struct task_struct init_task = INIT_TASK(init_task);
EXPORT_SYMBOL(init_task);
union thread_union init_thread_union __init_task_data =
;
