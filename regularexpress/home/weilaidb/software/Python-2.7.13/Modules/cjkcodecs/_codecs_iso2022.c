#define USING_IMPORTED_MAPS
#define USING_BINARY_PAIR_SEARCH
#define EXTERN_JISX0213_PAIR
#define EMULATE_JISX0213_2000_ENCODE_INVALID MAP_UNMAPPABLE
#define EMULATE_JISX0213_2000_DECODE_INVALID MAP_UNMAPPABLE
#define ESC                     0x1B
#define SO                      0x0E
#define SI                      0x0F
#define LF                      0x0A
#define MAX_ESCSEQLEN           16
#define CHARSET_ISO8859_1       'A'
#define CHARSET_ASCII           'B'
#define CHARSET_ISO8859_7       'F'
#define CHARSET_JISX0201_K      'I'
#define CHARSET_JISX0201_R      'J'
#define CHARSET_GB2312          ('A'|CHARSET_DBCS)
#define CHARSET_JISX0208        ('B'|CHARSET_DBCS)
#define CHARSET_KSX1001         ('C'|CHARSET_DBCS)
#define CHARSET_JISX0212        ('D'|CHARSET_DBCS)
#define CHARSET_GB2312_8565     ('E'|CHARSET_DBCS)
#define CHARSET_CNS11643_1      ('G'|CHARSET_DBCS)
#define CHARSET_CNS11643_2      ('H'|CHARSET_DBCS)
#define CHARSET_JISX0213_2000_1 ('O'|CHARSET_DBCS)
#define CHARSET_JISX0213_2      ('P'|CHARSET_DBCS)
#define CHARSET_JISX0213_2004_1 ('Q'|CHARSET_DBCS)
#define CHARSET_JISX0208_O      ('@'|CHARSET_DBCS)
#define CHARSET_DBCS            0x80
#define ESCMARK(mark)           ((mark) & 0x7f)
#define IS_ESCEND(c)    (((c) >= 'A' && (c) <= 'Z') || (c) == '@')
#define IS_ISO2022ESC(c2) \
((c2) == '(' || (c2) == ')' || (c2) == '$' || \
(c2) == '.' || (c2) == '&')
#define MAP_UNMAPPABLE          0xFFFF
#define MAP_MULTIPLE_AVAIL      0xFFFE
#define F_SHIFTED               0x01
#define F_ESCTHROUGHOUT         0x02
#define STATE_SETG(dn, v)       ((state)->c[dn]) = (v);
#define STATE_GETG(dn)          ((state)->c[dn])
#define STATE_G0                STATE_GETG(0)
#define STATE_G1                STATE_GETG(1)
#define STATE_G2                STATE_GETG(2)
#define STATE_G3                STATE_GETG(3)
#define STATE_SETG0(v)          STATE_SETG(0, v)
#define STATE_SETG1(v)          STATE_SETG(1, v)
#define STATE_SETG2(v)          STATE_SETG(2, v)
#define STATE_SETG3(v)          STATE_SETG(3, v)
#define STATE_SETFLAG(f)        ((state)->c[4]) |= (f);
#define STATE_GETFLAG(f)        ((state)->c[4] & (f))
#define STATE_CLEARFLAG(f)      ((state)->c[4]) &= ~(f);
#define STATE_CLEARFLAGS()      ((state)->c[4]) = 0;
#define ISO2022_CONFIG          ((const struct iso2022_config *)config)
#define CONFIG_ISSET(flag)      (ISO2022_CONFIG->flags & (flag))
#define CONFIG_DESIGNATIONS     (ISO2022_CONFIG->designations)
#define NO_SHIFT                0x01
#define USE_G2                  0x02
#define USE_JISX0208_EXT        0x04
typedef int (*iso2022_init_func)(void);
typedef ucs4_t (*iso2022_decode_func)(const unsigned char *data);
typedef DBCHAR (*iso2022_encode_func)(const ucs4_t *data, Py_ssize_t *length);
struct iso2022_designation ;
struct iso2022_config ;
CODEC_INIT(iso2022)
ENCODER_INIT(iso2022)
ENCODER_RESET(iso2022)
ENCODER(iso2022)
DECODER_INIT(iso2022)
DECODER_RESET(iso2022)
static Py_ssize_t
iso2022processesc(const void *config, MultibyteCodec_State *state,
const unsigned char **inbuf, Py_ssize_t *inleft)
#define ISO8859_7_DECODE(c, assi)                                       \
if ((c) < 0xa0) (assi) = (c);                                       \
else if ((c) < 0xc0 && (0x288f3bc9L & (1L << ((c)-0xa0))))          \
(assi) = (c);                                                   \
else if ((c) >= 0xb4 && (c) <= 0xfe && ((c) >= 0xd4 ||              \
(0xbffffd77L & (1L << ((c)-0xb4)))))                       \
(assi) = 0x02d0 + (c);                                          \
else if ((c) == 0xa1) (assi) = 0x2018;                              \
else if ((c) == 0xa2) (assi) = 0x2019;                              \
else if ((c) == 0xaf) (assi) = 0x2015;
static Py_ssize_t
iso2022processg2(const void *config, MultibyteCodec_State *state,
const unsigned char **inbuf, Py_ssize_t *inleft,
Py_UNICODE **outbuf, Py_ssize_t *outleft)
DECODER(iso2022)
#define ENCMAP(enc) static const encode_map *enc##_encmap = NULL;
#define DECMAP(enc) static const decode_map *enc##_decmap = NULL;
ENCMAP(cp949)
DECMAP(ksx1001)
ENCMAP(jisxcommon)
DECMAP(jisx0208)
DECMAP(jisx0212)
ENCMAP(jisx0213_bmp)
DECMAP(jisx0213_1_bmp)
DECMAP(jisx0213_2_bmp)
ENCMAP(jisx0213_emp)
DECMAP(jisx0213_1_emp)
DECMAP(jisx0213_2_emp)
ENCMAP(gbcommon)
DECMAP(gb2312)
static int
ksx1001_init(void)
static ucs4_t
ksx1001_decoder(const unsigned char *data)
static DBCHAR
ksx1001_encoder(const ucs4_t *data, Py_ssize_t *length)
static int
jisx0208_init(void)
static ucs4_t
jisx0208_decoder(const unsigned char *data)
static DBCHAR
jisx0208_encoder(const ucs4_t *data, Py_ssize_t *length)
static int
jisx0212_init(void)
static ucs4_t
jisx0212_decoder(const unsigned char *data)
static DBCHAR
jisx0212_encoder(const ucs4_t *data, Py_ssize_t *length)
static int
jisx0213_init(void)
#define config ((void *)2000)
static ucs4_t
jisx0213_2000_1_decoder(const unsigned char *data)
static ucs4_t
jisx0213_2000_2_decoder(const unsigned char *data)
#undef config
static ucs4_t
jisx0213_2004_1_decoder(const unsigned char *data)
static ucs4_t
jisx0213_2004_2_decoder(const unsigned char *data)
static DBCHAR
jisx0213_encoder(const ucs4_t *data, Py_ssize_t *length, void *config)
static DBCHAR
jisx0213_2000_1_encoder(const ucs4_t *data, Py_ssize_t *length)
static DBCHAR
jisx0213_2000_1_encoder_paironly(const ucs4_t *data, Py_ssize_t *length)
static DBCHAR
jisx0213_2000_2_encoder(const ucs4_t *data, Py_ssize_t *length)
static DBCHAR
jisx0213_2004_1_encoder(const ucs4_t *data, Py_ssize_t *length)
static DBCHAR
jisx0213_2004_1_encoder_paironly(const ucs4_t *data, Py_ssize_t *length)
static DBCHAR
jisx0213_2004_2_encoder(const ucs4_t *data, Py_ssize_t *length)
static ucs4_t
jisx0201_r_decoder(const unsigned char *data)
static DBCHAR
jisx0201_r_encoder(const ucs4_t *data, Py_ssize_t *length)
static ucs4_t
jisx0201_k_decoder(const unsigned char *data)
static DBCHAR
jisx0201_k_encoder(const ucs4_t *data, Py_ssize_t *length)
static int
gb2312_init(void)
static ucs4_t
gb2312_decoder(const unsigned char *data)
static DBCHAR
gb2312_encoder(const ucs4_t *data, Py_ssize_t *length)
static ucs4_t
dummy_decoder(const unsigned char *data)
static DBCHAR
dummy_encoder(const ucs4_t *data, Py_ssize_t *length)
#define REGISTRY_KSX1001_G0
#define REGISTRY_KSX1001_G1
#define REGISTRY_JISX0201_R
#define REGISTRY_JISX0201_K
#define REGISTRY_JISX0208
#define REGISTRY_JISX0208_O
#define REGISTRY_JISX0212
#define REGISTRY_JISX0213_2000_1
#define REGISTRY_JISX0213_2000_1_PAIRONLY
#define REGISTRY_JISX0213_2000_2
#define REGISTRY_JISX0213_2004_1
#define REGISTRY_JISX0213_2004_1_PAIRONLY
#define REGISTRY_JISX0213_2004_2
#define REGISTRY_GB2312
#define REGISTRY_CNS11643_1
#define REGISTRY_CNS11643_2
#define REGISTRY_ISO8859_1
#define REGISTRY_ISO8859_7
#define REGISTRY_SENTINEL
#define CONFIGDEF(var, attrs)                                           \
static const struct iso2022_config iso2022_##var##_config = ;
static const struct iso2022_designation iso2022_kr_designations[] = ;
CONFIGDEF(kr, 0)
static const struct iso2022_designation iso2022_jp_designations[] = ;
CONFIGDEF(jp, NO_SHIFT | USE_JISX0208_EXT)
static const struct iso2022_designation iso2022_jp_1_designations[] = ;
CONFIGDEF(jp_1, NO_SHIFT | USE_JISX0208_EXT)
static const struct iso2022_designation iso2022_jp_2_designations[] = ;
CONFIGDEF(jp_2, NO_SHIFT | USE_G2 | USE_JISX0208_EXT)
static const struct iso2022_designation iso2022_jp_2004_designations[] = ;
CONFIGDEF(jp_2004, NO_SHIFT | USE_JISX0208_EXT)
static const struct iso2022_designation iso2022_jp_3_designations[] = ;
CONFIGDEF(jp_3, NO_SHIFT | USE_JISX0208_EXT)
static const struct iso2022_designation iso2022_jp_ext_designations[] = ;
CONFIGDEF(jp_ext, NO_SHIFT | USE_JISX0208_EXT)
BEGIN_MAPPINGS_LIST
END_MAPPINGS_LIST
#define ISO2022_CODEC(variation) ,
BEGIN_CODECS_LIST
ISO2022_CODEC(kr)
ISO2022_CODEC(jp)
ISO2022_CODEC(jp_1)
ISO2022_CODEC(jp_2)
ISO2022_CODEC(jp_2004)
ISO2022_CODEC(jp_3)
ISO2022_CODEC(jp_ext)
END_CODECS_LIST
I_AM_A_MODULE_FOR(iso2022)
