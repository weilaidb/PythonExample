#define AVCODEC_PUT_BITS_H
typedef struct PutBitContext  PutBitContext;
static inline void init_put_bits(PutBitContext *s, uint8_t *buffer,
int buffer_size)
static inline void rebase_put_bits(PutBitContext *s, uint8_t *buffer,
int buffer_size)
static inline int put_bits_count(PutBitContext *s)
static inline int put_bits_left(PutBitContext* s)
static inline void flush_put_bits(PutBitContext *s)
#define avpriv_align_put_bits align_put_bits_unsupported_here
#define avpriv_put_string ff_put_string_unsupported_here
#define avpriv_copy_bits avpriv_copy_bits_unsupported_here
void avpriv_align_put_bits(PutBitContext *s);
void avpriv_put_string(PutBitContext *pb, const char *string,
int terminate_string);
void avpriv_copy_bits(PutBitContext *pb, const uint8_t *src, int length);
static inline void put_bits(PutBitContext *s, int n, unsigned int value)
static inline void put_sbits(PutBitContext *pb, int n, int32_t value)
static void av_unused put_bits32(PutBitContext *s, uint32_t value)
static inline uint8_t *put_bits_ptr(PutBitContext *s)
static inline void skip_put_bytes(PutBitContext *s, int n)
static inline void skip_put_bits(PutBitContext *s, int n)
static inline void set_put_bits_buffer_size(PutBitContext *s, int size)
