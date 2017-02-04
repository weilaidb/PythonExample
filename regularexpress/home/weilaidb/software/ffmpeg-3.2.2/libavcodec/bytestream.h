#define AVCODEC_BYTESTREAM_H
typedef struct GetByteContext  GetByteContext;
typedef struct PutByteContext  PutByteContext;
DEF                                  \
static av_always_inline type bytestream_get_ ## name(const uint8_t **b)        \
\
static av_always_inline void bytestream_put_ ## name(uint8_t **b,              \
const type value)         \
\
static av_always_inline void bytestream2_put_ ## name ## u(PutByteContext *p,  \
const type value)   \
\
static av_always_inline void bytestream2_put_ ## name(PutByteContext *p,       \
const type value)        \
\
static av_always_inline type bytestream2_get_ ## name ## u(GetByteContext *g)  \
\
static av_always_inline type bytestream2_get_ ## name(GetByteContext *g)       \
\
static av_always_inline type bytestream2_peek_ ## name(GetByteContext *g)      \
DEF(uint64_t,     le64, 8, AV_RL64, AV_WL64)
DEF(unsigned int, le32, 4, AV_RL32, AV_WL32)
DEF(unsigned int, le24, 3, AV_RL24, AV_WL24)
DEF(unsigned int, le16, 2, AV_RL16, AV_WL16)
DEF(uint64_t,     be64, 8, AV_RB64, AV_WB64)
DEF(unsigned int, be32, 4, AV_RB32, AV_WB32)
DEF(unsigned int, be24, 3, AV_RB24, AV_WB24)
DEF(unsigned int, be16, 2, AV_RB16, AV_WB16)
DEF(unsigned int, byte, 1, AV_RB8 , AV_WB8)
#if HAVE_BIGENDIAN
#   define bytestream2_get_ne16  bytestream2_get_be16
#   define bytestream2_get_ne24  bytestream2_get_be24
#   define bytestream2_get_ne32  bytestream2_get_be32
#   define bytestream2_get_ne64  bytestream2_get_be64
#   define bytestream2_get_ne16u bytestream2_get_be16u
#   define bytestream2_get_ne24u bytestream2_get_be24u
#   define bytestream2_get_ne32u bytestream2_get_be32u
#   define bytestream2_get_ne64u bytestream2_get_be64u
#   define bytestream2_put_ne16  bytestream2_put_be16
#   define bytestream2_put_ne24  bytestream2_put_be24
#   define bytestream2_put_ne32  bytestream2_put_be32
#   define bytestream2_put_ne64  bytestream2_put_be64
#   define bytestream2_peek_ne16 bytestream2_peek_be16
#   define bytestream2_peek_ne24 bytestream2_peek_be24
#   define bytestream2_peek_ne32 bytestream2_peek_be32
#   define bytestream2_peek_ne64 bytestream2_peek_be64
#   define bytestream2_get_ne16  bytestream2_get_le16
#   define bytestream2_get_ne24  bytestream2_get_le24
#   define bytestream2_get_ne32  bytestream2_get_le32
#   define bytestream2_get_ne64  bytestream2_get_le64
#   define bytestream2_get_ne16u bytestream2_get_le16u
#   define bytestream2_get_ne24u bytestream2_get_le24u
#   define bytestream2_get_ne32u bytestream2_get_le32u
#   define bytestream2_get_ne64u bytestream2_get_le64u
#   define bytestream2_put_ne16  bytestream2_put_le16
#   define bytestream2_put_ne24  bytestream2_put_le24
#   define bytestream2_put_ne32  bytestream2_put_le32
#   define bytestream2_put_ne64  bytestream2_put_le64
#   define bytestream2_peek_ne16 bytestream2_peek_le16
#   define bytestream2_peek_ne24 bytestream2_peek_le24
#   define bytestream2_peek_ne32 bytestream2_peek_le32
#   define bytestream2_peek_ne64 bytestream2_peek_le64
bytestream2_init
bytestream2_init_writer
bytestream2_get_bytes_left
bytestream2_get_bytes_left_p
bytestream2_skip
bytestream2_skipu
bytestream2_skip_p
bytestream2_tell
bytestream2_tell_p
bytestream2_size
bytestream2_size_p
bytestream2_seek
bytestream2_seek_p
bytestream2_get_buffer
bytestream2_get_bufferu
bytestream2_put_buffer
bytestream2_put_bufferu
bytestream2_set_buffer
bytestream2_set_bufferu
bytestream2_get_eof
bytestream2_copy_bufferu
bytestream2_copy_buffer
bytestream_get_buffer
bytestream_put_buffer
