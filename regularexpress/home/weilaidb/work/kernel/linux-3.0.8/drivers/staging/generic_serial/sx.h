#define SX_NBOARDS        4
#define SX_PORTSPERBOARD 32
#define SX_NPORTS        (SX_NBOARDS * SX_PORTSPERBOARD)
#define SX_MAGIC 0x12345678
struct sx_port ;
struct sx_board ;
struct vpd_prom ;
#define MOD_RS232DB25MALE 0x0a
#define SI_ISA_BOARD         0x00000001
#define SX_ISA_BOARD         0x00000002
#define SX_PCI_BOARD         0x00000004
#define SX_CFPCI_BOARD       0x00000008
#define SX_CFISA_BOARD       0x00000010
#define SI_EISA_BOARD        0x00000020
#define SI1_ISA_BOARD        0x00000040
#define SX_BOARD_PRESENT     0x00001000
#define SX_BOARD_INITIALIZED 0x00002000
#define SX_IRQ_ALLOCATED     0x00004000
#define SX_BOARD_TYPE        0x000000ff
#define IS_SX_BOARD(board) (board->flags & (SX_PCI_BOARD | SX_CFPCI_BOARD | \
SX_ISA_BOARD | SX_CFISA_BOARD))
#define IS_SI_BOARD(board) (board->flags & SI_ISA_BOARD)
#define IS_SI1_BOARD(board) (board->flags & SI1_ISA_BOARD)
#define IS_EISA_BOARD(board) (board->flags & SI_EISA_BOARD)
#define IS_CF_BOARD(board) (board->flags & (SX_CFISA_BOARD | SX_CFPCI_BOARD))
#define SI_PROCESSOR_CLOCK 25000000
#define SX_RX_THROTTLE        0x0000001
#define SX_PORT_TRANSMIT_LOCK  0
#define SX_BOARD_INTR_LOCK     0
#define SX_DEBUG_OPEN          0x00000001
#define SX_DEBUG_SETTING       0x00000002
#define SX_DEBUG_FLOW          0x00000004
#define SX_DEBUG_MODEMSIGNALS  0x00000008
#define SX_DEBUG_TERMIOS       0x00000010
#define SX_DEBUG_TRANSMIT      0x00000020
#define SX_DEBUG_RECEIVE       0x00000040
#define SX_DEBUG_INTERRUPTS    0x00000080
#define SX_DEBUG_PROBE         0x00000100
#define SX_DEBUG_INIT          0x00000200
#define SX_DEBUG_CLEANUP       0x00000400
#define SX_DEBUG_CLOSE         0x00000800
#define SX_DEBUG_FIRMWARE      0x00001000
#define SX_DEBUG_MEMTEST       0x00002000
#define SX_DEBUG_ALL           0xffffffff
#define O_OTHER(tty)    \
((O_OLCUC(tty))  ||\
(O_ONLCR(tty))   ||\
(O_OCRNL(tty))   ||\
(O_ONOCR(tty))   ||\
(O_ONLRET(tty))  ||\
(O_OFILL(tty))   ||\
(O_OFDEL(tty))   ||\
(O_NLDLY(tty))   ||\
(O_CRDLY(tty))   ||\
(O_TABDLY(tty))  ||\
(O_BSDLY(tty))   ||\
(O_VTDLY(tty))   ||\
(O_FFDLY(tty)))
#define I_OTHER(tty)    \
((I_INLCR(tty))  ||\
(I_IGNCR(tty))   ||\
(I_ICRNL(tty))   ||\
(I_IUCLC(tty))   ||\
(L_ISIG(tty)))
#define MOD_TA   (        TA>>4)
#define MOD_MTA  (MTA_CD1400>>4)
#define MOD_SXDC (      SXDC>>4)
#define SX_CHUNK_SIZE 128
#define SPX(X) (('S'<<24) | ('P' << 16) | (X))
#define SPXL(X) (SPX(('L' << 8) | (X)))
#define SXIO_SET_BOARD      SPXL(0x01)
#define SXIO_GET_TYPE       SPXL(0x02)
#define SXIO_DOWNLOAD       SPXL(0x03)
#define SXIO_INIT           SPXL(0x04)
#define SXIO_SETDEBUG       SPXL(0x05)
#define SXIO_GETDEBUG       SPXL(0x06)
#define SXIO_DO_RAMTEST     SPXL(0x07)
#define SXIO_SETGSDEBUG     SPXL(0x08)
#define SXIO_GETGSDEBUG     SPXL(0x09)
#define SXIO_GETNPORTS      SPXL(0x0a)
#define SXCTL_MISC_MINOR    167
#define SX_NORMAL_MAJOR  32
#define SX_CALLOUT_MAJOR 33
#define SX_TYPE_SX          0x01
#define SX_TYPE_SI          0x02
#define SX_TYPE_CF          0x03
#define WINDOW_LEN(board) (IS_CF_BOARD(board)?0x20000:SX_WINDOW_LEN)
