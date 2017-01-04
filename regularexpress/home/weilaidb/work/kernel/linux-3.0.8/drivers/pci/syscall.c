SYSCALL_DEFINE5(pciconfig_read, unsigned long, bus, unsigned long, dfn,
unsigned long, off, unsigned long, len, void __user *, buf)
SYSCALL_DEFINE5(pciconfig_write, unsigned long, bus, unsigned long, dfn,
unsigned long, off, unsigned long, len, void __user *, buf)
