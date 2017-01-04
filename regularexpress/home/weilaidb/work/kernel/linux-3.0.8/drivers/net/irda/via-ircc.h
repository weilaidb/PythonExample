#define via_IRCC_H
#define MAX_TX_WINDOW 7
#define MAX_RX_WINDOW 7
struct st_fifo_entry ;
struct st_fifo ;
struct frame_cb ;
struct tx_fifo ;
struct eventflag
;
struct via_ircc_cb ;
#define  I_CF_L_0  		0x10
#define  I_CF_H_0		0x11
#define  I_SIR_BOF		0x12
#define  I_SIR_EOF		0x13
#define  I_ST_CT_0		0x15
#define  I_ST_L_1		0x16
#define  I_ST_H_1		0x17
#define  I_CF_L_1		0x18
#define  I_CF_H_1		0x19
#define  I_CF_L_2		0x1a
#define  I_CF_H_2		0x1b
#define  I_CF_3		0x1e
#define  H_CT			0x20
#define  H_ST			0x21
#define  M_CT			0x22
#define  TX_CT_1		0x23
#define  TX_CT_2		0x24
#define  TX_ST			0x25
#define  RX_CT			0x26
#define  RX_ST			0x27
#define  RESET			0x28
#define  P_ADDR		0x29
#define  RX_C_L		0x2a
#define  RX_C_H		0x2b
#define  RX_P_L		0x2c
#define  RX_P_H		0x2d
#define  TX_C_L		0x2e
#define  TX_C_H		0x2f
#define  TIMER         	0x32
#define  I_CF_4         	0x33
#define  I_T_C_L		0x34
#define  I_T_C_H		0x35
#define  VERSION		0x3f
#define StartAddr 	0x10
#define EndAddr 	0x3f
#define GetBit(val,bit)  val = (unsigned char) ((val>>bit) & 0x1)
#define SetBit(val,bit)  val= (unsigned char ) (val | (0x1 << bit))
#define ResetBit(val,bit) val= (unsigned char ) (val & ~(0x1 << bit))
#define OFF   0
#define ON   1
#define DMA_TX_MODE   0x08
#define DMA_RX_MODE   0x04
#define DMA1   0
#define DMA2   0xc0
#define MASK1   DMA1+0x0a
#define MASK2   DMA2+0x14
#define Clk_bit 0x40
#define Tx_bit 0x01
#define Rd_Valid 0x08
#define RxBit 0x08
static void DisableDmaChannel(unsigned int channel)
static unsigned char ReadLPCReg(int iRegNum)
static void WriteLPCReg(int iRegNum, unsigned char iVal)
static __u8 ReadReg(unsigned int BaseAddr, int iRegNum)
static void WriteReg(unsigned int BaseAddr, int iRegNum, unsigned char iVal)
static int WriteRegBit(unsigned int BaseAddr, unsigned char RegNum,
unsigned char BitPos, unsigned char value)
static __u8 CheckRegBit(unsigned int BaseAddr, unsigned char RegNum,
unsigned char BitPos)
static void SetMaxRxPacketSize(__u16 iobase, __u16 size)
static void SetFIFO(__u16 iobase, __u16 value)
#define CRC16(BaseAddr,val)         WriteRegBit(BaseAddr,I_CF_L_0,7,val)
#define SIRFilter(BaseAddr,val)     WriteRegBit(BaseAddr,I_CF_L_0,3,val)
#define Filter(BaseAddr,val)        WriteRegBit(BaseAddr,I_CF_L_0,2,val)
#define InvertTX(BaseAddr,val)      WriteRegBit(BaseAddr,I_CF_L_0,1,val)
#define InvertRX(BaseAddr,val)      WriteRegBit(BaseAddr,I_CF_L_0,0,val)
#define EnableTX(BaseAddr,val)      WriteRegBit(BaseAddr,I_CF_H_0,4,val)
#define EnableRX(BaseAddr,val)      WriteRegBit(BaseAddr,I_CF_H_0,3,val)
#define EnableDMA(BaseAddr,val)     WriteRegBit(BaseAddr,I_CF_H_0,2,val)
#define SIRRecvAny(BaseAddr,val)    WriteRegBit(BaseAddr,I_CF_H_0,1,val)
#define DiableTrans(BaseAddr,val)   WriteRegBit(BaseAddr,I_CF_H_0,0,val)
#define SetSIRBOF(BaseAddr,val)     WriteReg(BaseAddr,I_SIR_BOF,val)
#define SetSIREOF(BaseAddr,val)     WriteReg(BaseAddr,I_SIR_EOF,val)
#define GetSIRBOF(BaseAddr)        ReadReg(BaseAddr,I_SIR_BOF)
#define GetSIREOF(BaseAddr)        ReadReg(BaseAddr,I_SIR_EOF)
#define EnPhys(BaseAddr,val)   WriteRegBit(BaseAddr,I_ST_CT_0,7,val)
#define IsModeError(BaseAddr) CheckRegBit(BaseAddr,I_ST_CT_0,6)
#define IsVFIROn(BaseAddr)     CheckRegBit(BaseAddr,0x14,0)
#define IsFIROn(BaseAddr)     CheckRegBit(BaseAddr,I_ST_CT_0,5)
#define IsMIROn(BaseAddr)     CheckRegBit(BaseAddr,I_ST_CT_0,4)
#define IsSIROn(BaseAddr)     CheckRegBit(BaseAddr,I_ST_CT_0,3)
#define IsEnableTX(BaseAddr)  CheckRegBit(BaseAddr,I_ST_CT_0,2)
#define IsEnableRX(BaseAddr)  CheckRegBit(BaseAddr,I_ST_CT_0,1)
#define Is16CRC(BaseAddr)     CheckRegBit(BaseAddr,I_ST_CT_0,0)
#define DisableAdjacentPulseWidth(BaseAddr,val) WriteRegBit(BaseAddr,I_CF_3,5,val)
#define DisablePulseWidthAdjust(BaseAddr,val)   WriteRegBit(BaseAddr,I_CF_3,4,val)
#define UseOneRX(BaseAddr,val)                  WriteRegBit(BaseAddr,I_CF_3,1,val)
#define SlowIRRXLowActive(BaseAddr,val)         WriteRegBit(BaseAddr,I_CF_3,0,val)
#define EnAllInt(BaseAddr,val)   WriteRegBit(BaseAddr,H_CT,7,val)
#define TXStart(BaseAddr,val)    WriteRegBit(BaseAddr,H_CT,6,val)
#define RXStart(BaseAddr,val)    WriteRegBit(BaseAddr,H_CT,5,val)
#define ClearRXInt(BaseAddr,val)   WriteRegBit(BaseAddr,H_CT,4,val)
#define IsRXInt(BaseAddr)           CheckRegBit(BaseAddr,H_ST,4)
#define GetIntIndentify(BaseAddr)   ((ReadReg(BaseAddr,H_ST)&0xf1) >>1)
#define IsHostBusy(BaseAddr)        CheckRegBit(BaseAddr,H_ST,0)
#define GetHostStatus(BaseAddr)     ReadReg(BaseAddr,H_ST)
#define EnTXDMA(BaseAddr,val)         WriteRegBit(BaseAddr,M_CT,7,val)
#define EnRXDMA(BaseAddr,val)         WriteRegBit(BaseAddr,M_CT,6,val)
#define SwapDMA(BaseAddr,val)         WriteRegBit(BaseAddr,M_CT,5,val)
#define EnInternalLoop(BaseAddr,val)  WriteRegBit(BaseAddr,M_CT,4,val)
#define EnExternalLoop(BaseAddr,val)  WriteRegBit(BaseAddr,M_CT,3,val)
#define EnTXFIFOHalfLevelInt(BaseAddr,val)   WriteRegBit(BaseAddr,TX_CT_1,4,val)
#define EnTXFIFOUnderrunEOMInt(BaseAddr,val) WriteRegBit(BaseAddr,TX_CT_1,5,val)
#define EnTXFIFOReadyInt(BaseAddr,val)       WriteRegBit(BaseAddr,TX_CT_1,6,val)
#define ForceUnderrun(BaseAddr,val)   WriteRegBit(BaseAddr,TX_CT_2,7,val)
#define EnTXCRC(BaseAddr,val)         WriteRegBit(BaseAddr,TX_CT_2,6,val)
#define ForceBADCRC(BaseAddr,val)     WriteRegBit(BaseAddr,TX_CT_2,5,val)
#define SendSIP(BaseAddr,val)         WriteRegBit(BaseAddr,TX_CT_2,4,val)
#define ClearEnTX(BaseAddr,val)       WriteRegBit(BaseAddr,TX_CT_2,3,val)
#define GetTXStatus(BaseAddr) 	ReadReg(BaseAddr,TX_ST)
#define EnRXSpecInt(BaseAddr,val)           WriteRegBit(BaseAddr,RX_CT,0,val)
#define EnRXFIFOReadyInt(BaseAddr,val)      WriteRegBit(BaseAddr,RX_CT,1,val)
#define EnRXFIFOHalfLevelInt(BaseAddr,val)  WriteRegBit(BaseAddr,RX_CT,7,val)
#define GetRXStatus(BaseAddr) 	ReadReg(BaseAddr,RX_ST)
#define SetPacketAddr(BaseAddr,addr)        WriteReg(BaseAddr,P_ADDR,addr)
#define EnGPIOtoRX2(BaseAddr,val)	WriteRegBit(BaseAddr,I_CF_4,7,val)
#define EnTimerInt(BaseAddr,val)		WriteRegBit(BaseAddr,I_CF_4,1,val)
#define ClearTimerInt(BaseAddr,val)	WriteRegBit(BaseAddr,I_CF_4,0,val)
#define WriteGIO(BaseAddr,val)	    WriteRegBit(BaseAddr,I_T_C_L,7,val)
#define ReadGIO(BaseAddr)		    CheckRegBit(BaseAddr,I_T_C_L,7)
#define ReadRX(BaseAddr)		    CheckRegBit(BaseAddr,I_T_C_L,3)
#define WriteTX(BaseAddr,val)		WriteRegBit(BaseAddr,I_T_C_L,0,val)
#define EnRX2(BaseAddr,val)		    WriteRegBit(BaseAddr,I_T_C_H,7,val)
#define ReadRX2(BaseAddr)           CheckRegBit(BaseAddr,I_T_C_H,7)
#define GetFIRVersion(BaseAddr)		ReadReg(BaseAddr,VERSION)
static void SetTimer(__u16 iobase, __u8 count)
static void SetSendByte(__u16 iobase, __u32 count)
static void ResetChip(__u16 iobase, __u8 type)
static int CkRxRecv(__u16 iobase, struct via_ircc_cb *self)
static __u16 RxCurCount(__u16 iobase, struct via_ircc_cb * self)
static __u16 GetRecvByte(__u16 iobase, struct via_ircc_cb * self)
static void Sdelay(__u16 scale)
static void Tdelay(__u16 scale)
static void ActClk(__u16 iobase, __u8 value)
static void ClkTx(__u16 iobase, __u8 Clk, __u8 Tx)
static void Wr_Byte(__u16 iobase, __u8 data)
static __u8 Rd_Indx(__u16 iobase, __u8 addr, __u8 index)
static void Wr_Indx(__u16 iobase, __u8 addr, __u8 index, __u8 data)
static void ResetDongle(__u16 iobase)
static void SetSITmode(__u16 iobase)
static void SI_SetMode(__u16 iobase, int mode)
static void InitCard(__u16 iobase)
static void CommonInit(__u16 iobase)
static void SetBaudRate(__u16 iobase, __u32 rate)
static void SetPulseWidth(__u16 iobase, __u8 width)
static void SetSendPreambleCount(__u16 iobase, __u8 count)
static void SetVFIR(__u16 BaseAddr, __u8 val)
static void SetFIR(__u16 BaseAddr, __u8 val)
static void SetMIR(__u16 BaseAddr, __u8 val)
static void SetSIR(__u16 BaseAddr, __u8 val)
