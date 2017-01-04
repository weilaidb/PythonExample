struct replay_entry ;
struct bud_entry ;
static int set_bud_lprops(struct ubifs_info *c, struct bud_entry *b)
static int set_buds_lprops(struct ubifs_info *c)
static int trun_remove_range(struct ubifs_info *c, struct replay_entry *r)
static int apply_replay_entry(struct ubifs_info *c, struct replay_entry *r)
static int replay_entries_cmp(void *priv, struct list_head *a,
struct list_head *b)
static int apply_replay_list(struct ubifs_info *c)
static void destroy_replay_list(struct ubifs_info *c)
static int insert_node(struct ubifs_info *c, int lnum, int offs, int len,
union ubifs_key *key, unsigned long long sqnum,
int deletion, int *used, loff_t old_size,
loff_t new_size)
static int insert_dent(struct ubifs_info *c, int lnum, int offs, int len,
union ubifs_key *key, const char *name, int nlen,
unsigned long long sqnum, int deletion, int *used)
int ubifs_validate_entry(struct ubifs_info *c,
const struct ubifs_dent_node *dent)
static int is_last_bud(struct ubifs_info *c, struct ubifs_bud *bud)
static int replay_bud(struct ubifs_info *c, struct bud_entry *b)
static int replay_buds(struct ubifs_info *c)
static void destroy_bud_list(struct ubifs_info *c)
static int add_replay_bud(struct ubifs_info *c, int lnum, int offs, int jhead,
unsigned long long sqnum)
static int validate_ref(struct ubifs_info *c, const struct ubifs_ref_node *ref)
static int replay_log_leb(struct ubifs_info *c, int lnum, int offs, void *sbuf)
static int take_ihead(struct ubifs_info *c)
int ubifs_replay_journal(struct ubifs_info *c)
