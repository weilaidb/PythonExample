#define _SPARC_MXCC_H
#define MXCC_DATSTREAM       0x1C00000
#define MXCC_SRCSTREAM       0x1C00100
#define MXCC_DESSTREAM       0x1C00200
#define MXCC_RMCOUNT         0x1C00300
#define MXCC_STEST           0x1C00804
#define MXCC_CREG            0x1C00A04
#define MXCC_SREG            0x1C00B00
#define MXCC_RREG            0x1C00C04
#define MXCC_EREG            0x1C00E00
#define MXCC_PREG            0x1C00F04
#define MXCC_STREAM_SIZE     0x20
#define MXCC_CTL_RRC   0x00000200
#define MXCC_CTL_PRE   0x00000020
#define MXCC_CTL_MCE   0x00000010
#define MXCC_CTL_PARE  0x00000008
#define MXCC_CTL_ECE   0x00000004
#define MXCC_ERR_ME     0x80000000
#define MXCC_ERR_CE     0x20000000
#define MXCC_ERR_PEW    0x10000000
#define MXCC_ERR_PEE    0x08000000
#define MXCC_ERR_ASE    0x04000000
#define MXCC_ERR_EIV    0x02000000
#define MXCC_ERR_MOPC   0x01FF8000
#define MXCC_ERR_ECODE  0x00007F80
#define MXCC_ERR_PRIV   0x00000040
#define MXCC_ERR_HPADDR 0x0000000f
static inline void mxcc_set_stream_src(unsigned long *paddr)
static inline void mxcc_set_stream_dst(unsigned long *paddr)
static inline unsigned long mxcc_get_creg(void)
static inline void mxcc_set_creg(unsigned long mxcc_control)
