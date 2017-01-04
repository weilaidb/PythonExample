static void do_calc_lpt_geom(struct ubifs_info *c)
int ubifs_calc_lpt_geom(struct ubifs_info *c)
static int calc_dflt_lpt_geom(struct ubifs_info *c, int *main_lebs,
int *big_lpt)
static void pack_bits(uint8_t **addr, int *pos, uint32_t val, int nrbits)
uint32_t ubifs_unpack_bits(uint8_t **addr, int *pos, int nrbits)
void ubifs_pack_pnode(struct ubifs_info *c, void *buf,
struct ubifs_pnode *pnode)
void ubifs_pack_nnode(struct ubifs_info *c, void *buf,
struct ubifs_nnode *nnode)
void ubifs_pack_ltab(struct ubifs_info *c, void *buf,
struct ubifs_lpt_lprops *ltab)
void ubifs_pack_lsave(struct ubifs_info *c, void *buf, int *lsave)
void ubifs_add_lpt_dirt(struct ubifs_info *c, int lnum, int dirty)
static void set_ltab(struct ubifs_info *c, int lnum, int free, int dirty)
void ubifs_add_nnode_dirt(struct ubifs_info *c, struct ubifs_nnode *nnode)
static void add_pnode_dirt(struct ubifs_info *c, struct ubifs_pnode *pnode)
static int calc_nnode_num(int row, int col)
static int calc_nnode_num_from_parent(const struct ubifs_info *c,
struct ubifs_nnode *parent, int iip)
static int calc_pnode_num_from_parent(const struct ubifs_info *c,
struct ubifs_nnode *parent, int iip)
int ubifs_create_dflt_lpt(struct ubifs_info *c, int *main_lebs, int lpt_first,
int *lpt_lebs, int *big_lpt)
static void update_cats(struct ubifs_info *c, struct ubifs_pnode *pnode)
static void replace_cats(struct ubifs_info *c, struct ubifs_pnode *old_pnode,
struct ubifs_pnode *new_pnode)
static int check_lpt_crc(void *buf, int len)
static int check_lpt_type(uint8_t **addr, int *pos, int type)
static int unpack_pnode(const struct ubifs_info *c, void *buf,
struct ubifs_pnode *pnode)
int ubifs_unpack_nnode(const struct ubifs_info *c, void *buf,
struct ubifs_nnode *nnode)
static int unpack_ltab(const struct ubifs_info *c, void *buf)
static int unpack_lsave(const struct ubifs_info *c, void *buf)
static int validate_nnode(const struct ubifs_info *c, struct ubifs_nnode *nnode,
struct ubifs_nnode *parent, int iip)
static int validate_pnode(const struct ubifs_info *c, struct ubifs_pnode *pnode,
struct ubifs_nnode *parent, int iip)
static void set_pnode_lnum(const struct ubifs_info *c,
struct ubifs_pnode *pnode)
int ubifs_read_nnode(struct ubifs_info *c, struct ubifs_nnode *parent, int iip)
static int read_pnode(struct ubifs_info *c, struct ubifs_nnode *parent, int iip)
static int read_ltab(struct ubifs_info *c)
static int read_lsave(struct ubifs_info *c)
struct ubifs_nnode *ubifs_get_nnode(struct ubifs_info *c,
struct ubifs_nnode *parent, int iip)
struct ubifs_pnode *ubifs_get_pnode(struct ubifs_info *c,
struct ubifs_nnode *parent, int iip)
struct ubifs_lprops *ubifs_lpt_lookup(struct ubifs_info *c, int lnum)
static struct ubifs_nnode *dirty_cow_nnode(struct ubifs_info *c,
struct ubifs_nnode *nnode)
static struct ubifs_pnode *dirty_cow_pnode(struct ubifs_info *c,
struct ubifs_pnode *pnode)
struct ubifs_lprops *ubifs_lpt_lookup_dirty(struct ubifs_info *c, int lnum)
static int lpt_init_rd(struct ubifs_info *c)
static int lpt_init_wr(struct ubifs_info *c)
int ubifs_lpt_init(struct ubifs_info *c, int rd, int wr)
struct lpt_scan_node ;
static struct ubifs_nnode *scan_get_nnode(struct ubifs_info *c,
struct lpt_scan_node *path,
struct ubifs_nnode *parent, int iip)
static struct ubifs_pnode *scan_get_pnode(struct ubifs_info *c,
struct lpt_scan_node *path,
struct ubifs_nnode *parent, int iip)
int ubifs_lpt_scan_nolock(struct ubifs_info *c, int start_lnum, int end_lnum,
ubifs_lpt_scan_callback scan_cb, void *data)
static int dbg_chk_pnode(struct ubifs_info *c, struct ubifs_pnode *pnode,
int col)
int dbg_check_lpt_nodes(struct ubifs_info *c, struct ubifs_cnode *cnode,
int row, int col)
