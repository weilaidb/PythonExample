#define __UBI_DEBUG_H__
struct ubi_ec_hdr;
struct ubi_vid_hdr;
struct ubi_volume;
struct ubi_vtbl_record;
struct ubi_scan_volume;
struct ubi_scan_leb;
struct ubi_mkvol_req;
#define ubi_assert(expr)  do  while (0)
#define dbg_err(fmt, ...) ubi_err(fmt, ##__VA_ARGS__)
#define ubi_dbg_dump_stack() dump_stack()
#define ubi_dbg_print_hex_dump(l, ps, pt, r, g, b, len, a)  \
print_hex_dump(l, ps, pt, r, g, b, len, a)
#define ubi_dbg_msg(type, fmt, ...) \
pr_debug("UBI DBG " type ": " fmt "\n", ##__VA_ARGS__)
#define dbg_msg(fmt, ...) ubi_dbg_msg("msg", fmt, ##__VA_ARGS__)
#define dbg_gen(fmt, ...) ubi_dbg_msg("gen", fmt, ##__VA_ARGS__)
#define dbg_eba(fmt, ...) ubi_dbg_msg("eba", fmt, ##__VA_ARGS__)
#define dbg_wl(fmt, ...)  ubi_dbg_msg("wl", fmt, ##__VA_ARGS__)
#define dbg_io(fmt, ...)  ubi_dbg_msg("io", fmt, ##__VA_ARGS__)
#define dbg_bld(fmt, ...) ubi_dbg_msg("bld", fmt, ##__VA_ARGS__)
void ubi_dbg_dump_ec_hdr(const struct ubi_ec_hdr *ec_hdr);
void ubi_dbg_dump_vid_hdr(const struct ubi_vid_hdr *vid_hdr);
void ubi_dbg_dump_vol_info(const struct ubi_volume *vol);
void ubi_dbg_dump_vtbl_record(const struct ubi_vtbl_record *r, int idx);
void ubi_dbg_dump_sv(const struct ubi_scan_volume *sv);
void ubi_dbg_dump_seb(const struct ubi_scan_leb *seb, int type);
void ubi_dbg_dump_mkvol_req(const struct ubi_mkvol_req *req);
void ubi_dbg_dump_flash(struct ubi_device *ubi, int pnum, int offset, int len);
extern unsigned int ubi_chk_flags;
enum ;
int ubi_dbg_check_all_ff(struct ubi_device *ubi, int pnum, int offset, int len);
int ubi_dbg_check_write(struct ubi_device *ubi, const void *buf, int pnum,
int offset, int len);
extern unsigned int ubi_tst_flags;
enum ;
static inline int ubi_dbg_is_bgt_disabled(void)
static inline int ubi_dbg_is_bitflip(void)
static inline int ubi_dbg_is_write_failure(void)
static inline int ubi_dbg_is_erase_failure(void)
#define ubi_assert(expr)  do  while (0)
#define dbg_err(fmt, ...) do  while (0)
#define ubi_dbg_msg(fmt, ...) do  while (0)
#define dbg_msg(fmt, ...)  ubi_dbg_msg(fmt, ##__VA_ARGS__)
#define dbg_gen(fmt, ...)  ubi_dbg_msg(fmt, ##__VA_ARGS__)
#define dbg_eba(fmt, ...)  ubi_dbg_msg(fmt, ##__VA_ARGS__)
#define dbg_wl(fmt, ...)   ubi_dbg_msg(fmt, ##__VA_ARGS__)
#define dbg_io(fmt, ...)   ubi_dbg_msg(fmt, ##__VA_ARGS__)
#define dbg_bld(fmt, ...)  ubi_dbg_msg(fmt, ##__VA_ARGS__)
static inline void ubi_dbg_dump_stack(void)
static inline void
ubi_dbg_dump_ec_hdr(const struct ubi_ec_hdr *ec_hdr)
static inline void
ubi_dbg_dump_vid_hdr(const struct ubi_vid_hdr *vid_hdr)
static inline void
ubi_dbg_dump_vol_info(const struct ubi_volume *vol)
static inline void
ubi_dbg_dump_vtbl_record(const struct ubi_vtbl_record *r, int idx)
static inline void ubi_dbg_dump_sv(const struct ubi_scan_volume *sv)
static inline void ubi_dbg_dump_seb(const struct ubi_scan_leb *seb,
int type)
static inline void
ubi_dbg_dump_mkvol_req(const struct ubi_mkvol_req *req)
static inline void ubi_dbg_dump_flash(struct ubi_device *ubi,
int pnum, int offset, int len)
static inline void
ubi_dbg_print_hex_dump(const char *l, const char *ps, int pt, int r,
int g, const void *b, size_t len, bool a)
static inline int ubi_dbg_is_bgt_disabled(void)
static inline int ubi_dbg_is_bitflip(void)
static inline int ubi_dbg_is_write_failure(void)
static inline int ubi_dbg_is_erase_failure(void)
static inline int ubi_dbg_check_all_ff(struct ubi_device *ubi,
int pnum, int offset,
int len)
static inline int ubi_dbg_check_write(struct ubi_device *ubi,
const void *buf, int pnum,
int offset, int len)
