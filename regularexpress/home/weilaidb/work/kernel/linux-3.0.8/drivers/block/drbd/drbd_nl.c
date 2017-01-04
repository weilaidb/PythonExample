static unsigned short *tl_add_blob(unsigned short *, enum drbd_tags, const void *, int);
static unsigned short *tl_add_str(unsigned short *, enum drbd_tags, const char *);
static unsigned short *tl_add_int(unsigned short *, enum drbd_tags, const void *);
static char *drbd_m_holder = "Hands off! this is DRBD's meta data device.";
#define NL_PACKET(name, number, fields) \
static int name ## _from_tags(struct drbd_conf *mdev, \
unsigned short *tags, struct name *arg) __attribute__ ((unused)); \
static int name ## _from_tags(struct drbd_conf *mdev, \
unsigned short *tags, struct name *arg) \
#define NL_INTEGER(pn, pr, member) \
case pn: \
arg->member = get_unaligned((int *)(tags));	\
break;
#define NL_INT64(pn, pr, member) \
case pn: \
arg->member = get_unaligned((u64 *)(tags));	\
break;
#define NL_BIT(pn, pr, member) \
case pn: \
arg->member = *(char *)(tags) ? 1 : 0; \
break;
#define NL_STRING(pn, pr, member, len) \
case pn: \
if (dlen > len)  \
arg->member ## _len = dlen; \
memcpy(arg->member, tags, min_t(size_t, dlen, len)); \
break;
#define NL_PACKET(name, number, fields) \
static unsigned short* \
name ## _to_tags(struct drbd_conf *mdev, \
struct name *arg, unsigned short *tags) __attribute__ ((unused)); \
static unsigned short* \
name ## _to_tags(struct drbd_conf *mdev, \
struct name *arg, unsigned short *tags) \
#define NL_INTEGER(pn, pr, member) \
put_unaligned(pn | pr | TT_INTEGER, tags++);	\
put_unaligned(sizeof(int), tags++);		\
put_unaligned(arg->member, (int *)tags);	\
tags = (unsigned short *)((char *)tags+sizeof(int));
#define NL_INT64(pn, pr, member) \
put_unaligned(pn | pr | TT_INT64, tags++);	\
put_unaligned(sizeof(u64), tags++);		\
put_unaligned(arg->member, (u64 *)tags);	\
tags = (unsigned short *)((char *)tags+sizeof(u64));
#define NL_BIT(pn, pr, member) \
put_unaligned(pn | pr | TT_BIT, tags++);	\
put_unaligned(sizeof(char), tags++);		\
*(char *)tags = arg->member; \
tags = (unsigned short *)((char *)tags+sizeof(char));
#define NL_STRING(pn, pr, member, len) \
put_unaligned(pn | pr | TT_STRING, tags++);	\
put_unaligned(arg->member ## _len, tags++);	\
memcpy(tags, arg->member, arg->member ## _len); \
tags = (unsigned short *)((char *)tags + arg->member ## _len);
void drbd_bcast_ev_helper(struct drbd_conf *mdev, char *helper_name);
void drbd_nl_send_reply(struct cn_msg *, int);
int drbd_khelper(struct drbd_conf *mdev, char *cmd)
enum drbd_disk_state drbd_try_outdate_peer(struct drbd_conf *mdev)
static int _try_outdate_peer_async(void *data)
void drbd_try_outdate_peer_async(struct drbd_conf *mdev)
enum drbd_state_rv
drbd_set_role(struct drbd_conf *mdev, enum drbd_role new_role, int force)
static struct drbd_conf *ensure_mdev(int minor, int create)
static int drbd_nl_primary(struct drbd_conf *mdev, struct drbd_nl_cfg_req *nlp,
struct drbd_nl_cfg_reply *reply)
static int drbd_nl_secondary(struct drbd_conf *mdev, struct drbd_nl_cfg_req *nlp,
struct drbd_nl_cfg_reply *reply)
static void drbd_md_set_sector_offsets(struct drbd_conf *mdev,
struct drbd_backing_dev *bdev)
char *ppsize(char *buf, unsigned long long size)
void drbd_suspend_io(struct drbd_conf *mdev)
void drbd_resume_io(struct drbd_conf *mdev)
enum determine_dev_size drbd_determine_dev_size(struct drbd_conf *mdev, enum dds_flags flags) __must_hold(local)
sector_t
drbd_new_dev_size(struct drbd_conf *mdev, struct drbd_backing_dev *bdev, int assume_peer_has_space)
static int drbd_check_al_size(struct drbd_conf *mdev)
static void drbd_setup_queue_param(struct drbd_conf *mdev, unsigned int max_bio_size)
void drbd_reconsider_max_bio_size(struct drbd_conf *mdev)
static void drbd_reconfig_start(struct drbd_conf *mdev)
static void drbd_reconfig_done(struct drbd_conf *mdev)
static void drbd_suspend_al(struct drbd_conf *mdev)
static int drbd_nl_disk_conf(struct drbd_conf *mdev, struct drbd_nl_cfg_req *nlp,
struct drbd_nl_cfg_reply *reply)
static int drbd_nl_detach(struct drbd_conf *mdev, struct drbd_nl_cfg_req *nlp,
struct drbd_nl_cfg_reply *reply)
static int drbd_nl_net_conf(struct drbd_conf *mdev, struct drbd_nl_cfg_req *nlp,
struct drbd_nl_cfg_reply *reply)
static int drbd_nl_disconnect(struct drbd_conf *mdev, struct drbd_nl_cfg_req *nlp,
struct drbd_nl_cfg_reply *reply)
void resync_after_online_grow(struct drbd_conf *mdev)
static int drbd_nl_resize(struct drbd_conf *mdev, struct drbd_nl_cfg_req *nlp,
struct drbd_nl_cfg_reply *reply)
static int drbd_nl_syncer_conf(struct drbd_conf *mdev, struct drbd_nl_cfg_req *nlp,
struct drbd_nl_cfg_reply *reply)
static int drbd_nl_invalidate(struct drbd_conf *mdev, struct drbd_nl_cfg_req *nlp,
struct drbd_nl_cfg_reply *reply)
static int drbd_bmio_set_susp_al(struct drbd_conf *mdev)
static int drbd_nl_invalidate_peer(struct drbd_conf *mdev, struct drbd_nl_cfg_req *nlp,
struct drbd_nl_cfg_reply *reply)
static int drbd_nl_pause_sync(struct drbd_conf *mdev, struct drbd_nl_cfg_req *nlp,
struct drbd_nl_cfg_reply *reply)
static int drbd_nl_resume_sync(struct drbd_conf *mdev, struct drbd_nl_cfg_req *nlp,
struct drbd_nl_cfg_reply *reply)
static int drbd_nl_suspend_io(struct drbd_conf *mdev, struct drbd_nl_cfg_req *nlp,
struct drbd_nl_cfg_reply *reply)
static int drbd_nl_resume_io(struct drbd_conf *mdev, struct drbd_nl_cfg_req *nlp,
struct drbd_nl_cfg_reply *reply)
static int drbd_nl_outdate(struct drbd_conf *mdev, struct drbd_nl_cfg_req *nlp,
struct drbd_nl_cfg_reply *reply)
static int drbd_nl_get_config(struct drbd_conf *mdev, struct drbd_nl_cfg_req *nlp,
struct drbd_nl_cfg_reply *reply)
static int drbd_nl_get_state(struct drbd_conf *mdev, struct drbd_nl_cfg_req *nlp,
struct drbd_nl_cfg_reply *reply)
static int drbd_nl_get_uuids(struct drbd_conf *mdev, struct drbd_nl_cfg_req *nlp,
struct drbd_nl_cfg_reply *reply)
static int drbd_nl_get_timeout_flag(struct drbd_conf *mdev, struct drbd_nl_cfg_req *nlp,
struct drbd_nl_cfg_reply *reply)
static int drbd_nl_start_ov(struct drbd_conf *mdev, struct drbd_nl_cfg_req *nlp,
struct drbd_nl_cfg_reply *reply)
static int drbd_nl_new_c_uuid(struct drbd_conf *mdev, struct drbd_nl_cfg_req *nlp,
struct drbd_nl_cfg_reply *reply)
struct cn_handler_struct ;
static struct cn_handler_struct cnd_table[] = ;
static void drbd_connector_callback(struct cn_msg *req, struct netlink_skb_parms *nsp)
static atomic_t drbd_nl_seq = ATOMIC_INIT(2);
static unsigned short *
__tl_add_blob(unsigned short *tl, enum drbd_tags tag, const void *data,
unsigned short len, int nul_terminated)
static unsigned short *
tl_add_blob(unsigned short *tl, enum drbd_tags tag, const void *data, int len)
static unsigned short *
tl_add_str(unsigned short *tl, enum drbd_tags tag, const char *str)
static unsigned short *
tl_add_int(unsigned short *tl, enum drbd_tags tag, const void *val)
void drbd_bcast_state(struct drbd_conf *mdev, union drbd_state state)
void drbd_bcast_ev_helper(struct drbd_conf *mdev, char *helper_name)
void drbd_bcast_ee(struct drbd_conf *mdev,
const char *reason, const int dgs,
const char* seen_hash, const char* calc_hash,
const struct drbd_epoch_entry* e)
void drbd_bcast_sync_progress(struct drbd_conf *mdev)
int __init drbd_nl_init(void)
void drbd_nl_cleanup(void)
void drbd_nl_send_reply(struct cn_msg *req, int ret_code)
