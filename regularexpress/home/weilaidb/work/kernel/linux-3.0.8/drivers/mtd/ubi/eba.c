#define EBA_RESERVED_PEBS 1
static unsigned long long next_sqnum(struct ubi_device *ubi)
static int ubi_get_compat(const struct ubi_device *ubi, int vol_id)
static struct ubi_ltree_entry *ltree_lookup(struct ubi_device *ubi, int vol_id,
int lnum)
static struct ubi_ltree_entry *ltree_add_entry(struct ubi_device *ubi,
int vol_id, int lnum)
static int leb_read_lock(struct ubi_device *ubi, int vol_id, int lnum)
static void leb_read_unlock(struct ubi_device *ubi, int vol_id, int lnum)
static int leb_write_lock(struct ubi_device *ubi, int vol_id, int lnum)
static int leb_write_trylock(struct ubi_device *ubi, int vol_id, int lnum)
static void leb_write_unlock(struct ubi_device *ubi, int vol_id, int lnum)
int ubi_eba_unmap_leb(struct ubi_device *ubi, struct ubi_volume *vol,
int lnum)
int ubi_eba_read_leb(struct ubi_device *ubi, struct ubi_volume *vol, int lnum,
void *buf, int offset, int len, int check)
static int recover_peb(struct ubi_device *ubi, int pnum, int vol_id, int lnum,
const void *buf, int offset, int len)
int ubi_eba_write_leb(struct ubi_device *ubi, struct ubi_volume *vol, int lnum,
const void *buf, int offset, int len, int dtype)
int ubi_eba_write_leb_st(struct ubi_device *ubi, struct ubi_volume *vol,
int lnum, const void *buf, int len, int dtype,
int used_ebs)
int ubi_eba_atomic_leb_change(struct ubi_device *ubi, struct ubi_volume *vol,
int lnum, const void *buf, int len, int dtype)
static int is_error_sane(int err)
int ubi_eba_copy_leb(struct ubi_device *ubi, int from, int to,
struct ubi_vid_hdr *vid_hdr)
static void print_rsvd_warning(struct ubi_device *ubi,
struct ubi_scan_info *si)
int ubi_eba_init_scan(struct ubi_device *ubi, struct ubi_scan_info *si)
