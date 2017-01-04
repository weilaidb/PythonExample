static int host_has_cmov = 1;
static jmp_buf cmov_test_return;
static void cmov_sigill_test_handler(int sig)
void arch_check_bugs(void)
void arch_examine_signal(int sig, struct uml_pt_regs *regs)
