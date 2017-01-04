const kernel_cap_t __cap_empty_set = CAP_EMPTY_SET;
EXPORT_SYMBOL(__cap_empty_set);
int file_caps_enabled = 1;
static int __init file_caps_disable(char *str)
__setup("no_file_caps", file_caps_disable);
static void warn_legacy_capability_use(void)
static void warn_deprecated_v2(void)
static int cap_validate_magic(cap_user_header_t header, unsigned *tocopy)
static inline int cap_get_target_pid(pid_t pid, kernel_cap_t *pEp,
kernel_cap_t *pIp, kernel_cap_t *pPp)
SYSCALL_DEFINE2(capget, cap_user_header_t, header, cap_user_data_t, dataptr)
SYSCALL_DEFINE2(capset, cap_user_header_t, header, const cap_user_data_t, data)
bool has_capability(struct task_struct *t, int cap)
bool has_ns_capability(struct task_struct *t,
struct user_namespace *ns, int cap)
bool has_capability_noaudit(struct task_struct *t, int cap)
bool capable(int cap)
EXPORT_SYMBOL(capable);
bool ns_capable(struct user_namespace *ns, int cap)
EXPORT_SYMBOL(ns_capable);
bool task_ns_capable(struct task_struct *t, int cap)
EXPORT_SYMBOL(task_ns_capable);
bool nsown_capable(int cap)
