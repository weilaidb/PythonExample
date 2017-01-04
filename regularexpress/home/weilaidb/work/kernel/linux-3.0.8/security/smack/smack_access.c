struct smack_known smack_known_huh = ;
struct smack_known smack_known_hat = ;
struct smack_known smack_known_star = ;
struct smack_known smack_known_floor = ;
struct smack_known smack_known_invalid = ;
struct smack_known smack_known_web = ;
LIST_HEAD(smack_known_list);
static u32 smack_next_secid = 10;
int log_policy = SMACK_AUDIT_DENIED;
int smk_access_entry(char *subject_label, char *object_label,
struct list_head *rule_list)
int smk_access(char *subject_label, char *object_label, int request,
struct smk_audit_info *a)
int smk_curacc(char *obj_label, u32 mode, struct smk_audit_info *a)
static inline void smack_str_from_perm(char *string, int access)
static void smack_log_callback(struct audit_buffer *ab, void *a)
void smack_log(char *subject_label, char *object_label, int request,
int result, struct smk_audit_info *ad)
void smack_log(char *subject_label, char *object_label, int request,
int result, struct smk_audit_info *ad)
static DEFINE_MUTEX(smack_known_lock);
struct smack_known *smk_import_entry(const char *string, int len)
char *smk_import(const char *string, int len)
char *smack_from_secid(const u32 secid)
u32 smack_to_secid(const char *smack)
void smack_from_cipso(u32 level, char *cp, char *result)
int smack_to_cipso(const char *smack, struct smack_cipso *cp)
