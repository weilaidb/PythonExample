#define __i1480_DFU_H__
#define i1480_FW_UPLOAD_MODE_MASK (cpu_to_le32(0x00000018))
#if i1480_FW > 0x00000302
#define i1480_RCEB_EXTENDED
struct uwb_rccb;
struct uwb_rceb;
struct i1480 ;
static inline
void i1480_init(struct i1480 *i1480)
extern int i1480_fw_upload(struct i1480 *);
extern int i1480_pre_fw_upload(struct i1480 *);
extern int i1480_mac_fw_upload(struct i1480 *);
extern int i1480_phy_fw_upload(struct i1480 *);
extern ssize_t i1480_cmd(struct i1480 *, const char *, size_t, size_t);
extern int i1480_rceb_check(const struct i1480 *,
const struct uwb_rceb *, const char *, u8,
u8, unsigned);
enum ;
struct i1480_evt_confirm  __attribute__((packed));
struct i1480_rceb  __attribute__((packed));
struct i1480_evt_confirm_GMPI  __attribute__((packed));
struct i1480_cmd_mpi_write ;
struct i1480_cmd_mpi_read  __attribute__((packed));
struct i1480_evt_mpi_read  __attribute__((packed));
