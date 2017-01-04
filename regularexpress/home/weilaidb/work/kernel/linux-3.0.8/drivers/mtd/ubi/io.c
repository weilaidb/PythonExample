static int paranoid_check_not_bad(const struct ubi_device *ubi, int pnum);
static int paranoid_check_peb_ec_hdr(const struct ubi_device *ubi, int pnum);
static int paranoid_check_ec_hdr(const struct ubi_device *ubi, int pnum,
const struct ubi_ec_hdr *ec_hdr);
static int paranoid_check_peb_vid_hdr(const struct ubi_device *ubi, int pnum);
static int paranoid_check_vid_hdr(const struct ubi_device *ubi, int pnum,
const struct ubi_vid_hdr *vid_hdr);
#define paranoid_check_not_bad(ubi, pnum) 0
#define paranoid_check_peb_ec_hdr(ubi, pnum)  0
#define paranoid_check_ec_hdr(ubi, pnum, ec_hdr)  0
#define paranoid_check_peb_vid_hdr(ubi, pnum) 0
#define paranoid_check_vid_hdr(ubi, pnum, vid_hdr) 0
int ubi_io_read(const struct ubi_device *ubi, void *buf, int pnum, int offset,
int len)
int ubi_io_write(struct ubi_device *ubi, const void *buf, int pnum, int offset,
int len)
static void erase_callback(struct erase_info *ei)
static int do_sync_erase(struct ubi_device *ubi, int pnum)
static uint8_t patterns[] = ;
static int torture_peb(struct ubi_device *ubi, int pnum)
static int nor_erase_prepare(struct ubi_device *ubi, int pnum)
int ubi_io_sync_erase(struct ubi_device *ubi, int pnum, int torture)
int ubi_io_is_bad(const struct ubi_device *ubi, int pnum)
int ubi_io_mark_bad(const struct ubi_device *ubi, int pnum)
static int validate_ec_hdr(const struct ubi_device *ubi,
const struct ubi_ec_hdr *ec_hdr)
int ubi_io_read_ec_hdr(struct ubi_device *ubi, int pnum,
struct ubi_ec_hdr *ec_hdr, int verbose)
int ubi_io_write_ec_hdr(struct ubi_device *ubi, int pnum,
struct ubi_ec_hdr *ec_hdr)
static int validate_vid_hdr(const struct ubi_device *ubi,
const struct ubi_vid_hdr *vid_hdr)
int ubi_io_read_vid_hdr(struct ubi_device *ubi, int pnum,
struct ubi_vid_hdr *vid_hdr, int verbose)
int ubi_io_write_vid_hdr(struct ubi_device *ubi, int pnum,
struct ubi_vid_hdr *vid_hdr)
static int paranoid_check_not_bad(const struct ubi_device *ubi, int pnum)
static int paranoid_check_ec_hdr(const struct ubi_device *ubi, int pnum,
const struct ubi_ec_hdr *ec_hdr)
static int paranoid_check_peb_ec_hdr(const struct ubi_device *ubi, int pnum)
static int paranoid_check_vid_hdr(const struct ubi_device *ubi, int pnum,
const struct ubi_vid_hdr *vid_hdr)
static int paranoid_check_peb_vid_hdr(const struct ubi_device *ubi, int pnum)
int ubi_dbg_check_write(struct ubi_device *ubi, const void *buf, int pnum,
int offset, int len)
int ubi_dbg_check_all_ff(struct ubi_device *ubi, int pnum, int offset, int len)
