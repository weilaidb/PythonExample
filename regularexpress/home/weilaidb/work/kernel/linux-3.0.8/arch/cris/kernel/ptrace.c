extern int do_signal(int canrestart, struct pt_regs *regs);
void do_notify_resume(int canrestart, struct pt_regs *regs,
__u32 thread_info_flags)
