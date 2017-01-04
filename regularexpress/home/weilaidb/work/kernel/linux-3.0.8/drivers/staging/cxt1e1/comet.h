#define _INC_COMET_H_
#if defined(__FreeBSD__) || defined (__NetBSD__)
#define VINT32  volatile u_int32_t
struct s_comet_reg
;
typedef struct s_comet_reg comet_t;
#define COMET_MDIAG_ID5        0x40
#define COMET_MDIAG_LBMASK     0x3F
#define COMET_MDIAG_PAYLB      0x20
#define COMET_MDIAG_LINELB     0x10
#define COMET_MDIAG_RAIS       0x08
#define COMET_MDIAG_DDLB       0x04
#define COMET_MDIAG_TXMFP      0x02
#define COMET_MDIAG_TXLOS      0x01
#define COMET_MDIAG_LBOFF      0x00
#undef VINT32
extern void
init_comet (void *, comet_t *, u_int32_t, int, u_int8_t);
