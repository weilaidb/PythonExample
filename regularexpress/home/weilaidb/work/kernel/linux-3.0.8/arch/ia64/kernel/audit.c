static unsigned dir_class[] = ;
static unsigned read_class[] = ;
static unsigned write_class[] = ;
static unsigned chattr_class[] = ;
static unsigned signal_class[] = ;
int audit_classify_arch(int arch)
int audit_classify_syscall(int abi, unsigned syscall)
static int __init audit_classes_init(void)
__initcall(audit_classes_init);
