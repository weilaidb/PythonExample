#define BAUD_TABLE_LIMIT	((sizeof(icom_acfg_baud)/sizeof(int)) - 1)
static int icom_acfg_baud[] = ;
struct icom_regs ;
struct func_dram ;
#define ICOM_CONTROL_START_A         0x00000008
#define ICOM_CONTROL_STOP_A          0x00000004
#define ICOM_CONTROL_START_B         0x00000002
#define ICOM_CONTROL_STOP_B          0x00000001
#define ICOM_CONTROL_START_C         0x00000008
#define ICOM_CONTROL_STOP_C          0x00000004
#define ICOM_CONTROL_START_D         0x00000002
#define ICOM_CONTROL_STOP_D          0x00000001
#define ICOM_IRAM_OFFSET             0x1000
#define ICOM_IRAM_SIZE               0x0C00
#define ICOM_DCE_IRAM_OFFSET         0x0A00
#define ICOM_CABLE_ID_VALID          0x01
#define ICOM_CABLE_ID_MASK           0xF0
#define ICOM_DISABLE                 0x80
#define CMD_XMIT_RCV_ENABLE          0xC0
#define CMD_XMIT_ENABLE              0x40
#define CMD_RCV_DISABLE              0x00
#define CMD_RCV_ENABLE               0x80
#define CMD_RESTART                  0x01
#define CMD_HOLD_XMIT                0x02
#define CMD_SND_BREAK                0x04
#define RS232_CABLE                  0x06
#define V24_CABLE                    0x0E
#define V35_CABLE                    0x0C
#define V36_CABLE                    0x02
#define NO_CABLE                     0x00
#define START_DOWNLOAD               0x80
#define ICOM_INT_MASK_PRC_A          0x00003FFF
#define ICOM_INT_MASK_PRC_B          0x3FFF0000
#define ICOM_INT_MASK_PRC_C          0x00003FFF
#define ICOM_INT_MASK_PRC_D          0x3FFF0000
#define INT_RCV_COMPLETED            0x1000
#define INT_XMIT_COMPLETED           0x2000
#define INT_IDLE_DETECT              0x0800
#define INT_RCV_DISABLED             0x0400
#define INT_XMIT_DISABLED            0x0200
#define INT_RCV_XMIT_SHUTDOWN        0x0100
#define INT_FATAL_ERROR              0x0080
#define INT_CABLE_PULL               0x0020
#define INT_SIGNAL_CHANGE            0x0010
#define HDLC_PPP_PURE_ASYNC          0x02
#define HDLC_FF_FILL                 0x00
#define HDLC_HDW_FLOW                0x01
#define START_XMIT                   0x80
#define ICOM_ACFG_DRIVE1             0x20
#define ICOM_ACFG_NO_PARITY          0x00
#define ICOM_ACFG_PARITY_ENAB        0x02
#define ICOM_ACFG_PARITY_ODD         0x01
#define ICOM_ACFG_8BPC               0x00
#define ICOM_ACFG_7BPC               0x04
#define ICOM_ACFG_6BPC               0x08
#define ICOM_ACFG_5BPC               0x0C
#define ICOM_ACFG_1STOP_BIT          0x00
#define ICOM_ACFG_2STOP_BIT          0x10
#define ICOM_DTR                     0x80
#define ICOM_RTS                     0x40
#define ICOM_RI                      0x08
#define ICOM_DSR                     0x80
#define ICOM_DCD                     0x20
#define ICOM_CTS                     0x40
#define NUM_XBUFFS 1
#define NUM_RBUFFS 2
#define RCV_BUFF_SZ 0x0200
#define XMIT_BUFF_SZ 0x1000
struct statusArea ;
struct icom_adapter;
#define ICOM_MAJOR       243
#define ICOM_MINOR_START 0
struct icom_port ;
struct icom_adapter ;
extern void iCom_sercons_init(void);
struct lookup_proc_table ;
struct lookup_int_table ;