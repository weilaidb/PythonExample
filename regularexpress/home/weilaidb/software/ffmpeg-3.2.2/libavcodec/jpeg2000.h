#define AVCODEC_JPEG2000_H
enum Jpeg2000Markers ;
#define JPEG2000_SOP_FIXED_BYTES 0xFF910004
#define JPEG2000_SOP_BYTE_LENGTH 6
enum Jpeg2000Quantsty ;
#define JPEG2000_MAX_DECLEVELS 33
#define JPEG2000_MAX_RESLEVELS (JPEG2000_MAX_DECLEVELS + 1)
#define JPEG2000_MAX_PASSES 100
#define JPEG2000_T1_SIG_N  0x0001
#define JPEG2000_T1_SIG_E  0x0002
#define JPEG2000_T1_SIG_W  0x0004
#define JPEG2000_T1_SIG_S  0x0008
#define JPEG2000_T1_SIG_NE 0x0010
#define JPEG2000_T1_SIG_NW 0x0020
#define JPEG2000_T1_SIG_SE 0x0040
#define JPEG2000_T1_SIG_SW 0x0080
#define JPEG2000_T1_SIG_NB (JPEG2000_T1_SIG_N  | JPEG2000_T1_SIG_E  |   \
JPEG2000_T1_SIG_S  | JPEG2000_T1_SIG_W  |   \
JPEG2000_T1_SIG_NE | JPEG2000_T1_SIG_NW |   \
JPEG2000_T1_SIG_SE | JPEG2000_T1_SIG_SW)
#define JPEG2000_T1_SGN_N  0x0100
#define JPEG2000_T1_SGN_S  0x0200
#define JPEG2000_T1_SGN_W  0x0400
#define JPEG2000_T1_SGN_E  0x0800
#define JPEG2000_T1_VIS    0x1000
#define JPEG2000_T1_SIG    0x2000
#define JPEG2000_T1_REF    0x4000
#define JPEG2000_T1_SGN    0x8000
#define JPEG2000_CBLK_BYPASS    0x01
#define JPEG2000_CBLK_RESET     0x02
#define JPEG2000_CBLK_TERMALL   0x04
#define JPEG2000_CBLK_VSC       0x08
#define JPEG2000_CBLK_PREDTERM  0x10
#define JPEG2000_CBLK_SEGSYM    0x20
#define JPEG2000_CSTY_PREC      0x01
#define JPEG2000_CSTY_SOP       0x02
#define JPEG2000_CSTY_EPH       0x04
#define JPEG2000_PGOD_LRCP      0x00
#define JPEG2000_PGOD_RLCP      0x01
#define JPEG2000_PGOD_RPCL      0x02
#define JPEG2000_PGOD_PCRL      0x03
#define JPEG2000_PGOD_CPRL      0x04
typedef struct Jpeg2000T1Context  Jpeg2000T1Context;
typedef struct Jpeg2000TgtNode  Jpeg2000TgtNode;
typedef struct Jpeg2000CodingStyle  Jpeg2000CodingStyle;
typedef struct Jpeg2000QuantStyle  Jpeg2000QuantStyle;
typedef struct Jpeg2000Pass  Jpeg2000Pass;
typedef struct Jpeg2000Cblk  Jpeg2000Cblk;
typedef struct Jpeg2000Prec  Jpeg2000Prec;
typedef struct Jpeg2000Band  Jpeg2000Band;
typedef struct Jpeg2000ResLevel  Jpeg2000ResLevel;
typedef struct Jpeg2000Component  Jpeg2000Component;
ff_jpeg2000_ceildivpow2
ff_jpeg2000_ceildiv
ff_jpeg2000_init_tier1_luts;
ff_jpeg2000_set_significance;
extern uint8_t ff_jpeg2000_sigctxno_lut[256][4];
ff_jpeg2000_getsigctxno
static const uint8_t refctxno_lut[2][2] = ;
ff_jpeg2000_getrefctxno
extern uint8_t ff_jpeg2000_sgnctxno_lut[16][16];
extern uint8_t ff_jpeg2000_xorbit_lut[16][16];
ff_jpeg2000_getsgnctxno
ff_jpeg2000_init_component;
ff_jpeg2000_reinit;
ff_jpeg2000_cleanup;
needs_termination
