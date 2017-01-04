static int scan_padding_bytes(void *buf, int len)
int ubifs_scan_a_node(const struct ubifs_info *c, void *buf, int len, int lnum,
int offs, int quiet)
struct ubifs_scan_leb *ubifs_start_scan(const struct ubifs_info *c, int lnum,
int offs, void *sbuf)
void ubifs_end_scan(const struct ubifs_info *c, struct ubifs_scan_leb *sleb,
int lnum, int offs)
int ubifs_add_snod(const struct ubifs_info *c, struct ubifs_scan_leb *sleb,
void *buf, int offs)
void ubifs_scanned_corruption(const struct ubifs_info *c, int lnum, int offs,
void *buf)
struct ubifs_scan_leb *ubifs_scan(const struct ubifs_info *c, int lnum,
int offs, void *sbuf, int quiet)
void ubifs_scan_destroy(struct ubifs_scan_leb *sleb)
