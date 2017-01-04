#define __AA_CONTEXT_H
struct aa_file_cxt ;
static inline struct aa_file_cxt *aa_alloc_file_context(gfp_t gfp)
static inline void aa_free_file_context(struct aa_file_cxt *cxt)
struct aa_task_cxt ;
struct aa_task_cxt *aa_alloc_task_context(gfp_t flags);
void aa_free_task_context(struct aa_task_cxt *cxt);
void aa_dup_task_context(struct aa_task_cxt *new,
const struct aa_task_cxt *old);
int aa_replace_current_profile(struct aa_profile *profile);
int aa_set_current_onexec(struct aa_profile *profile);
int aa_set_current_hat(struct aa_profile *profile, u64 token);
int aa_restore_previous_profile(u64 cookie);
static inline bool __aa_task_is_confined(struct task_struct *task)
static inline struct aa_profile *aa_cred_profile(const struct cred *cred)
static inline struct aa_profile *__aa_current_profile(void)
static inline struct aa_profile *aa_current_profile(void)
