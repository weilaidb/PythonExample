#define AVUTIL_PPC_INTREADWRITE_H
#if HAVE_XFORM_ASM
#if HAVE_BIGENDIAN
#define AV_RL16 av_read_bswap16
#define AV_WL16 av_write_bswap16
#define AV_RL32 av_read_bswap32
#define AV_WL32 av_write_bswap32
#define AV_RL64 av_read_bswap64
#define AV_WL64 av_write_bswap64
#define AV_RB16 av_read_bswap16
#define AV_WB16 av_write_bswap16
#define AV_RB32 av_read_bswap32
#define AV_WB32 av_write_bswap32
#define AV_RB64 av_read_bswap64
#define AV_WB64 av_write_bswap64
av_read_bswap16
av_write_bswap16
av_read_bswap32
av_write_bswap32
#if HAVE_LDBRX
av_read_bswap64
av_write_bswap64
av_read_bswap64
av_write_bswap64
