#define __AA_RESOURCE_H
struct aa_profile;
struct aa_rlimit ;
int aa_map_resource(int resource);
int aa_task_setrlimit(struct aa_profile *profile, struct task_struct *,
unsigned int resource, struct rlimit *new_rlim);
void __aa_transition_rlimits(struct aa_profile *old, struct aa_profile *new);
static inline void aa_free_rlimit_rules(struct aa_rlimit *rlims)
