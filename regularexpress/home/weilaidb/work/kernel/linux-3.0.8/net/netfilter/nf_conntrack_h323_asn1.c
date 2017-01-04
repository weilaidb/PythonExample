#define H323_TRACE 0
#if H323_TRACE
#define TAB_SIZE 4
#define IFTHEN(cond, act) if(cond)
#define PRINT printk
#define PRINT printf
#define FNAME(name) name,
#define IFTHEN(cond, act)
#define PRINT(fmt, args...)
#define FNAME(name)
#define NUL 0
#define BOOL 1
#define OID 2
#define INT 3
#define ENUM 4
#define BITSTR 5
#define NUMSTR 6
#define NUMDGT 6
#define TBCDSTR 6
#define OCTSTR 7
#define PRTSTR 7
#define IA5STR 7
#define GENSTR 7
#define BMPSTR 8
#define SEQ 9
#define SET 9
#define SEQOF 10
#define SETOF 10
#define CHOICE 11
#define FIXD 0
#define BYTE 9
#define WORD 10
#define CONS 11
#define SEMI 12
#define UNCO 13
#define SKIP 0
#define STOP 1
#define DECODE 2
#define EXT 4
#define OPEN 8
#define OPT 16
typedef struct field_t  field_t;
typedef struct  bitstr_t;
#define INC_BIT(bs) if((++(bs)->bit)>7)
#define INC_BITS(bs,b) if(((bs)->bit+=(b))>7)
#define BYTE_ALIGN(bs) if((bs)->bit)
#define CHECK_BOUND(bs,n) if((bs)->cur+(n)>(bs)->end)return(H323_ERROR_BOUND)
static unsigned int get_len(bitstr_t *bs);
static unsigned int get_bit(bitstr_t *bs);
static unsigned int get_bits(bitstr_t *bs, unsigned int b);
static unsigned int get_bitmap(bitstr_t *bs, unsigned int b);
static unsigned int get_uint(bitstr_t *bs, int b);
static int decode_nul(bitstr_t *bs, const struct field_t *f, char *base, int level);
static int decode_bool(bitstr_t *bs, const struct field_t *f, char *base, int level);
static int decode_oid(bitstr_t *bs, const struct field_t *f, char *base, int level);
static int decode_int(bitstr_t *bs, const struct field_t *f, char *base, int level);
static int decode_enum(bitstr_t *bs, const struct field_t *f, char *base, int level);
static int decode_bitstr(bitstr_t *bs, const struct field_t *f, char *base, int level);
static int decode_numstr(bitstr_t *bs, const struct field_t *f, char *base, int level);
static int decode_octstr(bitstr_t *bs, const struct field_t *f, char *base, int level);
static int decode_bmpstr(bitstr_t *bs, const struct field_t *f, char *base, int level);
static int decode_seq(bitstr_t *bs, const struct field_t *f, char *base, int level);
static int decode_seqof(bitstr_t *bs, const struct field_t *f, char *base, int level);
static int decode_choice(bitstr_t *bs, const struct field_t *f, char *base, int level);
typedef int (*decoder_t)(bitstr_t *, const struct field_t *, char *, int);
static const decoder_t Decoders[] = ;
static unsigned int get_len(bitstr_t *bs)
static unsigned int get_bit(bitstr_t *bs)
static unsigned int get_bits(bitstr_t *bs, unsigned int b)
static unsigned int get_bitmap(bitstr_t *bs, unsigned int b)
static unsigned int get_uint(bitstr_t *bs, int b)
static int decode_nul(bitstr_t *bs, const struct field_t *f,
char *base, int level)
static int decode_bool(bitstr_t *bs, const struct field_t *f,
char *base, int level)
static int decode_oid(bitstr_t *bs, const struct field_t *f,
char *base, int level)
static int decode_int(bitstr_t *bs, const struct field_t *f,
char *base, int level)
static int decode_enum(bitstr_t *bs, const struct field_t *f,
char *base, int level)
static int decode_bitstr(bitstr_t *bs, const struct field_t *f,
char *base, int level)
static int decode_numstr(bitstr_t *bs, const struct field_t *f,
char *base, int level)
static int decode_octstr(bitstr_t *bs, const struct field_t *f,
char *base, int level)
static int decode_bmpstr(bitstr_t *bs, const struct field_t *f,
char *base, int level)
static int decode_seq(bitstr_t *bs, const struct field_t *f,
char *base, int level)
static int decode_seqof(bitstr_t *bs, const struct field_t *f,
char *base, int level)
static int decode_choice(bitstr_t *bs, const struct field_t *f,
char *base, int level)
int DecodeRasMessage(unsigned char *buf, size_t sz, RasMessage *ras)
static int DecodeH323_UserInformation(unsigned char *buf, unsigned char *beg,
size_t sz, H323_UserInformation *uuie)
int DecodeMultimediaSystemControlMessage(unsigned char *buf, size_t sz,
MultimediaSystemControlMessage *
mscm)
int DecodeQ931(unsigned char *buf, size_t sz, Q931 *q931)
