static int callchain_stack(void *data, char *name)
static void callchain_address(void *data, unsigned long addr, int reliable)
static const struct stacktrace_ops callchain_ops = ;
void
perf_callchain_kernel(struct perf_callchain_entry *entry, struct pt_regs *regs)
