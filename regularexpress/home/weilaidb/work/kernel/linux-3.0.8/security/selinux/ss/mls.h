#define _SS_MLS_H_
int mls_compute_context_len(struct context *context);
void mls_sid_to_context(struct context *context, char **scontext);
int mls_context_isvalid(struct policydb *p, struct context *c);
int mls_range_isvalid(struct policydb *p, struct mls_range *r);
int mls_level_isvalid(struct policydb *p, struct mls_level *l);
int mls_context_to_sid(struct policydb *p,
char oldc,
char **scontext,
struct context *context,
struct sidtab *s,
u32 def_sid);
int mls_from_string(char *str, struct context *context, gfp_t gfp_mask);
int mls_range_set(struct context *context, struct mls_range *range);
int mls_convert_context(struct policydb *oldp,
struct policydb *newp,
struct context *context);
int mls_compute_sid(struct context *scontext,
struct context *tcontext,
u16 tclass,
u32 specified,
struct context *newcontext,
bool sock);
int mls_setup_user_range(struct context *fromcon, struct user_datum *user,
struct context *usercon);
void mls_export_netlbl_lvl(struct context *context,
struct netlbl_lsm_secattr *secattr);
void mls_import_netlbl_lvl(struct context *context,
struct netlbl_lsm_secattr *secattr);
int mls_export_netlbl_cat(struct context *context,
struct netlbl_lsm_secattr *secattr);
int mls_import_netlbl_cat(struct context *context,
struct netlbl_lsm_secattr *secattr);
static inline void mls_export_netlbl_lvl(struct context *context,
struct netlbl_lsm_secattr *secattr)
static inline void mls_import_netlbl_lvl(struct context *context,
struct netlbl_lsm_secattr *secattr)
static inline int mls_export_netlbl_cat(struct context *context,
struct netlbl_lsm_secattr *secattr)
static inline int mls_import_netlbl_cat(struct context *context,
struct netlbl_lsm_secattr *secattr)
