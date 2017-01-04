static const char reflog_expire_usage[] =
"git reflog expire [--verbose] [--dry-run] [--stale-fix] [--expire=<time>] [--expire-unreachable=<time>] [--all] <refs>...";
static const char reflog_delete_usage[] =
"git reflog delete [--verbose] [--dry-run] [--rewrite] [--updateref] <refs>...";
static unsigned long default_reflog_expire;
static unsigned long default_reflog_expire_unreachable;
struct cmd_reflog_expire_cb ;
struct expire_reflog_cb ;
struct collected_reflog ;
struct collect_reflog_cb ;
#define INCOMPLETE	(1u<<10)
#define STUDYING	(1u<<11)
#define REACHABLE	(1u<<12)
static int tree_is_complete(const unsigned char *sha1)
static int commit_is_complete(struct commit *commit)
static int keep_entry(struct commit **it, unsigned char *sha1)
static void mark_reachable(struct expire_reflog_cb *cb)
static int unreachable(struct expire_reflog_cb *cb, struct commit *commit, unsigned char *sha1)
static int expire_reflog_ent(unsigned char *osha1, unsigned char *nsha1,
const char *email, unsigned long timestamp, int tz,
const char *message, void *cb_data)
static int push_tip_to_list(const char *refname, const unsigned char *sha1, int flags, void *cb_data)
static int expire_reflog(const char *ref, const unsigned char *sha1, int unused, void *cb_data)
static int collect_reflog(const char *ref, const unsigned char *sha1, int unused, void *cb_data)
static struct reflog_expire_cfg  *reflog_expire_cfg, **reflog_expire_cfg_tail;
static struct reflog_expire_cfg *find_cfg_ent(const char *pattern, size_t len)
static int parse_expire_cfg_value(const char *var, const char *value, unsigned long *expire)
#define EXPIRE_TOTAL   01
#define EXPIRE_UNREACH 02
static int reflog_expire_config(const char *var, const char *value, void *cb)
static void set_reflog_expiry_param(struct cmd_reflog_expire_cb *cb, int slot, const char *ref)
static int cmd_reflog_expire(int argc, const char **argv, const char *prefix)
static int count_reflog_ent(unsigned char *osha1, unsigned char *nsha1,
const char *email, unsigned long timestamp, int tz,
const char *message, void *cb_data)
static int cmd_reflog_delete(int argc, const char **argv, const char *prefix)
static const char reflog_usage[] =
"git reflog [ show | expire | delete ]";
int cmd_reflog(int argc, const char **argv, const char *prefix)
