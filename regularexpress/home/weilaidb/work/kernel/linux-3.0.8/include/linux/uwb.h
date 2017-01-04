#define __LINUX__UWB_H__
struct uwb_dev;
struct uwb_beca_e;
struct uwb_rc;
struct uwb_rsv;
struct uwb_dbg;
struct uwb_dev ;
#define to_uwb_dev(d) container_of(d, struct uwb_dev, dev)
enum ;
struct uwb_notifs_chain ;
struct uwb_beca ;
struct uwbd ;
struct uwb_mas_bm ;
enum uwb_rsv_state ;
enum uwb_rsv_target_type ;
struct uwb_rsv_target ;
struct uwb_rsv_move ;
#define UWB_NUM_GLOBAL_STREAMS 1
typedef void (*uwb_rsv_cb_f)(struct uwb_rsv *rsv);
struct uwb_rsv ;
static const
struct uwb_mas_bm uwb_mas_bm_zero = ;
static inline void uwb_mas_bm_copy_le(void *dst, const struct uwb_mas_bm *mas)
struct uwb_drp_avail ;
struct uwb_drp_backoff_win ;
const char *uwb_rsv_state_str(enum uwb_rsv_state state);
const char *uwb_rsv_type_str(enum uwb_drp_type type);
struct uwb_rsv *uwb_rsv_create(struct uwb_rc *rc, uwb_rsv_cb_f cb,
void *pal_priv);
void uwb_rsv_destroy(struct uwb_rsv *rsv);
int uwb_rsv_establish(struct uwb_rsv *rsv);
int uwb_rsv_modify(struct uwb_rsv *rsv,
int max_mas, int min_mas, int sparsity);
void uwb_rsv_terminate(struct uwb_rsv *rsv);
void uwb_rsv_accept(struct uwb_rsv *rsv, uwb_rsv_cb_f cb, void *pal_priv);
void uwb_rsv_get_usable_mas(struct uwb_rsv *orig_rsv, struct uwb_mas_bm *mas);
struct uwb_rc ;
struct uwb_pal ;
void uwb_pal_init(struct uwb_pal *pal);
int uwb_pal_register(struct uwb_pal *pal);
void uwb_pal_unregister(struct uwb_pal *pal);
int uwb_radio_start(struct uwb_pal *pal);
void uwb_radio_stop(struct uwb_pal *pal);
struct uwb_dev *uwb_dev_get_by_devaddr(struct uwb_rc *rc,
const struct uwb_dev_addr *devaddr);
struct uwb_dev *uwb_dev_get_by_rc(struct uwb_dev *, struct uwb_rc *);
static inline void uwb_dev_get(struct uwb_dev *uwb_dev)
static inline void uwb_dev_put(struct uwb_dev *uwb_dev)
struct uwb_dev *uwb_dev_try_get(struct uwb_rc *rc, struct uwb_dev *uwb_dev);
typedef int (*uwb_dev_for_each_f)(struct device *dev, void *priv);
int uwb_dev_for_each(struct uwb_rc *rc, uwb_dev_for_each_f func, void *priv);
struct uwb_rc *uwb_rc_alloc(void);
struct uwb_rc *uwb_rc_get_by_dev(const struct uwb_dev_addr *);
struct uwb_rc *uwb_rc_get_by_grandpa(const struct device *);
void uwb_rc_put(struct uwb_rc *rc);
typedef void (*uwb_rc_cmd_cb_f)(struct uwb_rc *rc, void *arg,
struct uwb_rceb *reply, ssize_t reply_size);
int uwb_rc_cmd_async(struct uwb_rc *rc, const char *cmd_name,
struct uwb_rccb *cmd, size_t cmd_size,
u8 expected_type, u16 expected_event,
uwb_rc_cmd_cb_f cb, void *arg);
ssize_t uwb_rc_cmd(struct uwb_rc *rc, const char *cmd_name,
struct uwb_rccb *cmd, size_t cmd_size,
struct uwb_rceb *reply, size_t reply_size);
ssize_t uwb_rc_vcmd(struct uwb_rc *rc, const char *cmd_name,
struct uwb_rccb *cmd, size_t cmd_size,
u8 expected_type, u16 expected_event,
struct uwb_rceb **preply);
size_t __uwb_addr_print(char *, size_t, const unsigned char *, int);
int uwb_rc_dev_addr_set(struct uwb_rc *, const struct uwb_dev_addr *);
int uwb_rc_dev_addr_get(struct uwb_rc *, struct uwb_dev_addr *);
int uwb_rc_mac_addr_set(struct uwb_rc *, const struct uwb_mac_addr *);
int uwb_rc_mac_addr_get(struct uwb_rc *, struct uwb_mac_addr *);
int __uwb_mac_addr_assigned_check(struct device *, void *);
int __uwb_dev_addr_assigned_check(struct device *, void *);
static inline size_t uwb_dev_addr_print(char *buf, size_t buf_size,
const struct uwb_dev_addr *addr)
static inline size_t uwb_mac_addr_print(char *buf, size_t buf_size,
const struct uwb_mac_addr *addr)
static inline int uwb_dev_addr_cmp(const struct uwb_dev_addr *addr1,
const struct uwb_dev_addr *addr2)
static inline int uwb_mac_addr_cmp(const struct uwb_mac_addr *addr1,
const struct uwb_mac_addr *addr2)
static inline int uwb_mac_addr_bcast(const struct uwb_mac_addr *addr)
static inline int uwb_mac_addr_unset(const struct uwb_mac_addr *addr)
static inline unsigned __uwb_dev_addr_assigned(struct uwb_rc *rc,
struct uwb_dev_addr *addr)
void uwb_rc_init(struct uwb_rc *);
int uwb_rc_add(struct uwb_rc *, struct device *dev, void *rc_priv);
void uwb_rc_rm(struct uwb_rc *);
void uwb_rc_neh_grok(struct uwb_rc *, void *, size_t);
void uwb_rc_neh_error(struct uwb_rc *, int);
void uwb_rc_reset_all(struct uwb_rc *rc);
void uwb_rc_pre_reset(struct uwb_rc *rc);
int uwb_rc_post_reset(struct uwb_rc *rc);
static inline bool uwb_rsv_is_owner(struct uwb_rsv *rsv)
enum uwb_notifs ;
struct uwb_notifs_handler ;
int uwb_notifs_register(struct uwb_rc *, struct uwb_notifs_handler *);
int uwb_notifs_deregister(struct uwb_rc *, struct uwb_notifs_handler *);
struct uwb_est_entry ;
int uwb_est_register(u8 type, u8 code_high, u16 vendor, u16 product,
const struct uwb_est_entry *, size_t entries);
int uwb_est_unregister(u8 type, u8 code_high, u16 vendor, u16 product,
const struct uwb_est_entry *, size_t entries);
ssize_t uwb_est_find_size(struct uwb_rc *rc, const struct uwb_rceb *rceb,
size_t len);
enum ;
struct edc ;
static inline
void edc_init(struct edc *edc)
static inline int edc_inc(struct edc *err_hist, u16 max_err, u16 timeframe)
struct uwb_ie_hdr *uwb_ie_next(void **ptr, size_t *len);
int uwb_rc_ie_add(struct uwb_rc *uwb_rc, const struct uwb_ie_hdr *ies, size_t size);
int uwb_rc_ie_rm(struct uwb_rc *uwb_rc, enum uwb_ie element_id);
struct stats ;
static inline
void stats_init(struct stats *stats)
static inline
void stats_add_sample(struct stats *stats, s8 sample)
static inline ssize_t stats_show(struct stats *stats, char *buf)
static inline ssize_t stats_store(struct stats *stats, const char *buf,
size_t size)
