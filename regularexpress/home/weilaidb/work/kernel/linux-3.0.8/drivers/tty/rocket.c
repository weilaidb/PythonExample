#define ROCKET_PARANOIA_CHECK
#define ROCKET_DISABLE_SIMUSAGE
#undef ROCKET_SOFT_FLOW
#undef ROCKET_DEBUG_OPEN
#undef ROCKET_DEBUG_INTR
#undef ROCKET_DEBUG_WRITE
#undef ROCKET_DEBUG_FLOW
#undef ROCKET_DEBUG_THROTTLE
#undef ROCKET_DEBUG_WAIT_UNTIL_SENT
#undef ROCKET_DEBUG_RECEIVE
#undef ROCKET_DEBUG_HANGUP
#undef REV_PCI_ORDER
#undef ROCKET_DEBUG_IO
#define POLL_PERIOD HZ/100
#define ROCKET_VERSION "2.09"
#define ROCKET_DATE "12-June-2003"
static void rp_do_poll(unsigned long dummy);
static struct tty_driver *rocket_driver;
static struct rocket_version driver_version = ;
static struct r_port *rp_table[MAX_RP_PORTS];
static unsigned int xmit_flags[NUM_BOARDS];
static atomic_t rp_num_ports_open;
static DEFINE_TIMER(rocket_timer, rp_do_poll, 0, 0);
static unsigned long board1;
static unsigned long board2;
static unsigned long board3;
static unsigned long board4;
static unsigned long controller;
static int support_low_speed;
static unsigned long modem1;
static unsigned long modem2;
static unsigned long modem3;
static unsigned long modem4;
static unsigned long pc104_1[8];
static unsigned long pc104_2[8];
static unsigned long pc104_3[8];
static unsigned long pc104_4[8];
static unsigned long *pc104[4] = ;
static int rp_baud_base[NUM_BOARDS];
static unsigned long rcktpt_io_addr[NUM_BOARDS];
static int rcktpt_type[NUM_BOARDS];
static int is_PCI[NUM_BOARDS];
static rocketModel_t rocketModel[NUM_BOARDS];
static int max_board;
static const struct tty_port_operations rocket_port_ops;
static Word_t aiop_intr_bits[AIOP_CTL_SIZE] = ;
static Word_t upci_aiop_intr_bits[AIOP_CTL_SIZE] = ;
static Byte_t RData[RDATASIZE] = ;
static Byte_t RRegData[RREGDATASIZE] = ;
static CONTROLLER_T sController[CTL_SIZE] = ;
static Byte_t sBitMapClrTbl[8] = ;
static Byte_t sBitMapSetTbl[8] = ;
static int sClockPrescale = 0x14;
static unsigned char lineNumbers[MAX_RP_PORTS];
static unsigned long nextLineNumber;
static int __init init_ISA(int i);
static void rp_wait_until_sent(struct tty_struct *tty, int timeout);
static void rp_flush_buffer(struct tty_struct *tty);
static void rmSpeakerReset(CONTROLLER_T * CtlP, unsigned long model);
static unsigned char GetLineNumber(int ctrl, int aiop, int ch);
static unsigned char SetLineNumber(int ctrl, int aiop, int ch);
static void rp_start(struct tty_struct *tty);
static int sInitChan(CONTROLLER_T * CtlP, CHANNEL_T * ChP, int AiopNum,
int ChanNum);
static void sSetInterfaceMode(CHANNEL_T * ChP, Byte_t mode);
static void sFlushRxFIFO(CHANNEL_T * ChP);
static void sFlushTxFIFO(CHANNEL_T * ChP);
static void sEnInterrupts(CHANNEL_T * ChP, Word_t Flags);
static void sDisInterrupts(CHANNEL_T * ChP, Word_t Flags);
static void sModemReset(CONTROLLER_T * CtlP, int chan, int on);
static void sPCIModemReset(CONTROLLER_T * CtlP, int chan, int on);
static int sWriteTxPrioByte(CHANNEL_T * ChP, Byte_t Data);
static int sPCIInitController(CONTROLLER_T * CtlP, int CtlNum,
ByteIO_t * AiopIOList, int AiopIOListSize,
WordIO_t ConfigIO, int IRQNum, Byte_t Frequency,
int PeriodicOnly, int altChanRingIndicator,
int UPCIRingInd);
static int sInitController(CONTROLLER_T * CtlP, int CtlNum, ByteIO_t MudbacIO,
ByteIO_t * AiopIOList, int AiopIOListSize,
int IRQNum, Byte_t Frequency, int PeriodicOnly);
static int sReadAiopID(ByteIO_t io);
static int sReadAiopNumChan(WordIO_t io);
MODULE_AUTHOR("Theodore Ts'o");
MODULE_DESCRIPTION("Comtrol RocketPort driver");
module_param(board1, ulong, 0);
MODULE_PARM_DESC(board1, "I/O port for (ISA) board #1");
module_param(board2, ulong, 0);
MODULE_PARM_DESC(board2, "I/O port for (ISA) board #2");
module_param(board3, ulong, 0);
MODULE_PARM_DESC(board3, "I/O port for (ISA) board #3");
module_param(board4, ulong, 0);
MODULE_PARM_DESC(board4, "I/O port for (ISA) board #4");
module_param(controller, ulong, 0);
MODULE_PARM_DESC(controller, "I/O port for (ISA) rocketport controller");
module_param(support_low_speed, bool, 0);
MODULE_PARM_DESC(support_low_speed, "1 means support 50 baud, 0 means support 460400 baud");
module_param(modem1, ulong, 0);
MODULE_PARM_DESC(modem1, "1 means (ISA) board #1 is a RocketModem");
module_param(modem2, ulong, 0);
MODULE_PARM_DESC(modem2, "1 means (ISA) board #2 is a RocketModem");
module_param(modem3, ulong, 0);
MODULE_PARM_DESC(modem3, "1 means (ISA) board #3 is a RocketModem");
module_param(modem4, ulong, 0);
MODULE_PARM_DESC(modem4, "1 means (ISA) board #4 is a RocketModem");
module_param_array(pc104_1, ulong, NULL, 0);
MODULE_PARM_DESC(pc104_1, "set interface types for ISA(PC104) board #1 (e.g. pc104_1=232,232,485,485,...");
module_param_array(pc104_2, ulong, NULL, 0);
MODULE_PARM_DESC(pc104_2, "set interface types for ISA(PC104) board #2 (e.g. pc104_2=232,232,485,485,...");
module_param_array(pc104_3, ulong, NULL, 0);
MODULE_PARM_DESC(pc104_3, "set interface types for ISA(PC104) board #3 (e.g. pc104_3=232,232,485,485,...");
module_param_array(pc104_4, ulong, NULL, 0);
MODULE_PARM_DESC(pc104_4, "set interface types for ISA(PC104) board #4 (e.g. pc104_4=232,232,485,485,...");
static int rp_init(void);
static void rp_cleanup_module(void);
module_init(rp_init);
module_exit(rp_cleanup_module);
MODULE_LICENSE("Dual BSD/GPL");
static inline int rocket_paranoia_check(struct r_port *info,
const char *routine)
static void rp_do_receive(struct r_port *info,
struct tty_struct *tty,
CHANNEL_t * cp, unsigned int ChanStatus)
static void rp_do_transmit(struct r_port *info)
static void rp_handle_port(struct r_port *info)
static void rp_do_poll(unsigned long dummy)
static void init_r_port(int board, int aiop, int chan, struct pci_dev *pci_dev)
static void configure_r_port(struct tty_struct *tty, struct r_port *info,
struct ktermios *old_termios)
static int carrier_raised(struct tty_port *port)
static void dtr_rts(struct tty_port *port, int on)
static int rp_open(struct tty_struct *tty, struct file *filp)
static void rp_close(struct tty_struct *tty, struct file *filp)
static void rp_set_termios(struct tty_struct *tty,
struct ktermios *old_termios)
static int rp_break(struct tty_struct *tty, int break_state)
static int sGetChanRI(CHANNEL_T * ChP)
static int rp_tiocmget(struct tty_struct *tty)
static int rp_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int get_config(struct r_port *info, struct rocket_config __user *retinfo)
static int set_config(struct tty_struct *tty, struct r_port *info,
struct rocket_config __user *new_info)
static int get_ports(struct r_port *info, struct rocket_ports __user *retports)
static int reset_rm2(struct r_port *info, void __user *arg)
static int get_version(struct r_port *info, struct rocket_version __user *retvers)
static int rp_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void rp_send_xchar(struct tty_struct *tty, char ch)
static void rp_throttle(struct tty_struct *tty)
static void rp_unthrottle(struct tty_struct *tty)
static void rp_stop(struct tty_struct *tty)
static void rp_start(struct tty_struct *tty)
static void rp_wait_until_sent(struct tty_struct *tty, int timeout)
static void rp_hangup(struct tty_struct *tty)
static int rp_put_char(struct tty_struct *tty, unsigned char ch)
static int rp_write(struct tty_struct *tty,
const unsigned char *buf, int count)
static int rp_write_room(struct tty_struct *tty)
static int rp_chars_in_buffer(struct tty_struct *tty)
static void rp_flush_buffer(struct tty_struct *tty)
static struct pci_device_id __devinitdata __used rocket_pci_ids[] = ;
MODULE_DEVICE_TABLE(pci, rocket_pci_ids);
static __init int register_PCI(int i, struct pci_dev *dev)
static int __init init_PCI(int boards_found)
static int __init init_ISA(int i)
static const struct tty_operations rocket_ops = ;
static const struct tty_port_operations rocket_port_ops = ;
static int __init rp_init(void)
static void rp_cleanup_module(void)
static int sInitController(CONTROLLER_T * CtlP, int CtlNum, ByteIO_t MudbacIO,
ByteIO_t * AiopIOList, int AiopIOListSize,
int IRQNum, Byte_t Frequency, int PeriodicOnly)
static int sPCIInitController(CONTROLLER_T * CtlP, int CtlNum,
ByteIO_t * AiopIOList, int AiopIOListSize,
WordIO_t ConfigIO, int IRQNum, Byte_t Frequency,
int PeriodicOnly, int altChanRingIndicator,
int UPCIRingInd)
static int sReadAiopID(ByteIO_t io)
static int sReadAiopNumChan(WordIO_t io)
static int sInitChan(CONTROLLER_T * CtlP, CHANNEL_T * ChP, int AiopNum,
int ChanNum)
static void sStopRxProcessor(CHANNEL_T * ChP)
static void sFlushRxFIFO(CHANNEL_T * ChP)
static void sFlushTxFIFO(CHANNEL_T * ChP)
static int sWriteTxPrioByte(CHANNEL_T * ChP, Byte_t Data)
static void sEnInterrupts(CHANNEL_T * ChP, Word_t Flags)
static void sDisInterrupts(CHANNEL_T * ChP, Word_t Flags)
static void sSetInterfaceMode(CHANNEL_T * ChP, Byte_t mode)
static void sModemReset(CONTROLLER_T * CtlP, int chan, int on)
static void sPCIModemReset(CONTROLLER_T * CtlP, int chan, int on)
static void rmSpeakerReset(CONTROLLER_T * CtlP, unsigned long model)
static unsigned char GetLineNumber(int ctrl, int aiop, int ch)
static unsigned char SetLineNumber(int ctrl, int aiop, int ch)
