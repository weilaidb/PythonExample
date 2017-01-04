#define __AA_AUDIT_H
struct aa_profile;
extern const char *audit_mode_names[];
#define AUDIT_MAX_INDEX 5
#define AUDIT_APPARMOR_AUTO 0
enum audit_mode ;
enum audit_type ;
extern const char *op_table[];
enum aa_ops ;
#define aad apparmor_audit_data
void aa_audit_msg(int type, struct common_audit_data *sa,
void (*cb) (struct audit_buffer *, void *));
int aa_audit(int type, struct aa_profile *profile, gfp_t gfp,
struct common_audit_data *sa,
void (*cb) (struct audit_buffer *, void *));
static inline int complain_error(int error)
