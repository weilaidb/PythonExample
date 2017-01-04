#define _LINUX_SELINUX_H
struct selinux_audit_rule;
struct audit_context;
struct kern_ipc_perm;
bool selinux_is_enabled(void);
static inline bool selinux_is_enabled(void)
