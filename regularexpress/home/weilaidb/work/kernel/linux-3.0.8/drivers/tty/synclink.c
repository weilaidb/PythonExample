#if defined(__i386__)
#  define BREAKPOINT() asm("   int $3");
#  define BREAKPOINT()
#define MAX_ISA_DEVICES 10
#define MAX_PCI_DEVICES 10
#define MAX_TOTAL_DEVICES 20
#if defined(CONFIG_HDLC) || (defined(CONFIG_HDLC_MODULE) && defined(CONFIG_SYNCLINK_MODULE))
#define SYNCLINK_GENERIC_HDLC 1
#define SYNCLINK_GENERIC_HDLC 0
#define GET_USER(error,value,addr) error = get_user(value,addr)
#define COPY_FROM_USER(error,dest,src,size) error = copy_from_user(dest,src,size) ? -EFAULT : 0
#define PUT_USER(error,value,addr) error = put_user(value,addr)
#define COPY_TO_USER(error,dest,src,size) error = copy_to_user(dest,src,size) ? -EFAULT : 0
#define RCLRVALUE 0xffff
static MGSL_PARAMS default_params = ;
#define SHARED_MEM_ADDRESS_SIZE 0x40000
#define BUFFERLISTSIZE 4096
#define DMABUFFERSIZE 4096
#define MAXRXFRAMES 7
typedef struct _DMABUFFERENTRY
DMABUFFERENTRY, *DMAPBUFFERENTRY;
#define BH_RECEIVE  1
#define BH_TRANSMIT 2
#define BH_STATUS   4
#define IO_PIN_SHUTDOWN_LIMIT 100
struct	_input_signal_events ;
#define MAX_TX_HOLDING_BUFFERS 5
struct tx_holding_buffer ;
struct mgsl_struct ;
#define MGSL_MAGIC 0x5401
#define SERIAL_XMIT_SIZE 4096
#define DCPIN 2
#define SDPIN 4
#define DCAR 0
#define CCAR SDPIN
#define DATAREG DCPIN + SDPIN
#define MSBONLY 0x41
#define LSBONLY 0x40
#define CMR	0x02
#define CCSR	0x04
#define CCR	0x06
#define PSR	0x08
#define PCR	0x0a
#define TMDR	0x0c
#define TMCR	0x0e
#define CMCR	0x10
#define HCR	0x12
#define IVR	0x14
#define IOCR	0x16
#define ICR	0x18
#define DCCR	0x1a
#define MISR	0x1c
#define SICR	0x1e
#define RDR	0x20
#define RMR	0x22
#define RCSR	0x24
#define RICR	0x26
#define RSR	0x28
#define RCLR	0x2a
#define RCCR	0x2c
#define TC0R	0x2e
#define TDR	0x30
#define TMR	0x32
#define TCSR	0x34
#define TICR	0x36
#define TSR	0x38
#define TCLR	0x3a
#define TCCR	0x3c
#define TC1R	0x3e
#define DCR	0x06
#define DACR	0x08
#define BDCR	0x12
#define DIVR	0x14
#define DICR	0x18
#define CDIR	0x1a
#define SDIR	0x1c
#define TDMR	0x02
#define TDIAR	0x1e
#define TBCR	0x2a
#define TARL	0x2c
#define TARU	0x2e
#define NTBCR	0x3a
#define NTARL	0x3c
#define NTARU	0x3e
#define RDMR	0x82
#define RDIAR	0x9e
#define RBCR	0xaa
#define RARL	0xac
#define RARU	0xae
#define NRBCR	0xba
#define NRARL	0xbc
#define NRARU	0xbe
#define MODEMSTATUS_DTR 0x80
#define MODEMSTATUS_DSR 0x40
#define MODEMSTATUS_RTS 0x20
#define MODEMSTATUS_CTS 0x10
#define MODEMSTATUS_RI  0x04
#define MODEMSTATUS_DCD 0x01
#define RTCmd_Null			0x0000
#define RTCmd_ResetHighestIus		0x1000
#define RTCmd_TriggerChannelLoadDma	0x2000
#define RTCmd_TriggerRxDma		0x2800
#define RTCmd_TriggerTxDma		0x3000
#define RTCmd_TriggerRxAndTxDma		0x3800
#define RTCmd_PurgeRxFifo		0x4800
#define RTCmd_PurgeTxFifo		0x5000
#define RTCmd_PurgeRxAndTxFifo		0x5800
#define RTCmd_LoadRcc			0x6800
#define RTCmd_LoadTcc			0x7000
#define RTCmd_LoadRccAndTcc		0x7800
#define RTCmd_LoadTC0			0x8800
#define RTCmd_LoadTC1			0x9000
#define RTCmd_LoadTC0AndTC1		0x9800
#define RTCmd_SerialDataLSBFirst	0xa000
#define RTCmd_SerialDataMSBFirst	0xa800
#define RTCmd_SelectBigEndian		0xb000
#define RTCmd_SelectLittleEndian	0xb800
#define DmaCmd_Null			0x0000
#define DmaCmd_ResetTxChannel		0x1000
#define DmaCmd_ResetRxChannel		0x1200
#define DmaCmd_StartTxChannel		0x2000
#define DmaCmd_StartRxChannel		0x2200
#define DmaCmd_ContinueTxChannel	0x3000
#define DmaCmd_ContinueRxChannel	0x3200
#define DmaCmd_PauseTxChannel		0x4000
#define DmaCmd_PauseRxChannel		0x4200
#define DmaCmd_AbortTxChannel		0x5000
#define DmaCmd_AbortRxChannel		0x5200
#define DmaCmd_InitTxChannel		0x7000
#define DmaCmd_InitRxChannel		0x7200
#define DmaCmd_ResetHighestDmaIus	0x8000
#define DmaCmd_ResetAllChannels		0x9000
#define DmaCmd_StartAllChannels		0xa000
#define DmaCmd_ContinueAllChannels	0xb000
#define DmaCmd_PauseAllChannels		0xc000
#define DmaCmd_AbortAllChannels		0xd000
#define DmaCmd_InitAllChannels		0xf000
#define TCmd_Null			0x0000
#define TCmd_ClearTxCRC			0x2000
#define TCmd_SelectTicrTtsaData		0x4000
#define TCmd_SelectTicrTxFifostatus	0x5000
#define TCmd_SelectTicrIntLevel		0x6000
#define TCmd_SelectTicrdma_level		0x7000
#define TCmd_SendFrame			0x8000
#define TCmd_SendAbort			0x9000
#define TCmd_EnableDleInsertion		0xc000
#define TCmd_DisableDleInsertion	0xd000
#define TCmd_ClearEofEom		0xe000
#define TCmd_SetEofEom			0xf000
#define RCmd_Null			0x0000
#define RCmd_ClearRxCRC			0x2000
#define RCmd_EnterHuntmode		0x3000
#define RCmd_SelectRicrRtsaData		0x4000
#define RCmd_SelectRicrRxFifostatus	0x5000
#define RCmd_SelectRicrIntLevel		0x6000
#define RCmd_SelectRicrdma_level		0x7000
#define RECEIVE_STATUS		BIT5
#define RECEIVE_DATA		BIT4
#define TRANSMIT_STATUS		BIT3
#define TRANSMIT_DATA		BIT2
#define IO_PIN			BIT1
#define MISC			BIT0
#define RXSTATUS_SHORT_FRAME		BIT8
#define RXSTATUS_CODE_VIOLATION		BIT8
#define RXSTATUS_EXITED_HUNT		BIT7
#define RXSTATUS_IDLE_RECEIVED		BIT6
#define RXSTATUS_BREAK_RECEIVED		BIT5
#define RXSTATUS_ABORT_RECEIVED		BIT5
#define RXSTATUS_RXBOUND		BIT4
#define RXSTATUS_CRC_ERROR		BIT3
#define RXSTATUS_FRAMING_ERROR		BIT3
#define RXSTATUS_ABORT			BIT2
#define RXSTATUS_PARITY_ERROR		BIT2
#define RXSTATUS_OVERRUN		BIT1
#define RXSTATUS_DATA_AVAILABLE		BIT0
#define RXSTATUS_ALL			0x01f6
#define usc_UnlatchRxstatusBits(a,b) usc_OutReg( (a), RCSR, (u16)((b) & RXSTATUS_ALL) )
#define IDLEMODE_FLAGS			0x0000
#define IDLEMODE_ALT_ONE_ZERO		0x0100
#define IDLEMODE_ZERO			0x0200
#define IDLEMODE_ONE			0x0300
#define IDLEMODE_ALT_MARK_SPACE		0x0500
#define IDLEMODE_SPACE			0x0600
#define IDLEMODE_MARK			0x0700
#define IDLEMODE_MASK			0x0700
#define	IUSC_SL1660			0x4d44
#define IUSC_PRE_SL1660			0x4553
#define TCSR_PRESERVE			0x0F00
#define TCSR_UNDERWAIT			BIT11
#define TXSTATUS_PREAMBLE_SENT		BIT7
#define TXSTATUS_IDLE_SENT		BIT6
#define TXSTATUS_ABORT_SENT		BIT5
#define TXSTATUS_EOF_SENT		BIT4
#define TXSTATUS_EOM_SENT		BIT4
#define TXSTATUS_CRC_SENT		BIT3
#define TXSTATUS_ALL_SENT		BIT2
#define TXSTATUS_UNDERRUN		BIT1
#define TXSTATUS_FIFO_EMPTY		BIT0
#define TXSTATUS_ALL			0x00fa
#define usc_UnlatchTxstatusBits(a,b) usc_OutReg( (a), TCSR, (u16)((a)->tcsr_value + ((b) & 0x00FF)) )
#define MISCSTATUS_RXC_LATCHED		BIT15
#define MISCSTATUS_RXC			BIT14
#define MISCSTATUS_TXC_LATCHED		BIT13
#define MISCSTATUS_TXC			BIT12
#define MISCSTATUS_RI_LATCHED		BIT11
#define MISCSTATUS_RI			BIT10
#define MISCSTATUS_DSR_LATCHED		BIT9
#define MISCSTATUS_DSR			BIT8
#define MISCSTATUS_DCD_LATCHED		BIT7
#define MISCSTATUS_DCD			BIT6
#define MISCSTATUS_CTS_LATCHED		BIT5
#define MISCSTATUS_CTS			BIT4
#define MISCSTATUS_RCC_UNDERRUN		BIT3
#define MISCSTATUS_DPLL_NO_SYNC		BIT2
#define MISCSTATUS_BRG1_ZERO		BIT1
#define MISCSTATUS_BRG0_ZERO		BIT0
#define usc_UnlatchIostatusBits(a,b) usc_OutReg((a),MISR,(u16)((b) & 0xaaa0))
#define usc_UnlatchMiscstatusBits(a,b) usc_OutReg((a),MISR,(u16)((b) & 0x000f))
#define SICR_RXC_ACTIVE			BIT15
#define SICR_RXC_INACTIVE		BIT14
#define SICR_RXC			(BIT15+BIT14)
#define SICR_TXC_ACTIVE			BIT13
#define SICR_TXC_INACTIVE		BIT12
#define SICR_TXC			(BIT13+BIT12)
#define SICR_RI_ACTIVE			BIT11
#define SICR_RI_INACTIVE		BIT10
#define SICR_RI				(BIT11+BIT10)
#define SICR_DSR_ACTIVE			BIT9
#define SICR_DSR_INACTIVE		BIT8
#define SICR_DSR			(BIT9+BIT8)
#define SICR_DCD_ACTIVE			BIT7
#define SICR_DCD_INACTIVE		BIT6
#define SICR_DCD			(BIT7+BIT6)
#define SICR_CTS_ACTIVE			BIT5
#define SICR_CTS_INACTIVE		BIT4
#define SICR_CTS			(BIT5+BIT4)
#define SICR_RCC_UNDERFLOW		BIT3
#define SICR_DPLL_NO_SYNC		BIT2
#define SICR_BRG1_ZERO			BIT1
#define SICR_BRG0_ZERO			BIT0
void usc_DisableMasterIrqBit( struct mgsl_struct *info );
void usc_EnableMasterIrqBit( struct mgsl_struct *info );
void usc_EnableInterrupts( struct mgsl_struct *info, u16 IrqMask );
void usc_DisableInterrupts( struct mgsl_struct *info, u16 IrqMask );
void usc_ClearIrqPendingBits( struct mgsl_struct *info, u16 IrqMask );
#define usc_EnableInterrupts( a, b ) \
usc_OutReg( (a), ICR, (u16)((usc_InReg((a),ICR) & 0xff00) + 0xc0 + (b)) )
#define usc_DisableInterrupts( a, b ) \
usc_OutReg( (a), ICR, (u16)((usc_InReg((a),ICR) & 0xff00) + 0x80 + (b)) )
#define usc_EnableMasterIrqBit(a) \
usc_OutReg( (a), ICR, (u16)((usc_InReg((a),ICR) & 0x0f00) + 0xb000) )
#define usc_DisableMasterIrqBit(a) \
usc_OutReg( (a), ICR, (u16)(usc_InReg((a),ICR) & 0x7f00) )
#define usc_ClearIrqPendingBits( a, b ) usc_OutReg( (a), DCCR, 0x40 + (b) )
#define TXSTATUS_PREAMBLE_SENT	BIT7
#define TXSTATUS_IDLE_SENT	BIT6
#define TXSTATUS_ABORT_SENT	BIT5
#define TXSTATUS_EOF		BIT4
#define TXSTATUS_CRC_SENT	BIT3
#define TXSTATUS_ALL_SENT	BIT2
#define TXSTATUS_UNDERRUN	BIT1
#define TXSTATUS_FIFO_EMPTY	BIT0
#define DICR_MASTER		BIT15
#define DICR_TRANSMIT		BIT0
#define DICR_RECEIVE		BIT1
#define usc_EnableDmaInterrupts(a,b) \
usc_OutDmaReg( (a), DICR, (u16)(usc_InDmaReg((a),DICR) | (b)) )
#define usc_DisableDmaInterrupts(a,b) \
usc_OutDmaReg( (a), DICR, (u16)(usc_InDmaReg((a),DICR) & ~(b)) )
#define usc_EnableStatusIrqs(a,b) \
usc_OutReg( (a), SICR, (u16)(usc_InReg((a),SICR) | (b)) )
#define usc_DisablestatusIrqs(a,b) \
usc_OutReg( (a), SICR, (u16)(usc_InReg((a),SICR) & ~(b)) )
#define DISABLE_UNCONDITIONAL    0
#define DISABLE_END_OF_FRAME     1
#define ENABLE_UNCONDITIONAL     2
#define ENABLE_AUTO_CTS          3
#define ENABLE_AUTO_DCD          3
#define usc_EnableTransmitter(a,b) \
usc_OutReg( (a), TMR, (u16)((usc_InReg((a),TMR) & 0xfffc) | (b)) )
#define usc_EnableReceiver(a,b) \
usc_OutReg( (a), RMR, (u16)((usc_InReg((a),RMR) & 0xfffc) | (b)) )
static u16  usc_InDmaReg( struct mgsl_struct *info, u16 Port );
static void usc_OutDmaReg( struct mgsl_struct *info, u16 Port, u16 Value );
static void usc_DmaCmd( struct mgsl_struct *info, u16 Cmd );
static u16  usc_InReg( struct mgsl_struct *info, u16 Port );
static void usc_OutReg( struct mgsl_struct *info, u16 Port, u16 Value );
static void usc_RTCmd( struct mgsl_struct *info, u16 Cmd );
void usc_RCmd( struct mgsl_struct *info, u16 Cmd );
void usc_TCmd( struct mgsl_struct *info, u16 Cmd );
#define usc_TCmd(a,b) usc_OutReg((a), TCSR, (u16)((a)->tcsr_value + (b)))
#define usc_RCmd(a,b) usc_OutReg((a), RCSR, (b))
#define usc_SetTransmitSyncChars(a,s0,s1) usc_OutReg((a), TSR, (u16)(((u16)s0<<8)|(u16)s1))
static void usc_process_rxoverrun_sync( struct mgsl_struct *info );
static void usc_start_receiver( struct mgsl_struct *info );
static void usc_stop_receiver( struct mgsl_struct *info );
static void usc_start_transmitter( struct mgsl_struct *info );
static void usc_stop_transmitter( struct mgsl_struct *info );
static void usc_set_txidle( struct mgsl_struct *info );
static void usc_load_txfifo( struct mgsl_struct *info );
static void usc_enable_aux_clock( struct mgsl_struct *info, u32 DataRate );
static void usc_enable_loopback( struct mgsl_struct *info, int enable );
static void usc_get_serial_signals( struct mgsl_struct *info );
static void usc_set_serial_signals( struct mgsl_struct *info );
static void usc_reset( struct mgsl_struct *info );
static void usc_set_sync_mode( struct mgsl_struct *info );
static void usc_set_sdlc_mode( struct mgsl_struct *info );
static void usc_set_async_mode( struct mgsl_struct *info );
static void usc_enable_async_clock( struct mgsl_struct *info, u32 DataRate );
static void usc_loopback_frame( struct mgsl_struct *info );
static void mgsl_tx_timeout(unsigned long context);
static void usc_loopmode_cancel_transmit( struct mgsl_struct * info );
static void usc_loopmode_insert_request( struct mgsl_struct * info );
static int usc_loopmode_active( struct mgsl_struct * info);
static void usc_loopmode_send_done( struct mgsl_struct * info );
static int mgsl_ioctl_common(struct mgsl_struct *info, unsigned int cmd, unsigned long arg);
#if SYNCLINK_GENERIC_HDLC
#define dev_to_port(D) (dev_to_hdlc(D)->priv)
static void hdlcdev_tx_done(struct mgsl_struct *info);
static void hdlcdev_rx(struct mgsl_struct *info, char *buf, int size);
static int  hdlcdev_init(struct mgsl_struct *info);
static void hdlcdev_exit(struct mgsl_struct *info);
#define BUS_DESCRIPTOR( WrHold, WrDly, RdDly, Nwdd, Nwad, Nxda, Nrdd, Nrad ) \
(0x00400020 + \
((WrHold) << 30) + \
((WrDly)  << 28) + \
((RdDly)  << 26) + \
((Nwdd)   << 20) + \
((Nwad)   << 15) + \
((Nxda)   << 13) + \
((Nrdd)   << 11) + \
((Nrad)   <<  6) )
static void mgsl_trace_block(struct mgsl_struct *info,const char* data, int count, int xmit);
static bool mgsl_register_test( struct mgsl_struct *info );
static bool mgsl_irq_test( struct mgsl_struct *info );
static bool mgsl_dma_test( struct mgsl_struct *info );
static bool mgsl_memory_test( struct mgsl_struct *info );
static int mgsl_adapter_test( struct mgsl_struct *info );
static int mgsl_claim_resources(struct mgsl_struct *info);
static void mgsl_release_resources(struct mgsl_struct *info);
static void mgsl_add_device(struct mgsl_struct *info);
static struct mgsl_struct* mgsl_allocate_device(void);
static void mgsl_free_rx_frame_buffers( struct mgsl_struct *info, unsigned int StartIndex, unsigned int EndIndex );
static bool mgsl_get_rx_frame( struct mgsl_struct *info );
static bool mgsl_get_raw_rx_frame( struct mgsl_struct *info );
static void mgsl_reset_rx_dma_buffers( struct mgsl_struct *info );
static void mgsl_reset_tx_dma_buffers( struct mgsl_struct *info );
static int num_free_tx_dma_buffers(struct mgsl_struct *info);
static void mgsl_load_tx_dma_buffer( struct mgsl_struct *info, const char *Buffer, unsigned int BufferSize);
static void mgsl_load_pci_memory(char* TargetPtr, const char* SourcePtr, unsigned short count);
static int  mgsl_allocate_dma_buffers(struct mgsl_struct *info);
static void mgsl_free_dma_buffers(struct mgsl_struct *info);
static int  mgsl_alloc_frame_memory(struct mgsl_struct *info, DMABUFFERENTRY *BufferList,int Buffercount);
static void mgsl_free_frame_memory(struct mgsl_struct *info, DMABUFFERENTRY *BufferList,int Buffercount);
static int  mgsl_alloc_buffer_list_memory(struct mgsl_struct *info);
static void mgsl_free_buffer_list_memory(struct mgsl_struct *info);
static int mgsl_alloc_intermediate_rxbuffer_memory(struct mgsl_struct *info);
static void mgsl_free_intermediate_rxbuffer_memory(struct mgsl_struct *info);
static int mgsl_alloc_intermediate_txbuffer_memory(struct mgsl_struct *info);
static void mgsl_free_intermediate_txbuffer_memory(struct mgsl_struct *info);
static bool load_next_tx_holding_buffer(struct mgsl_struct *info);
static int save_tx_buffer_request(struct mgsl_struct *info,const char *Buffer, unsigned int BufferSize);
static void mgsl_bh_handler(struct work_struct *work);
static void mgsl_bh_receive(struct mgsl_struct *info);
static void mgsl_bh_transmit(struct mgsl_struct *info);
static void mgsl_bh_status(struct mgsl_struct *info);
static void mgsl_isr_null( struct mgsl_struct *info );
static void mgsl_isr_transmit_data( struct mgsl_struct *info );
static void mgsl_isr_receive_data( struct mgsl_struct *info );
static void mgsl_isr_receive_status( struct mgsl_struct *info );
static void mgsl_isr_transmit_status( struct mgsl_struct *info );
static void mgsl_isr_io_pin( struct mgsl_struct *info );
static void mgsl_isr_misc( struct mgsl_struct *info );
static void mgsl_isr_receive_dma( struct mgsl_struct *info );
static void mgsl_isr_transmit_dma( struct mgsl_struct *info );
typedef void (*isr_dispatch_func)(struct mgsl_struct *);
static isr_dispatch_func UscIsrTable[7] =
;
static int tiocmget(struct tty_struct *tty);
static int tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear);
static int mgsl_get_stats(struct mgsl_struct * info, struct mgsl_icount
__user *user_icount);
static int mgsl_get_params(struct mgsl_struct * info, MGSL_PARAMS  __user *user_params);
static int mgsl_set_params(struct mgsl_struct * info, MGSL_PARAMS  __user *new_params);
static int mgsl_get_txidle(struct mgsl_struct * info, int __user *idle_mode);
static int mgsl_set_txidle(struct mgsl_struct * info, int idle_mode);
static int mgsl_txenable(struct mgsl_struct * info, int enable);
static int mgsl_txabort(struct mgsl_struct * info);
static int mgsl_rxenable(struct mgsl_struct * info, int enable);
static int mgsl_wait_event(struct mgsl_struct * info, int __user *mask);
static int mgsl_loopmode_send_done( struct mgsl_struct * info );
static bool pci_registered;
static struct mgsl_struct *mgsl_device_list;
static int mgsl_device_count;
static int break_on_load;
static int ttymajor;
static int io[MAX_ISA_DEVICES];
static int irq[MAX_ISA_DEVICES];
static int dma[MAX_ISA_DEVICES];
static int debug_level;
static int maxframe[MAX_TOTAL_DEVICES];
static int txdmabufs[MAX_TOTAL_DEVICES];
static int txholdbufs[MAX_TOTAL_DEVICES];
module_param(break_on_load, bool, 0);
module_param(ttymajor, int, 0);
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param_array(dma, int, NULL, 0);
module_param(debug_level, int, 0);
module_param_array(maxframe, int, NULL, 0);
module_param_array(txdmabufs, int, NULL, 0);
module_param_array(txholdbufs, int, NULL, 0);
static char *driver_name = "SyncLink serial driver";
static char *driver_version = "$Revision: 4.38 $";
static int synclink_init_one (struct pci_dev *dev,
const struct pci_device_id *ent);
static void synclink_remove_one (struct pci_dev *dev);
static struct pci_device_id synclink_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, synclink_pci_tbl);
MODULE_LICENSE("GPL");
static struct pci_driver synclink_pci_driver = ;
static struct tty_driver *serial_driver;
#define WAKEUP_CHARS 256
static void mgsl_change_params(struct mgsl_struct *info);
static void mgsl_wait_until_sent(struct tty_struct *tty, int timeout);
static void* mgsl_get_text_ptr(void)
static inline int mgsl_paranoia_check(struct mgsl_struct *info,
char *name, const char *routine)
static void ldisc_receive_buf(struct tty_struct *tty,
const __u8 *data, char *flags, int count)
static void mgsl_stop(struct tty_struct *tty)
static void mgsl_start(struct tty_struct *tty)
static int mgsl_bh_action(struct mgsl_struct *info)
static void mgsl_bh_handler(struct work_struct *work)
static void mgsl_bh_receive(struct mgsl_struct *info)
static void mgsl_bh_transmit(struct mgsl_struct *info)
static void mgsl_bh_status(struct mgsl_struct *info)
static void mgsl_isr_receive_status( struct mgsl_struct *info )
static void mgsl_isr_transmit_status( struct mgsl_struct *info )
static void mgsl_isr_io_pin( struct mgsl_struct *info )
static void mgsl_isr_transmit_data( struct mgsl_struct *info )
static void mgsl_isr_receive_data( struct mgsl_struct *info )
static void mgsl_isr_misc( struct mgsl_struct *info )
static void mgsl_isr_null( struct mgsl_struct *info )
static void mgsl_isr_receive_dma( struct mgsl_struct *info )
static void mgsl_isr_transmit_dma( struct mgsl_struct *info )
static irqreturn_t mgsl_interrupt(int dummy, void *dev_id)
static int startup(struct mgsl_struct * info)
static void shutdown(struct mgsl_struct * info)
static void mgsl_program_hw(struct mgsl_struct *info)
static void mgsl_change_params(struct mgsl_struct *info)
static int mgsl_put_char(struct tty_struct *tty, unsigned char ch)
static void mgsl_flush_chars(struct tty_struct *tty)
static int mgsl_write(struct tty_struct * tty,
const unsigned char *buf, int count)
static int mgsl_write_room(struct tty_struct *tty)
static int mgsl_chars_in_buffer(struct tty_struct *tty)
static void mgsl_flush_buffer(struct tty_struct *tty)
static void mgsl_send_xchar(struct tty_struct *tty, char ch)
static void mgsl_throttle(struct tty_struct * tty)
static void mgsl_unthrottle(struct tty_struct * tty)
static int mgsl_get_stats(struct mgsl_struct * info, struct mgsl_icount __user *user_icount)
static int mgsl_get_params(struct mgsl_struct * info, MGSL_PARAMS __user *user_params)
static int mgsl_set_params(struct mgsl_struct * info, MGSL_PARAMS __user *new_params)
static int mgsl_get_txidle(struct mgsl_struct * info, int __user *idle_mode)
static int mgsl_set_txidle(struct mgsl_struct * info, int idle_mode)
static int mgsl_txenable(struct mgsl_struct * info, int enable)
static int mgsl_txabort(struct mgsl_struct * info)
static int mgsl_rxenable(struct mgsl_struct * info, int enable)
static int mgsl_wait_event(struct mgsl_struct * info, int __user * mask_ptr)
static int modem_input_wait(struct mgsl_struct *info,int arg)
static int tiocmget(struct tty_struct *tty)
static int tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int mgsl_break(struct tty_struct *tty, int break_state)
static int msgl_get_icount(struct tty_struct *tty,
struct serial_icounter_struct *icount)
static int mgsl_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static int mgsl_ioctl_common(struct mgsl_struct *info, unsigned int cmd, unsigned long arg)
static void mgsl_set_termios(struct tty_struct *tty, struct ktermios *old_termios)
static void mgsl_close(struct tty_struct *tty, struct file * filp)
static void mgsl_wait_until_sent(struct tty_struct *tty, int timeout)
static void mgsl_hangup(struct tty_struct *tty)
static int carrier_raised(struct tty_port *port)
static void dtr_rts(struct tty_port *port, int on)
static int block_til_ready(struct tty_struct *tty, struct file * filp,
struct mgsl_struct *info)
static int mgsl_open(struct tty_struct *tty, struct file * filp)
static inline void line_info(struct seq_file *m, struct mgsl_struct *info)
static int mgsl_proc_show(struct seq_file *m, void *v)
static int mgsl_proc_open(struct inode *inode, struct file *file)
static const struct file_operations mgsl_proc_fops = ;
static int mgsl_allocate_dma_buffers(struct mgsl_struct *info)
static int mgsl_alloc_buffer_list_memory( struct mgsl_struct *info )
static void mgsl_free_buffer_list_memory( struct mgsl_struct *info )
static int mgsl_alloc_frame_memory(struct mgsl_struct *info,DMABUFFERENTRY *BufferList,int Buffercount)
static void mgsl_free_frame_memory(struct mgsl_struct *info, DMABUFFERENTRY *BufferList, int Buffercount)
static void mgsl_free_dma_buffers( struct mgsl_struct *info )
static int mgsl_alloc_intermediate_rxbuffer_memory(struct mgsl_struct *info)
static void mgsl_free_intermediate_rxbuffer_memory(struct mgsl_struct *info)
static int mgsl_alloc_intermediate_txbuffer_memory(struct mgsl_struct *info)
static void mgsl_free_intermediate_txbuffer_memory(struct mgsl_struct *info)
static bool load_next_tx_holding_buffer(struct mgsl_struct *info)
static int save_tx_buffer_request(struct mgsl_struct *info,const char *Buffer, unsigned int BufferSize)
static int mgsl_claim_resources(struct mgsl_struct *info)
static void mgsl_release_resources(struct mgsl_struct *info)
static void mgsl_add_device( struct mgsl_struct *info )
static const struct tty_port_operations mgsl_port_ops = ;
static struct mgsl_struct* mgsl_allocate_device(void)
static const struct tty_operations mgsl_ops = ;
static int mgsl_init_tty(void)
static void mgsl_enum_isa_devices(void)
static void synclink_cleanup(void)
static int __init synclink_init(void)
static void __exit synclink_exit(void)
module_init(synclink_init);
module_exit(synclink_exit);
static void usc_RTCmd( struct mgsl_struct *info, u16 Cmd )
static void usc_DmaCmd( struct mgsl_struct *info, u16 Cmd )
static void usc_OutDmaReg( struct mgsl_struct *info, u16 RegAddr, u16 RegValue )
static u16 usc_InDmaReg( struct mgsl_struct *info, u16 RegAddr )
static void usc_OutReg( struct mgsl_struct *info, u16 RegAddr, u16 RegValue )
static u16 usc_InReg( struct mgsl_struct *info, u16 RegAddr )
static void usc_set_sdlc_mode( struct mgsl_struct *info )
static void usc_enable_loopback(struct mgsl_struct *info, int enable)
static void usc_enable_aux_clock( struct mgsl_struct *info, u32 data_rate )
static void usc_process_rxoverrun_sync( struct mgsl_struct *info )
static void usc_stop_receiver( struct mgsl_struct *info )
static void usc_start_receiver( struct mgsl_struct *info )
static void usc_start_transmitter( struct mgsl_struct *info )
static void usc_stop_transmitter( struct mgsl_struct *info )
static void usc_load_txfifo( struct mgsl_struct *info )
static void usc_reset( struct mgsl_struct *info )
static void usc_set_async_mode( struct mgsl_struct *info )
static void usc_loopback_frame( struct mgsl_struct *info )
static void usc_set_sync_mode( struct mgsl_struct *info )
static void usc_set_txidle( struct mgsl_struct *info )
static void usc_get_serial_signals( struct mgsl_struct *info )
static void usc_set_serial_signals( struct mgsl_struct *info )
static void usc_enable_async_clock( struct mgsl_struct *info, u32 data_rate )
static void mgsl_reset_tx_dma_buffers( struct mgsl_struct *info )
static int num_free_tx_dma_buffers(struct mgsl_struct *info)
static void mgsl_reset_rx_dma_buffers( struct mgsl_struct *info )
static void mgsl_free_rx_frame_buffers( struct mgsl_struct *info, unsigned int StartIndex, unsigned int EndIndex )
static bool mgsl_get_rx_frame(struct mgsl_struct *info)
static bool mgsl_get_raw_rx_frame(struct mgsl_struct *info)
static void mgsl_load_tx_dma_buffer(struct mgsl_struct *info,
const char *Buffer, unsigned int BufferSize)
static bool mgsl_register_test( struct mgsl_struct *info )
static bool mgsl_irq_test( struct mgsl_struct *info )
static bool mgsl_dma_test( struct mgsl_struct *info )
static int mgsl_adapter_test( struct mgsl_struct *info )
static bool mgsl_memory_test( struct mgsl_struct *info )
static void mgsl_load_pci_memory( char* TargetPtr, const char* SourcePtr,
unsigned short count )
static void mgsl_trace_block(struct mgsl_struct *info,const char* data, int count, int xmit)
static void mgsl_tx_timeout(unsigned long context)
static int mgsl_loopmode_send_done( struct mgsl_struct * info )
static void usc_loopmode_send_done( struct mgsl_struct * info )
static void usc_loopmode_cancel_transmit( struct mgsl_struct * info )
static void usc_loopmode_insert_request( struct mgsl_struct * info )
static int usc_loopmode_active( struct mgsl_struct * info)
#if SYNCLINK_GENERIC_HDLC
static int hdlcdev_attach(struct net_device *dev, unsigned short encoding,
unsigned short parity)
static netdev_tx_t hdlcdev_xmit(struct sk_buff *skb,
struct net_device *dev)
static int hdlcdev_open(struct net_device *dev)
static int hdlcdev_close(struct net_device *dev)
static int hdlcdev_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static void hdlcdev_tx_timeout(struct net_device *dev)
static void hdlcdev_tx_done(struct mgsl_struct *info)
static void hdlcdev_rx(struct mgsl_struct *info, char *buf, int size)
static const struct net_device_ops hdlcdev_ops = ;
static int hdlcdev_init(struct mgsl_struct *info)
static void hdlcdev_exit(struct mgsl_struct *info)
static int __devinit synclink_init_one (struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit synclink_remove_one (struct pci_dev *dev)
