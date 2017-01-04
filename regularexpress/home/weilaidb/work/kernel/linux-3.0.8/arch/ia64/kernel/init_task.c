static struct signal_struct init_signals = INIT_SIGNALS(init_signals);
static struct sighand_struct init_sighand = INIT_SIGHAND(init_sighand);
#define init_thread_info	init_task_mem.s.thread_info
union  init_task_mem asm ("init_task") __init_task_data =
;
EXPORT_SYMBOL(init_task);
