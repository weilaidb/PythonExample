#define __AA_CAPABILITY_H
struct aa_profile;
struct aa_caps ;
int aa_capable(struct task_struct *task, struct aa_profile *profile, int cap,
int audit);
static inline void aa_free_cap_rules(struct aa_caps *caps)
