const char *op_table[] = ;
const char *audit_mode_names[] = ;
static char *aa_audit_type[] = ;
static void audit_pre(struct audit_buffer *ab, void *ca)
void aa_audit_msg(int type, struct common_audit_data *sa,
void (*cb) (struct audit_buffer *, void *))
int aa_audit(int type, struct aa_profile *profile, gfp_t gfp,
struct common_audit_data *sa,
void (*cb) (struct audit_buffer *, void *))
