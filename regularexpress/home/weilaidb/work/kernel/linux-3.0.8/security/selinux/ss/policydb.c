#define _DEBUG_HASHES
static const char *symtab_name[SYM_NUM] = ;
static unsigned int symtab_sizes[SYM_NUM] = ;
struct policydb_compat_info ;
static struct policydb_compat_info policydb_compat[] = ;
static struct policydb_compat_info *policydb_lookup_compat(int version)
static int roles_init(struct policydb *p)
static u32 filenametr_hash(struct hashtab *h, const void *k)
static int filenametr_cmp(struct hashtab *h, const void *k1, const void *k2)
static u32 rangetr_hash(struct hashtab *h, const void *k)
static int rangetr_cmp(struct hashtab *h, const void *k1, const void *k2)
static int policydb_init(struct policydb *p)
static int common_index(void *key, void *datum, void *datap)
static int class_index(void *key, void *datum, void *datap)
static int role_index(void *key, void *datum, void *datap)
static int type_index(void *key, void *datum, void *datap)
static int user_index(void *key, void *datum, void *datap)
static int sens_index(void *key, void *datum, void *datap)
static int cat_index(void *key, void *datum, void *datap)
static int (*index_f[SYM_NUM]) (void *key, void *datum, void *datap) =
;
static void hash_eval(struct hashtab *h, const char *hash_name)
static void symtab_hash_eval(struct symtab *s)
static inline void hash_eval(struct hashtab *h, char *hash_name)
static int policydb_index(struct policydb *p)
static int perm_destroy(void *key, void *datum, void *p)
static int common_destroy(void *key, void *datum, void *p)
static int cls_destroy(void *key, void *datum, void *p)
static int role_destroy(void *key, void *datum, void *p)
static int type_destroy(void *key, void *datum, void *p)
static int user_destroy(void *key, void *datum, void *p)
static int sens_destroy(void *key, void *datum, void *p)
static int cat_destroy(void *key, void *datum, void *p)
static int (*destroy_f[SYM_NUM]) (void *key, void *datum, void *datap) =
;
static int filenametr_destroy(void *key, void *datum, void *p)
static int range_tr_destroy(void *key, void *datum, void *p)
static void ocontext_destroy(struct ocontext *c, int i)
void policydb_destroy(struct policydb *p)
int policydb_load_isids(struct policydb *p, struct sidtab *s)
int policydb_class_isvalid(struct policydb *p, unsigned int class)
int policydb_role_isvalid(struct policydb *p, unsigned int role)
int policydb_type_isvalid(struct policydb *p, unsigned int type)
int policydb_context_isvalid(struct policydb *p, struct context *c)
static int mls_read_range_helper(struct mls_range *r, void *fp)
static int context_read_and_validate(struct context *c,
struct policydb *p,
void *fp)
static int perm_read(struct policydb *p, struct hashtab *h, void *fp)
static int common_read(struct policydb *p, struct hashtab *h, void *fp)
static int read_cons_helper(struct constraint_node **nodep, int ncons,
int allowxtarget, void *fp)
static int class_read(struct policydb *p, struct hashtab *h, void *fp)
static int role_read(struct policydb *p, struct hashtab *h, void *fp)
static int type_read(struct policydb *p, struct hashtab *h, void *fp)
static int mls_read_level(struct mls_level *lp, void *fp)
static int user_read(struct policydb *p, struct hashtab *h, void *fp)
static int sens_read(struct policydb *p, struct hashtab *h, void *fp)
static int cat_read(struct policydb *p, struct hashtab *h, void *fp)
static int (*read_f[SYM_NUM]) (struct policydb *p, struct hashtab *h, void *fp) =
;
static int user_bounds_sanity_check(void *key, void *datum, void *datap)
static int role_bounds_sanity_check(void *key, void *datum, void *datap)
static int type_bounds_sanity_check(void *key, void *datum, void *datap)
static int policydb_bounds_sanity_check(struct policydb *p)
extern int ss_initialized;
u16 string_to_security_class(struct policydb *p, const char *name)
u32 string_to_av_perm(struct policydb *p, u16 tclass, const char *name)
static int range_read(struct policydb *p, void *fp)
static int filename_trans_read(struct policydb *p, void *fp)
static int genfs_read(struct policydb *p, void *fp)
static int ocontext_read(struct policydb *p, struct policydb_compat_info *info,
void *fp)
int policydb_read(struct policydb *p, void *fp)
static int mls_write_level(struct mls_level *l, void *fp)
static int mls_write_range_helper(struct mls_range *r, void *fp)
static int sens_write(void *vkey, void *datum, void *ptr)
static int cat_write(void *vkey, void *datum, void *ptr)
static int role_trans_write(struct policydb *p, void *fp)
static int role_allow_write(struct role_allow *r, void *fp)
static int context_write(struct policydb *p, struct context *c,
void *fp)
static int perm_write(void *vkey, void *datum, void *fp)
static int common_write(void *vkey, void *datum, void *ptr)
static int write_cons_helper(struct policydb *p, struct constraint_node *node,
void *fp)
static int class_write(void *vkey, void *datum, void *ptr)
static int role_write(void *vkey, void *datum, void *ptr)
static int type_write(void *vkey, void *datum, void *ptr)
static int user_write(void *vkey, void *datum, void *ptr)
static int (*write_f[SYM_NUM]) (void *key, void *datum,
void *datap) =
;
static int ocontext_write(struct policydb *p, struct policydb_compat_info *info,
void *fp)
static int genfs_write(struct policydb *p, void *fp)
static int hashtab_cnt(void *key, void *data, void *ptr)
static int range_write_helper(void *key, void *data, void *ptr)
static int range_write(struct policydb *p, void *fp)
static int filename_write_helper(void *key, void *data, void *ptr)
static int filename_trans_write(struct policydb *p, void *fp)
int policydb_write(struct policydb *p, void *fp)
