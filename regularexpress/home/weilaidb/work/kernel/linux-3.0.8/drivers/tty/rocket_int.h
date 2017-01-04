#define ROCKET_TYPE_NORMAL	0
#define ROCKET_TYPE_MODEM	1
#define ROCKET_TYPE_MODEMII	2
#define ROCKET_TYPE_MODEMIII	3
#define ROCKET_TYPE_PC104       4
typedef unsigned char Byte_t;
typedef unsigned int ByteIO_t;
typedef unsigned int Word_t;
typedef unsigned int WordIO_t;
typedef unsigned int DWordIO_t;
static inline void sOutB(unsigned short port, unsigned char value)
static inline void sOutW(unsigned short port, unsigned short value)
static inline void out32(unsigned short port, Byte_t *p)
static inline unsigned char sInB(unsigned short port)
static inline unsigned short sInW(unsigned short port)
#define sOutStrW(port, addr, count) if (count) outsw(port, addr, count)
#define sInStrW(port, addr, count) if (count) insw(port, addr, count)
#define CTL_SIZE 8
#define AIOP_CTL_SIZE 4
#define CHAN_AIOP_SIZE 8
#define MAX_PORTS_PER_AIOP 8
#define MAX_AIOPS_PER_BOARD 4
#define MAX_PORTS_PER_BOARD 32
#define	isISA	0
#define	isPCI	1
#define	isMC	2
#define CTLID_NULL  -1
#define CTLID_0001  0x0001
#define AIOPID_NULL -1
#define AIOPID_0001 0x0001
#define _CMD_REG   0x38
#define _INT_CHAN  0x39
#define _INT_MASK  0x3A
#define _UNUSED    0x3B
#define _INDX_ADDR 0x3C
#define _INDX_DATA 0x3E
#define _TD0       0x00
#define _RD0       0x00
#define _CHN_STAT0 0x20
#define _FIFO_CNT0 0x10
#define _INT_ID0   0x30
#define _TX_ENBLS  0x980
#define _TXCMP1    0x988
#define _TXCMP2    0x989
#define _TXREP1B1  0x98A
#define _TXREP1B2  0x98B
#define _TXREP2    0x98C
#define _RX_FIFO    0x000
#define _TX_FIFO    0x800
#define _RXF_OUTP   0x990
#define _RXF_INP    0x992
#define _TXF_OUTP   0x994
#define _TXF_INP    0x995
#define _TXP_CNT    0x996
#define _TXP_PNTR   0x997
#define PRI_PEND    0x80
#define TXFIFO_SIZE 255
#define RXFIFO_SIZE 1023
#define _TXP_BUF    0x9C0
#define TXP_SIZE    0x20
#define _TX_CTRL    0xFF0
#define _RX_CTRL    0xFF2
#define _BAUD       0xFF4
#define _CLK_PRE    0xFF6
#define STMBREAK   0x08
#define STMFRAME   0x04
#define STMRCVROVR 0x02
#define STMPARITY  0x01
#define STMERROR   (STMBREAK | STMFRAME | STMPARITY)
#define STMBREAKH   0x800
#define STMFRAMEH   0x400
#define STMRCVROVRH 0x200
#define STMPARITYH  0x100
#define STMERRORH   (STMBREAKH | STMFRAMEH | STMPARITYH)
#define CTS_ACT   0x20
#define DSR_ACT   0x10
#define CD_ACT    0x08
#define TXFIFOMT  0x04
#define TXSHRMT   0x02
#define RDA       0x01
#define DRAINED (TXFIFOMT | TXSHRMT)
#define STATMODE  0x8000
#define RXFOVERFL 0x2000
#define RX2MATCH  0x1000
#define RX1MATCH  0x0800
#define RXBREAK   0x0400
#define RXFRAME   0x0200
#define RXPARITY  0x0100
#define STATERROR (RXBREAK | RXFRAME | RXPARITY)
#define CTSFC_EN  0x80
#define RTSTOG_EN 0x40
#define TXINT_EN  0x10
#define STOP2     0x08
#define PARITY_EN 0x04
#define EVEN_PAR  0x02
#define DATA8BIT  0x01
#define SETBREAK  0x10
#define LOCALLOOP 0x08
#define SET_DTR   0x04
#define SET_RTS   0x02
#define TX_ENABLE 0x01
#define RTSFC_EN  0x40
#define RXPROC_EN 0x20
#define TRIG_NO   0x00
#define TRIG_1    0x08
#define TRIG_1_2  0x10
#define TRIG_7_8  0x18
#define TRIG_MASK 0x18
#define SRCINT_EN 0x04
#define RXINT_EN  0x02
#define MCINT_EN  0x01
#define RXF_TRIG  0x20
#define TXFIFO_MT 0x10
#define SRC_INT   0x08
#define DELTA_CD  0x04
#define DELTA_CTS 0x02
#define DELTA_DSR 0x01
#define REP1W2_EN 0x10
#define IGN2_EN   0x08
#define IGN1_EN   0x04
#define COMP2_EN  0x02
#define COMP1_EN  0x01
#define RESET_ALL 0x80
#define TXOVERIDE 0x40
#define RESETUART 0x20
#define RESTXFCNT 0x10
#define RESRXFCNT 0x08
#define INTSTAT0  0x01
#define INTSTAT1  0x02
#define INTSTAT2  0x04
#define INTSTAT3  0x08
#define INTR_EN   0x08
#define INT_STROB 0x04
#define _CFG_INT_PCI  0x40
#define _PCI_INT_FUNC 0x3A
#define PCI_STROB 0x2000
#define INTR_EN_PCI   0x0010
#define _PCI_9030_INT_CTRL	0x4c
#define _PCI_9030_GPIO_CTRL	0x54
#define PCI_INT_CTRL_AIOP	0x0001
#define PCI_GPIO_CTRL_8PORT	0x4000
#define _PCI_9030_RING_IND	0xc0
#define CHAN3_EN  0x08
#define CHAN2_EN  0x04
#define CHAN1_EN  0x02
#define CHAN0_EN  0x01
#define FREQ_DIS  0x00
#define FREQ_274HZ 0x60
#define FREQ_137HZ 0x50
#define FREQ_69HZ  0x40
#define FREQ_34HZ  0x30
#define FREQ_17HZ  0x20
#define FREQ_9HZ   0x10
#define PERIODIC_ONLY 0x80
#define CHANINT_EN 0x0100
#define RDATASIZE 72
#define RREGDATASIZE 52
#define AIOP_INTR_BIT_0		0x0001
#define AIOP_INTR_BIT_1		0x0002
#define AIOP_INTR_BIT_2		0x0004
#define AIOP_INTR_BIT_3		0x0008
#define AIOP_INTR_BITS ( \
AIOP_INTR_BIT_0 \
| AIOP_INTR_BIT_1 \
| AIOP_INTR_BIT_2 \
| AIOP_INTR_BIT_3)
#define UPCI_AIOP_INTR_BIT_0	0x0004
#define UPCI_AIOP_INTR_BIT_1	0x0020
#define UPCI_AIOP_INTR_BIT_2	0x0100
#define UPCI_AIOP_INTR_BIT_3	0x0800
#define UPCI_AIOP_INTR_BITS ( \
UPCI_AIOP_INTR_BIT_0 \
| UPCI_AIOP_INTR_BIT_1 \
| UPCI_AIOP_INTR_BIT_2 \
| UPCI_AIOP_INTR_BIT_3)
typedef struct  CONTROLLER_T;
typedef CONTROLLER_T CONTROLLER_t;
typedef struct  CHANNEL_T;
typedef CHANNEL_T CHANNEL_t;
typedef CHANNEL_T *CHANPTR_T;
#define InterfaceModeRS232  0x00
#define InterfaceModeRS422  0x08
#define InterfaceModeRS485  0x10
#define InterfaceModeRS232T 0x18
#define sClrBreak(ChP) \
do  while (0)
#define sClrDTR(ChP) \
do  while (0)
#define sClrRTS(ChP) \
do  while (0)
#define sClrTxXOFF(ChP) \
do  while (0)
#define sCtlNumToCtlPtr(CTLNUM) &sController[CTLNUM]
#define sControllerEOI(CTLP) sOutB((CTLP)->MReg2IO,(CTLP)->MReg2 | INT_STROB)
#define sPCIControllerEOI(CTLP) \
do  while (0)
#define sDisAiop(CTLP,AIOPNUM) \
do  while (0)
#define sDisCTSFlowCtl(ChP) \
do  while (0)
#define sDisIXANY(ChP) \
do  while (0)
#define sDisParity(ChP) \
do  while (0)
#define sDisRTSToggle(ChP) \
do  while (0)
#define sDisRxFIFO(ChP) \
do  while (0)
#define sDisRxStatusMode(ChP) sOutW((ChP)->ChanStat,0)
#define sDisTransmit(ChP) \
do  while (0)
#define sDisTxSoftFlowCtl(ChP) \
do  while (0)
#define sEnAiop(CTLP,AIOPNUM) \
do  while (0)
#define sEnCTSFlowCtl(ChP) \
do  while (0)
#define sEnIXANY(ChP) \
do  while (0)
#define sEnParity(ChP) \
do  while (0)
#define sEnRTSToggle(ChP) \
do  while (0)
#define sEnRxFIFO(ChP) \
do  while (0)
#define sEnRxProcessor(ChP) \
do  while (0)
#define sEnRxStatusMode(ChP) sOutW((ChP)->ChanStat,STATMODE)
#define sEnTransmit(ChP) \
do  while (0)
#define sEnTxSoftFlowCtl(ChP) \
do  while (0)
#define sGetAiopIntStatus(CTLP,AIOPNUM) sInB((CTLP)->AiopIntChanIO[AIOPNUM])
#define sGetAiopNumChan(CTLP,AIOPNUM) (CTLP)->AiopNumChan[AIOPNUM]
#define sGetChanIntID(ChP) (sInB((ChP)->IntID) & (RXF_TRIG | TXFIFO_MT | SRC_INT | DELTA_CD | DELTA_CTS | DELTA_DSR))
#define sGetChanNum(ChP) (ChP)->ChanNum
#define sGetChanStatus(ChP) sInW((ChP)->ChanStat)
#define sGetChanStatusLo(ChP) sInB((ByteIO_t)(ChP)->ChanStat)
#define sGetControllerIntStatus(CTLP) (sInB((CTLP)->MReg1IO) & 0x0f)
#define sPCIGetControllerIntStatus(CTLP) \
((CTLP)->isUPCI ? \
(sInW((CTLP)->PCIIO2) & UPCI_AIOP_INTR_BITS) : \
((sInW((CTLP)->PCIIO) >> 8) & AIOP_INTR_BITS))
#define sGetRxCnt(ChP) sInW((ChP)->TxRxCount)
#define sGetTxCnt(ChP) sInB((ByteIO_t)(ChP)->TxRxCount)
#define sGetTxRxDataIO(ChP) (ChP)->TxRxData
#define sInitChanDefaults(ChP) \
do  while (0)
#define sResetAiopByNum(CTLP,AIOPNUM) \
do  while (0)
#define sSendBreak(ChP) \
do  while (0)
#define sSetBaud(ChP,DIVISOR) \
do  while (0)
#define sSetData7(ChP) \
do  while (0)
#define sSetData8(ChP) \
do  while (0)
#define sSetDTR(ChP) \
do  while (0)
#define sSetEvenParity(ChP) \
do  while (0)
#define sSetOddParity(ChP) \
do  while (0)
#define sSetRTS(ChP) \
do  while (0)
#define sSetRxTrigger(ChP,LEVEL) \
do  while (0)
#define sSetStop1(ChP) \
do  while (0)
#define sSetStop2(ChP) \
do  while (0)
#define sSetTxXOFFChar(ChP,CH) \
do  while (0)
#define sSetTxXONChar(ChP,CH) \
do  while (0)
#define sStartRxProcessor(ChP) out32((ChP)->IndexAddr,&(ChP)->R[0])
#define sWriteTxByte(IO,DATA) sOutB(IO,DATA)
struct r_port ;
#define RPORT_MAGIC 0x525001
#define NUM_BOARDS 8
#define MAX_RP_PORTS (32*NUM_BOARDS)
#define XMIT_BUF_SIZE 4096
#define WAKEUP_CHARS 256
#define TTY_ROCKET_MAJOR	46
#define CUA_ROCKET_MAJOR	47
#undef PCI_VENDOR_ID_RP
#undef PCI_DEVICE_ID_RP8OCTA
#undef PCI_DEVICE_ID_RP8INTF
#undef PCI_DEVICE_ID_RP16INTF
#undef PCI_DEVICE_ID_RP32INTF
#undef PCI_DEVICE_ID_URP8OCTA
#undef PCI_DEVICE_ID_URP8INTF
#undef PCI_DEVICE_ID_URP16INTF
#undef PCI_DEVICE_ID_CRP16INTF
#undef PCI_DEVICE_ID_URP32INTF
#define PCI_VENDOR_ID_RP		0x11fe
#define PCI_DEVICE_ID_RP32INTF		0x0001
#define PCI_DEVICE_ID_RP8INTF		0x0002
#define PCI_DEVICE_ID_RP16INTF		0x0003
#define PCI_DEVICE_ID_RP4QUAD		0x0004
#define PCI_DEVICE_ID_RP8OCTA		0x0005
#define PCI_DEVICE_ID_RP8J		0x0006
#define PCI_DEVICE_ID_RP4J		0x0007
#define PCI_DEVICE_ID_RP8SNI		0x0008
#define PCI_DEVICE_ID_RP16SNI		0x0009
#define PCI_DEVICE_ID_RPP4		0x000A
#define PCI_DEVICE_ID_RPP8		0x000B
#define PCI_DEVICE_ID_RP6M		0x000C
#define PCI_DEVICE_ID_RP4M		0x000D
#define PCI_DEVICE_ID_RP2_232           0x000E
#define PCI_DEVICE_ID_RP2_422           0x000F
#define PCI_DEVICE_ID_URP32INTF		0x0801
#define PCI_DEVICE_ID_URP8INTF		0x0802
#define PCI_DEVICE_ID_URP16INTF		0x0803
#define PCI_DEVICE_ID_URP8OCTA		0x0805
#define PCI_DEVICE_ID_UPCI_RM3_8PORT    0x080C
#define PCI_DEVICE_ID_UPCI_RM3_4PORT    0x080D
#define PCI_DEVICE_ID_CRP16INTF		0x0903
