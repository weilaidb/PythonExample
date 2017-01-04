static void put_free_de(struct dlm_ls *ls, struct dlm_direntry *de)
static struct dlm_direntry *get_free_de(struct dlm_ls *ls, int len)
void dlm_clear_free_entries(struct dlm_ls *ls)
int dlm_hash2nodeid(struct dlm_ls *ls, uint32_t hash)
int dlm_dir_nodeid(struct dlm_rsb *r)
static inline uint32_t dir_hash(struct dlm_ls *ls, char *name, int len)
static void add_entry_to_hash(struct dlm_ls *ls, struct dlm_direntry *de)
static struct dlm_direntry *search_bucket(struct dlm_ls *ls, char *name,
int namelen, uint32_t bucket)
void dlm_dir_remove_entry(struct dlm_ls *ls, int nodeid, char *name, int namelen)
void dlm_dir_clear(struct dlm_ls *ls)
int dlm_recover_directory(struct dlm_ls *ls)
static int get_entry(struct dlm_ls *ls, int nodeid, char *name,
int namelen, int *r_nodeid)
int dlm_dir_lookup(struct dlm_ls *ls, int nodeid, char *name, int namelen,
int *r_nodeid)
static struct dlm_rsb *find_rsb_root(struct dlm_ls *ls, char *name, int len)
void dlm_copy_master_names(struct dlm_ls *ls, char *inbuf, int inlen,
char *outbuf, int outlen, int nodeid)
