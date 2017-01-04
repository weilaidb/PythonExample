#define _BUZ_H_
struct zoran_sync ;
#define MAJOR_VERSION 0
#define MINOR_VERSION 10
#define RELEASE_VERSION 0
#define ZORAN_NAME    "ZORAN"
#define ZR_DEVNAME(zr) ((zr)->name)
#define   BUZ_MAX_WIDTH   (zr->timing->Wa)
#define   BUZ_MAX_HEIGHT  (zr->timing->Ha)
#define   BUZ_MIN_WIDTH    32
#define   BUZ_MIN_HEIGHT   24
#define BUZ_NUM_STAT_COM    4
#define BUZ_MASK_STAT_COM   3
#define BUZ_MAX_FRAME     256
#define BUZ_MASK_FRAME    255
#define BUZ_MAX_INPUT       16
#if VIDEO_MAX_FRAME <= 32
#   define   V4L_MAX_FRAME   32
#elif VIDEO_MAX_FRAME <= 64
#   define   V4L_MAX_FRAME   64
#   error   "Too many video frame buffers to handle"
#define   V4L_MASK_FRAME   (V4L_MAX_FRAME - 1)
#define MAX_FRAME (BUZ_MAX_FRAME > VIDEO_MAX_FRAME ? BUZ_MAX_FRAME : VIDEO_MAX_FRAME)
enum card_type ;
enum zoran_codec_mode ;
enum zoran_buffer_state ;
enum zoran_map_mode ;
enum gpio_type ;
enum gpcs_type ;
struct zoran_format ;
#define ZORAN_FORMAT_COMPRESSED 1<<0
#define ZORAN_FORMAT_OVERLAY    1<<1
#define ZORAN_FORMAT_CAPTURE	1<<2
#define ZORAN_FORMAT_PLAYBACK	1<<3
struct zoran_overlay_settings ;
struct zoran_v4l_settings ;
struct zoran_jpg_settings ;
struct zoran_mapping ;
struct zoran_buffer ;
enum zoran_lock_activity ;
struct zoran_buffer_col ;
struct zoran;
struct zoran_fh ;
struct card_info ;
struct zoran ;
static inline struct zoran *to_zoran(struct v4l2_device *v4l2_dev)
#define btwrite(dat,adr)    writel((dat), zr->zr36057_mem+(adr))
#define btread(adr)         readl(zr->zr36057_mem+(adr))
#define btand(dat,adr)      btwrite((dat) & btread(adr), adr)
#define btor(dat,adr)       btwrite((dat) | btread(adr), adr)
#define btaor(dat,mask,adr) btwrite((dat) | ((mask) & btread(adr)), adr)
