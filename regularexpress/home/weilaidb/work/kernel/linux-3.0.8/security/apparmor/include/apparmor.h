#define __APPARMOR_H
extern enum audit_mode aa_g_audit;
extern int aa_g_audit_header;
extern int aa_g_debug;
extern int aa_g_lock_policy;
extern int aa_g_logsyscall;
extern int aa_g_paranoid_load;
extern unsigned int aa_g_path_max;
#define AA_DEBUG(fmt, args...)						\
do  while (0)
#define AA_ERROR(fmt, args...)						\
do  while (0)
extern int apparmor_initialized __initdata;
char *aa_split_fqname(char *args, char **ns_name);
void aa_info_message(const char *str);
void *kvmalloc(size_t size);
void kvfree(void *buffer);
static inline bool aa_strneq(const char *str, const char *sub, int len)
static inline unsigned int aa_dfa_null_transition(struct aa_dfa *dfa,
unsigned int start)
static inline bool mediated_filesystem(struct inode *inode)
