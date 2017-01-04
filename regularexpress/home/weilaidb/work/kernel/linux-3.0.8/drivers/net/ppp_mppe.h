#define MPPE_PAD                4
#define MPPE_MAX_KEY_LEN       16
#define MPPE_OPT_40            0x01
#define MPPE_OPT_128           0x02
#define MPPE_OPT_STATEFUL      0x04
#define MPPE_OPT_56            0x08
#define MPPE_OPT_MPPC          0x10
#define MPPE_OPT_D             0x20
#define MPPE_OPT_UNSUPPORTED (MPPE_OPT_56|MPPE_OPT_MPPC|MPPE_OPT_D)
#define MPPE_OPT_UNKNOWN       0x40
#define MPPE_C_BIT             0x01
#define MPPE_D_BIT             0x10
#define MPPE_L_BIT             0x20
#define MPPE_S_BIT             0x40
#define MPPE_M_BIT             0x80
#define MPPE_H_BIT             0x01
#define MPPE_ALL_BITS (MPPE_D_BIT|MPPE_L_BIT|MPPE_S_BIT|MPPE_M_BIT|MPPE_H_BIT)
#define MPPE_OPTS_TO_CI(opts, ci)              \
do  while ( 0)
#define MPPE_CI_TO_OPTS(ci, opts)              \
do  while ( 0)
