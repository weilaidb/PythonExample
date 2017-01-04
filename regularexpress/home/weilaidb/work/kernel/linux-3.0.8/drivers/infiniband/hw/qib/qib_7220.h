#define _QIB_7220_H
#define IBA7220_KRCVEGRCNT      2048U
#define IB_7220_LT_STATE_CFGRCVFCFG      0x09
#define IB_7220_LT_STATE_CFGWAITRMT      0x0a
#define IB_7220_LT_STATE_TXREVLANES      0x0d
#define IB_7220_LT_STATE_CFGENH          0x10
struct qib_chip_specific ;
struct qib_chippport_specific ;
int qib_sd7220_presets(struct qib_devdata *dd);
int qib_sd7220_init(struct qib_devdata *dd);
void qib_sd7220_clr_ibpar(struct qib_devdata *);
#define IB_7220_SERDES 2
static inline u32 qib_read_kreg32(const struct qib_devdata *dd,
const u16 regno)
static inline u64 qib_read_kreg64(const struct qib_devdata *dd,
const u16 regno)
static inline void qib_write_kreg(const struct qib_devdata *dd,
const u16 regno, u64 value)
void set_7220_relock_poll(struct qib_devdata *, int);
void shutdown_7220_relock_poll(struct qib_devdata *);
void toggle_7220_rclkrls(struct qib_devdata *);
