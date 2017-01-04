#define IBMTR_DEBUG_MESSAGES 0
#undef MODULE
#undef ENABLE_PAGING
#define ENABLE_PAGING 1
#define TR_VERBOSE	0
#define TR_FILTERNONUI	1
#define DPRINTK(format, args...) printk("%s: " format, dev->name , ## args)
#define DPRINTD(format, args...) DummyCall("%s: " format, dev->name , ## args)
static char version[] __devinitdata =
"\nibmtr.c: v1.3.57   8/ 7/94 Peter De Schrijver and Mark Swanson\n"
"         v2.1.125 10/20/98 Paul Norton    <pnorton@ieee.org>\n"
"         v2.2.0   12/30/98 Joel Sloan     <jjs@c-me.com>\n"
"         v2.2.1   02/08/00 Mike Sullivan  <sullivam@us.ibm.com>\n"
"         v2.2.2   07/27/00 Burt Silverman <burts@us.ibm.com>\n"
"         v2.4.0   03/01/01 Mike Sullivan <sullivan@us.ibm.com>\n";
static char *channel_def[] __devinitdata = ;
static char pcchannelid[] __devinitdata = ;
static char mcchannelid[] __devinitdata =  ;
static char __devinit *adapter_def(char type)
;
#define TRC_INIT 0x01
#define TRC_INITV 0x02
static unsigned char ibmtr_debug_trace = 0;
static int	ibmtr_probe1(struct net_device *dev, int ioaddr);
static unsigned char get_sram_size(struct tok_info *adapt_info);
static int 	trdev_init(struct net_device *dev);
static int 	tok_open(struct net_device *dev);
static int 	tok_init_card(struct net_device *dev);
static void	tok_open_adapter(unsigned long dev_addr);
static void 	open_sap(unsigned char type, struct net_device *dev);
static void 	tok_set_multicast_list(struct net_device *dev);
static netdev_tx_t tok_send_packet(struct sk_buff *skb,
struct net_device *dev);
static int 	tok_close(struct net_device *dev);
static irqreturn_t tok_interrupt(int irq, void *dev_id);
static void 	initial_tok_int(struct net_device *dev);
static void 	tr_tx(struct net_device *dev);
static void 	tr_rx(struct net_device *dev);
static void	ibmtr_reset_timer(struct timer_list*tmr,struct net_device *dev);
static void	tok_rerun(unsigned long dev_addr);
static void	ibmtr_readlog(struct net_device *dev);
static int	ibmtr_change_mtu(struct net_device *dev, int mtu);
static void	find_turbo_adapters(int *iolist);
static int ibmtr_portlist[IBMTR_MAX_ADAPTERS+1] __devinitdata = ;
static int __devinitdata turbo_io[IBMTR_MAX_ADAPTERS] = ;
static int __devinitdata turbo_irq[IBMTR_MAX_ADAPTERS] = ;
static int __devinitdata turbo_searched = 0;
static __u32 ibmtr_mem_base __devinitdata = 0xd0000;
static void __devinit PrtChanID(char *pcid, short stride)
static void __devinit HWPrtChanID(void __iomem *pcid, short stride)
static void __devinit find_turbo_adapters(int *iolist)
static void ibmtr_cleanup_card(struct net_device *dev)
static int __devinit ibmtr_probe(struct net_device *dev)
int __devinit ibmtr_probe_card(struct net_device *dev)
static int __devinit ibmtr_probe1(struct net_device *dev, int PIOaddr)
static unsigned char __devinit get_sram_size(struct tok_info *adapt_info)
static const struct net_device_ops trdev_netdev_ops = ;
static int __devinit trdev_init(struct net_device *dev)
static int tok_init_card(struct net_device *dev)
static int tok_open(struct net_device *dev)
#define COMMAND_OFST             0
#define OPEN_OPTIONS_OFST        8
#define NUM_RCV_BUF_OFST        24
#define RCV_BUF_LEN_OFST        26
#define DHB_LENGTH_OFST         28
#define NUM_DHB_OFST            30
#define DLC_MAX_SAP_OFST        32
#define DLC_MAX_STA_OFST        33
static void tok_open_adapter(unsigned long dev_addr)
static void open_sap(unsigned char type, struct net_device *dev)
static void tok_set_multicast_list(struct net_device *dev)
#define STATION_ID_OFST 4
static netdev_tx_t tok_send_packet(struct sk_buff *skb,
struct net_device *dev)
static int tok_close(struct net_device *dev)
#define RETCODE_OFST		2
#define OPEN_ERROR_CODE_OFST	6
#define ASB_ADDRESS_OFST        8
#define SRB_ADDRESS_OFST        10
#define ARB_ADDRESS_OFST        12
#define SSB_ADDRESS_OFST        14
static char *printphase[]= ;
static char *printerror[]=;
static void __iomem *map_address(struct tok_info *ti, unsigned index, __u8 *page)
static void dir_open_adapter (struct net_device *dev)
static irqreturn_t tok_interrupt(int irq, void *dev_id)
#define INIT_STATUS_OFST        1
#define INIT_STATUS_2_OFST      2
#define ENCODED_ADDRESS_OFST    8
static void initial_tok_int(struct net_device *dev)
#define CMD_CORRELATE_OFST      1
#define DHB_ADDRESS_OFST        6
#define FRAME_LENGTH_OFST       6
#define HEADER_LENGTH_OFST      8
#define RSAP_VALUE_OFST         9
static void tr_tx(struct net_device *dev)
#define RECEIVE_BUFFER_OFST     6
#define LAN_HDR_LENGTH_OFST     8
#define DLC_HDR_LENGTH_OFST     9
#define DSAP_OFST               0
#define SSAP_OFST               1
#define LLC_OFST                2
#define PROTID_OFST             3
#define ETHERTYPE_OFST          6
static void tr_rx(struct net_device *dev)
static void ibmtr_reset_timer(struct timer_list *tmr, struct net_device *dev)
static void tok_rerun(unsigned long dev_addr)
static void ibmtr_readlog(struct net_device *dev)
static int ibmtr_change_mtu(struct net_device *dev, int mtu)
static struct net_device *dev_ibmtr[IBMTR_MAX_ADAPTERS];
static int io[IBMTR_MAX_ADAPTERS] = ;
static int irq[IBMTR_MAX_ADAPTERS];
static int mem[IBMTR_MAX_ADAPTERS];
MODULE_LICENSE("GPL");
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param_array(mem, int, NULL, 0);
static int __init ibmtr_init(void)
module_init(ibmtr_init);
static void __exit ibmtr_cleanup(void)
module_exit(ibmtr_cleanup);
