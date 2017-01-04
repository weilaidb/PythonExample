static void audit_cb(struct audit_buffer *ab, void *va)
static int aa_audit_ptrace(struct aa_profile *profile,
struct aa_profile *target, int error)
int aa_may_ptrace(struct task_struct *tracer_task, struct aa_profile *tracer,
struct aa_profile *tracee, unsigned int mode)
int aa_ptrace(struct task_struct *tracer, struct task_struct *tracee,
unsigned int mode)
