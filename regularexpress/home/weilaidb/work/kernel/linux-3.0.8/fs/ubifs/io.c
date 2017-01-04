void ubifs_ro_mode(struct ubifs_info *c, int err)
int ubifs_check_node(const struct ubifs_info *c, const void *buf, int lnum,
int offs, int quiet, int must_chk_crc)
void ubifs_pad(const struct ubifs_info *c, void *buf, int pad)
static unsigned long long next_sqnum(struct ubifs_info *c)
void ubifs_prepare_node(struct ubifs_info *c, void *node, int len, int pad)
void ubifs_prep_grp_node(struct ubifs_info *c, void *node, int len, int last)
static enum hrtimer_restart wbuf_timer_callback_nolock(struct hrtimer *timer)
static void new_wbuf_timer_nolock(struct ubifs_wbuf *wbuf)
static void cancel_wbuf_timer_nolock(struct ubifs_wbuf *wbuf)
int ubifs_wbuf_sync_nolock(struct ubifs_wbuf *wbuf)
int ubifs_wbuf_seek_nolock(struct ubifs_wbuf *wbuf, int lnum, int offs,
int dtype)
int ubifs_bg_wbufs_sync(struct ubifs_info *c)
int ubifs_wbuf_write_nolock(struct ubifs_wbuf *wbuf, void *buf, int len)
int ubifs_write_node(struct ubifs_info *c, void *buf, int len, int lnum,
int offs, int dtype)
int ubifs_read_node_wbuf(struct ubifs_wbuf *wbuf, void *buf, int type, int len,
int lnum, int offs)
int ubifs_read_node(const struct ubifs_info *c, void *buf, int type, int len,
int lnum, int offs)
int ubifs_wbuf_init(struct ubifs_info *c, struct ubifs_wbuf *wbuf)
void ubifs_wbuf_add_ino_nolock(struct ubifs_wbuf *wbuf, ino_t inum)
static int wbuf_has_ino(struct ubifs_wbuf *wbuf, ino_t inum)
int ubifs_sync_wbufs_by_inode(struct ubifs_info *c, struct inode *inode)
