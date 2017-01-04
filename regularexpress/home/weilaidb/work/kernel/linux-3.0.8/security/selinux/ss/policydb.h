#define _SS_POLICYDB_H_
struct perm_datum ;
struct common_datum ;
struct class_datum ;
struct role_datum ;
struct role_trans ;
struct filename_trans ;
struct filename_trans_datum ;
struct role_allow ;
struct type_datum ;
struct user_datum ;
struct level_datum ;
struct cat_datum ;
struct range_trans ;
struct cond_bool_datum ;
struct cond_node;
struct ocontext ;
struct genfs ;
#define SYM_COMMONS 0
#define SYM_CLASSES 1
#define SYM_ROLES   2
#define SYM_TYPES   3
#define SYM_USERS   4
#define SYM_BOOLS   5
#define SYM_LEVELS  6
#define SYM_CATS    7
#define SYM_NUM     8
#define OCON_ISID  0
#define OCON_FS    1
#define OCON_PORT  2
#define OCON_NETIF 3
#define OCON_NODE  4
#define OCON_FSUSE 5
#define OCON_NODE6 6
#define OCON_NUM   7
struct policydb ;
extern void policydb_destroy(struct policydb *p);
extern int policydb_load_isids(struct policydb *p, struct sidtab *s);
extern int policydb_context_isvalid(struct policydb *p, struct context *c);
extern int policydb_class_isvalid(struct policydb *p, unsigned int class);
extern int policydb_type_isvalid(struct policydb *p, unsigned int type);
extern int policydb_role_isvalid(struct policydb *p, unsigned int role);
extern int policydb_read(struct policydb *p, void *fp);
extern int policydb_write(struct policydb *p, void *fp);
#define PERM_SYMTAB_SIZE 32
#define POLICYDB_CONFIG_MLS    1
#define REJECT_UNKNOWN	0x00000002
#define ALLOW_UNKNOWN	0x00000004
#define OBJECT_R "object_r"
#define OBJECT_R_VAL 1
#define POLICYDB_MAGIC SELINUX_MAGIC
#define POLICYDB_STRING "SE Linux"
struct policy_file ;
struct policy_data ;
static inline int next_entry(void *buf, struct policy_file *fp, size_t bytes)
static inline int put_entry(const void *buf, size_t bytes, int num, struct policy_file *fp)
static inline char *sym_name(struct policydb *p, unsigned int sym_num, unsigned int element_nr)
extern u16 string_to_security_class(struct policydb *p, const char *name);
extern u32 string_to_av_perm(struct policydb *p, u16 tclass, const char *name);
