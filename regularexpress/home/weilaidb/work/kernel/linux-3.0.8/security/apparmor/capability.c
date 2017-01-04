struct audit_cache ;
static DEFINE_PER_CPU(struct audit_cache, audit_cache);
static void audit_cb(struct audit_buffer *ab, void *va)
static int audit_caps(struct aa_profile *profile, struct task_struct *task,
int cap, int error)
static int profile_capable(struct aa_profile *profile, int cap)
int aa_capable(struct task_struct *task, struct aa_profile *profile, int cap,
int audit)
