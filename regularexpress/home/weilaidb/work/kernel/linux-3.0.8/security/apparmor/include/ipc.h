#define __AA_IPC_H
struct aa_profile;
int aa_may_ptrace(struct task_struct *tracer_task, struct aa_profile *tracer,
struct aa_profile *tracee, unsigned int mode);
int aa_ptrace(struct task_struct *tracer, struct task_struct *tracee,
unsigned int mode);
