#if CONFIG_NETWORK
#if CONFIG_RTP_MUXER
#define MAX_EXTRADATA_SIZE ((INT_MAX - 10) / 2)
struct sdp_session_level ;
static void sdp_write_address(char *buff, int size, const char *dest_addr,
const char *dest_type, int ttl)
static void sdp_write_header(char *buff, int size, struct sdp_session_level *s)
#if CONFIG_NETWORK
static int resolve_destination(char *dest_addr, int size, char *type,
int type_size)
static int resolve_destination(char *dest_addr, int size, char *type,
int type_size)
static int sdp_get_address(char *dest_addr, int size, int *ttl, const char *url)
#define MAX_PSET_SIZE 1024
static char *extradata2psets(AVCodecContext *c)
static char *extradata2psets_hevc(AVCodecContext *c)
static char *extradata2config(AVCodecContext *c)
static char *xiph_extradata2config(AVCodecContext *c)
static int latm_context2profilelevel(AVCodecContext *c)
static char *latm_context2config(AVCodecContext *c)
static char *sdp_write_media_attributes(char *buff, int size, AVCodecContext *c, int payload_type, AVFormatContext *fmt)
void ff_sdp_write_media(char *buff, int size, AVStream *st, int idx,
const char *dest_addr, const char *dest_type,
int port, int ttl, AVFormatContext *fmt)
int av_sdp_create(AVFormatContext *ac[], int n_files, char *buf, int size)
int av_sdp_create(AVFormatContext *ac[], int n_files, char *buf, int size)
void ff_sdp_write_media(char *buff, int size, AVStream *st, int idx,
const char *dest_addr, const char *dest_type,
int port, int ttl, AVFormatContext *fmt)
