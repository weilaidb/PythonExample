#define DRBD_H
#if __BYTE_ORDER == __LITTLE_ENDIAN
#define __LITTLE_ENDIAN_BITFIELD
#elif __BYTE_ORDER == __BIG_ENDIAN
#define __BIG_ENDIAN_BITFIELD
# error "sorry, weird endianness on this box"
extern const char *drbd_buildtag(void);
#define REL_VERSION "8.3.11"
#define API_VERSION 88
#define PRO_VERSION_MIN 86
#define PRO_VERSION_MAX 96
enum drbd_io_error_p ;
enum drbd_fencing_p ;
enum drbd_disconnect_p ;
enum drbd_after_sb_p ;
enum drbd_on_no_data ;
enum drbd_on_congestion ;
enum drbd_ret_code ;
#define DRBD_PROT_A   1
#define DRBD_PROT_B   2
#define DRBD_PROT_C   3
enum drbd_role ;
enum drbd_conns ;
enum drbd_disk_state ;
union drbd_state ;
enum drbd_state_rv ;
extern const char *drbd_conn_str(enum drbd_conns);
extern const char *drbd_role_str(enum drbd_role);
extern const char *drbd_disk_str(enum drbd_disk_state);
extern const char *drbd_set_st_err_str(enum drbd_state_rv);
#define SHARED_SECRET_MAX 64
#define MDF_CONSISTENT		(1 << 0)
#define MDF_PRIMARY_IND		(1 << 1)
#define MDF_CONNECTED_IND	(1 << 2)
#define MDF_FULL_SYNC		(1 << 3)
#define MDF_WAS_UP_TO_DATE	(1 << 4)
#define MDF_PEER_OUT_DATED	(1 << 5)
#define MDF_CRASHED_PRIMARY     (1 << 6)
enum drbd_uuid_index ;
enum drbd_timeout_flag ;
#define UUID_JUST_CREATED ((__u64)4)
#define DRBD_MAGIC 0x83740267
#define BE_DRBD_MAGIC __constant_cpu_to_be32(DRBD_MAGIC)
#define DRBD_MAGIC_BIG 0x835a
#define BE_DRBD_MAGIC_BIG __constant_cpu_to_be16(DRBD_MAGIC_BIG)
#define DRBD_MD_INDEX_INTERNAL -1
#define DRBD_MD_INDEX_FLEX_EXT -2
#define DRBD_MD_INDEX_FLEX_INT -3
#define DRBD_NL_CREATE_DEVICE 0x01
#define DRBD_NL_SET_DEFAULTS  0x02
#define CN_IDX_STEP			6977
struct drbd_nl_cfg_req ;
struct drbd_nl_cfg_reply ;
