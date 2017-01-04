static void audit_cb(struct audit_buffer *ab, void *va)
static int audit_resource(struct aa_profile *profile, unsigned int resource,
unsigned long value, int error)
int aa_map_resource(int resource)
int aa_task_setrlimit(struct aa_profile *profile, struct task_struct *task,
unsigned int resource, struct rlimit *new_rlim)
void __aa_transition_rlimits(struct aa_profile *old, struct aa_profile *new)
