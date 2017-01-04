#define _IXP46X_TS_H_
#define DEFAULT_ADDEND 0xF0000029
#define TICKS_NS_SHIFT 4
struct ixp46x_channel_ctl ;
struct ixp46x_ts_regs ;
#define TSCR_AMM (1<<3)
#define TSCR_ASM (1<<2)
#define TSCR_TTM (1<<1)
#define TSCR_RST (1<<0)
#define TSER_SNM (1<<3)
#define TSER_SNS (1<<2)
#define TTIPEND  (1<<1)
#define MASTER_MODE   (1<<0)
#define TIMESTAMP_ALL (1<<1)
#define TX_SNAPSHOT_LOCKED (1<<0)
#define RX_SNAPSHOT_LOCKED (1<<1)
