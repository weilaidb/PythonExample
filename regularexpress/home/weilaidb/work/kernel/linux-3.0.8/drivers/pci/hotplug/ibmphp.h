#define __IBMPHP_H
extern int ibmphp_debug;
#if !defined(MODULE)
#define MY_NAME "ibmphpd"
#define MY_NAME THIS_MODULE->name
#define debug(fmt, arg...) do  while (0)
#define debug_pci(fmt, arg...) do  while (0)
#define err(format, arg...) printk(KERN_ERR "%s: " format , MY_NAME , ## arg)
#define info(format, arg...) printk(KERN_INFO "%s: " format , MY_NAME , ## arg)
#define warn(format, arg...) printk(KERN_WARNING "%s: " format , MY_NAME , ## arg)
#define EBDA_SLOT_133_MAX		0x20
#define EBDA_SLOT_100_MAX		0x10
#define EBDA_SLOT_66_MAX		0x02
#define EBDA_SLOT_PCIX_CAP		0x08
#define EBDA_RSRC_TYPE_MASK		0x03
#define EBDA_IO_RSRC_TYPE		0x00
#define EBDA_MEM_RSRC_TYPE		0x01
#define EBDA_PFM_RSRC_TYPE		0x03
#define EBDA_RES_RSRC_TYPE		0x02
#define EBDA_IO_RESTRI_MASK		0x0c
#define EBDA_NO_RESTRI			0x00
#define EBDA_AVO_VGA_ADDR		0x04
#define EBDA_AVO_VGA_ADDR_AND_ALIA	0x08
#define EBDA_AVO_ISA_ADDR		0x0c
#define EBDA_DEV_TYPE_MASK		0x10
#define EBDA_PCI_DEV			0x10
#define EBDA_NON_PCI_DEV		0x00
#define EBDA_PRI_DEF_MASK		0x20
#define EBDA_PRI_PCI_BUS_INFO		0x20
#define EBDA_NORM_DEV_RSRC_INFO		0x00
struct rio_table_hdr ;
struct scal_detail ;
struct rio_detail ;
struct opt_rio ;
struct opt_rio_lo ;
struct ebda_hpc_list ;
struct ebda_hpc_slot ;
struct ebda_hpc_bus ;
struct isa_ctlr_access ;
struct pci_ctlr_access ;
struct wpeg_i2c_ctlr_access ;
#define HPC_DEVICE_ID		0x0246
#define HPC_SUBSYSTEM_ID	0x0247
#define HPC_PCI_OFFSET		0x40
struct ebda_rsrc_list ;
struct ebda_pci_rsrc ;
struct bus_info ;
extern struct list_head ibmphp_ebda_pci_rsrc_head;
extern struct list_head ibmphp_slot_head;
extern void ibmphp_free_ebda_hpc_queue (void);
extern int ibmphp_access_ebda (void);
extern struct slot *ibmphp_get_slot_from_physical_num (u8);
extern int ibmphp_get_total_hp_slots (void);
extern void ibmphp_free_ibm_slot (struct slot *);
extern void ibmphp_free_bus_info_queue (void);
extern void ibmphp_free_ebda_pci_rsrc_queue (void);
extern struct bus_info *ibmphp_find_same_bus_num (u32);
extern int ibmphp_get_bus_index (u8);
extern u16 ibmphp_get_total_controllers (void);
extern int ibmphp_register_pci (void);
#define MEM		0
#define IO		1
#define PFMEM		2
#define RESTYPE		0x03
#define IOMASK		0x00
#define MMASK		0x01
#define PFMASK		0x03
#define PCIDEVMASK	0x10
#define PRIMARYBUSMASK	0x20
#define PCI_VENDOR_ID_NOTVALID		0xFFFF
#define PCI_HEADER_TYPE_MULTIDEVICE	0x80
#define PCI_HEADER_TYPE_MULTIBRIDGE	0x81
#define LATENCY		0x64
#define CACHE		64
#define DEVICEENABLE	0x015F
#define IOBRIDGE	0x1000
#define MEMBRIDGE	0x100000
#define SCSI_IRQ	0x09
#define LAN_IRQ		0x0A
#define OTHER_IRQ	0x0B
struct range_node ;
struct bus_node ;
struct resource_node ;
struct res_needed ;
extern int ibmphp_rsrc_init (void);
extern int ibmphp_add_resource (struct resource_node *);
extern int ibmphp_remove_resource (struct resource_node *);
extern int ibmphp_find_resource (struct bus_node *, u32, struct resource_node **, int);
extern int ibmphp_check_resource (struct resource_node *, u8);
extern int ibmphp_remove_bus (struct bus_node *, u8);
extern void ibmphp_free_resources (void);
extern int ibmphp_add_pfmem_from_mem (struct resource_node *);
extern struct bus_node *ibmphp_find_res_bus (u8);
extern void ibmphp_print_test (void);
extern void ibmphp_hpc_initvars (void);
extern int ibmphp_hpc_readslot (struct slot *, u8, u8 *);
extern int ibmphp_hpc_writeslot (struct slot *, u8);
extern void ibmphp_lock_operations (void);
extern void ibmphp_unlock_operations (void);
extern int ibmphp_hpc_start_poll_thread (void);
extern void ibmphp_hpc_stop_poll_thread (void);
#define HPC_ERROR			0xFF
#define BUS_SPEED			0x30
#define BUS_MODE			0x40
#define BUS_MODE_PCIX			0x01
#define BUS_MODE_PCI			0x00
#define BUS_SPEED_2			0x20
#define BUS_SPEED_1			0x10
#define BUS_SPEED_33			0x00
#define BUS_SPEED_66			0x01
#define BUS_SPEED_100			0x02
#define BUS_SPEED_133			0x03
#define BUS_SPEED_66PCIX		0x04
#define BUS_SPEED_66UNKNOWN		0x05
#define BUS_STATUS_AVAILABLE		0x01
#define BUS_CONTROL_AVAILABLE		0x02
#define SLOT_LATCH_REGS_SUPPORTED	0x10
#define PRGM_MODEL_REV_LEVEL		0xF0
#define MAX_ADAPTER_NONE		0x09
#define HPC_CTLR_ENABLEIRQ	0x00
#define HPC_CTLR_DISABLEIRQ	0x01
#define HPC_SLOT_OFF		0x02
#define HPC_SLOT_ON		0x03
#define HPC_SLOT_ATTNOFF	0x04
#define HPC_SLOT_ATTNON		0x05
#define HPC_CTLR_CLEARIRQ	0x06
#define HPC_CTLR_RESET		0x07
#define HPC_CTLR_IRQSTEER	0x08
#define HPC_BUS_33CONVMODE	0x09
#define HPC_BUS_66CONVMODE	0x0A
#define HPC_BUS_66PCIXMODE	0x0B
#define HPC_BUS_100PCIXMODE	0x0C
#define HPC_BUS_133PCIXMODE	0x0D
#define HPC_ALLSLOT_OFF		0x11
#define HPC_ALLSLOT_ON		0x12
#define HPC_SLOT_BLINKLED	0x13
#define READ_SLOTSTATUS		0x01
#define READ_EXTSLOTSTATUS	0x02
#define READ_BUSSTATUS		0x03
#define READ_CTLRSTATUS		0x04
#define READ_ALLSTAT		0x05
#define READ_ALLSLOT		0x06
#define READ_SLOTLATCHLOWREG	0x07
#define READ_REVLEVEL		0x08
#define READ_HPCOPTIONS		0x09
#define HPC_SLOT_POWER		0x01
#define HPC_SLOT_CONNECT	0x02
#define HPC_SLOT_ATTN		0x04
#define HPC_SLOT_PRSNT2		0x08
#define HPC_SLOT_PRSNT1		0x10
#define HPC_SLOT_PWRGD		0x20
#define HPC_SLOT_BUS_SPEED	0x40
#define HPC_SLOT_LATCH		0x80
#define HPC_SLOT_POWER_OFF	0x00
#define HPC_SLOT_POWER_ON	0x01
#define HPC_SLOT_CONNECTED	0x00
#define HPC_SLOT_DISCONNECTED	0x01
#define HPC_SLOT_ATTN_OFF	0x00
#define HPC_SLOT_ATTN_ON	0x01
#define HPC_SLOT_ATTN_BLINK	0x02
#define HPC_SLOT_EMPTY		0x00
#define HPC_SLOT_PRSNT_7	0x01
#define HPC_SLOT_PRSNT_15	0x02
#define HPC_SLOT_PRSNT_25	0x03
#define HPC_SLOT_PWRGD_FAULT_NONE	0x00
#define HPC_SLOT_PWRGD_GOOD		0x01
#define HPC_SLOT_BUS_SPEED_OK	0x00
#define HPC_SLOT_BUS_SPEED_MISM	0x01
#define HPC_SLOT_LATCH_OPEN	0x01
#define HPC_SLOT_LATCH_CLOSED	0x00
#define HPC_SLOT_PCIX		0x01
#define HPC_SLOT_SPEED1		0x02
#define HPC_SLOT_SPEED2		0x04
#define HPC_SLOT_BLINK_ATTN	0x08
#define HPC_SLOT_RSRVD1		0x10
#define HPC_SLOT_RSRVD2		0x20
#define HPC_SLOT_BUS_MODE	0x40
#define HPC_SLOT_RSRVD3		0x80
#define HPC_SLOT_PCIX_NO	0x00
#define HPC_SLOT_PCIX_YES	0x01
#define HPC_SLOT_SPEED_33	0x00
#define HPC_SLOT_SPEED_66	0x01
#define HPC_SLOT_SPEED_133	0x02
#define HPC_SLOT_ATTN_BLINK_OFF	0x00
#define HPC_SLOT_ATTN_BLINK_ON	0x01
#define HPC_SLOT_BUS_MODE_OK	0x00
#define HPC_SLOT_BUS_MODE_MISM	0x01
#define HPC_CTLR_WORKING	0x01
#define HPC_CTLR_FINISHED	0x02
#define HPC_CTLR_RESULT0	0x04
#define HPC_CTLR_RESULT1	0x08
#define HPC_CTLR_RESULE2	0x10
#define HPC_CTLR_RESULT3	0x20
#define HPC_CTLR_IRQ_ROUTG	0x40
#define HPC_CTLR_IRQ_PENDG	0x80
#define HPC_CTLR_WORKING_NO	0x00
#define HPC_CTLR_WORKING_YES	0x01
#define HPC_CTLR_FINISHED_NO	0x00
#define HPC_CTLR_FINISHED_YES	0x01
#define HPC_CTLR_RESULT_SUCCESS	0x00
#define HPC_CTLR_RESULT_FAILED	0x01
#define HPC_CTLR_RESULT_RSVD	0x02
#define HPC_CTLR_RESULT_NORESP	0x03
#define SLOT_POWER(s)	((u8) ((s & HPC_SLOT_POWER) \
? HPC_SLOT_POWER_ON : HPC_SLOT_POWER_OFF))
#define SLOT_CONNECT(s)	((u8) ((s & HPC_SLOT_CONNECT) \
? HPC_SLOT_DISCONNECTED : HPC_SLOT_CONNECTED))
#define SLOT_ATTN(s,es)	((u8) ((es & HPC_SLOT_BLINK_ATTN) \
? HPC_SLOT_ATTN_BLINK \
: ((s & HPC_SLOT_ATTN) ? HPC_SLOT_ATTN_ON : HPC_SLOT_ATTN_OFF)))
#define SLOT_PRESENT(s)	((u8) ((s & HPC_SLOT_PRSNT1) \
? ((s & HPC_SLOT_PRSNT2) ? HPC_SLOT_EMPTY : HPC_SLOT_PRSNT_15) \
: ((s & HPC_SLOT_PRSNT2) ? HPC_SLOT_PRSNT_25 : HPC_SLOT_PRSNT_7)))
#define SLOT_PWRGD(s)	((u8) ((s & HPC_SLOT_PWRGD) \
? HPC_SLOT_PWRGD_GOOD : HPC_SLOT_PWRGD_FAULT_NONE))
#define SLOT_BUS_SPEED(s)	((u8) ((s & HPC_SLOT_BUS_SPEED) \
? HPC_SLOT_BUS_SPEED_MISM : HPC_SLOT_BUS_SPEED_OK))
#define SLOT_LATCH(s)	((u8) ((s & HPC_SLOT_LATCH) \
? HPC_SLOT_LATCH_CLOSED : HPC_SLOT_LATCH_OPEN))
#define SLOT_PCIX(es)	((u8) ((es & HPC_SLOT_PCIX) \
? HPC_SLOT_PCIX_YES : HPC_SLOT_PCIX_NO))
#define SLOT_SPEED(es)	((u8) ((es & HPC_SLOT_SPEED2) \
? ((es & HPC_SLOT_SPEED1) ? HPC_SLOT_SPEED_133   \
: HPC_SLOT_SPEED_66)   \
: HPC_SLOT_SPEED_33))
#define SLOT_BUS_MODE(es)	((u8) ((es & HPC_SLOT_BUS_MODE) \
? HPC_SLOT_BUS_MODE_MISM : HPC_SLOT_BUS_MODE_OK))
#define CURRENT_BUS_SPEED(s)	((u8) (s & BUS_SPEED_2) \
? ((s & BUS_SPEED_1) ? BUS_SPEED_133 : BUS_SPEED_100) \
: ((s & BUS_SPEED_1) ? BUS_SPEED_66 : BUS_SPEED_33))
#define CURRENT_BUS_MODE(s)	((u8) (s & BUS_MODE) ? BUS_MODE_PCIX : BUS_MODE_PCI)
#define READ_BUS_STATUS(s)	((u8) (s->options & BUS_STATUS_AVAILABLE))
#define READ_BUS_MODE(s)	((s->revision & PRGM_MODEL_REV_LEVEL) >= 0x20)
#define SET_BUS_STATUS(s)	((u8) (s->options & BUS_CONTROL_AVAILABLE))
#define READ_SLOT_LATCH(s)	((u8) (s->options & SLOT_LATCH_REGS_SUPPORTED))
#define CTLR_WORKING(c) ((u8) ((c & HPC_CTLR_WORKING) \
? HPC_CTLR_WORKING_YES : HPC_CTLR_WORKING_NO))
#define CTLR_FINISHED(c) ((u8) ((c & HPC_CTLR_FINISHED) \
? HPC_CTLR_FINISHED_YES : HPC_CTLR_FINISHED_NO))
#define CTLR_RESULT(c) ((u8) ((c & HPC_CTLR_RESULT1)  \
? ((c & HPC_CTLR_RESULT0) ? HPC_CTLR_RESULT_NORESP \
: HPC_CTLR_RESULT_RSVD)  \
: ((c & HPC_CTLR_RESULT0) ? HPC_CTLR_RESULT_FAILED \
: HPC_CTLR_RESULT_SUCCESS)))
#define NEEDTOCHECK_CMDSTATUS(c) ((c == HPC_SLOT_OFF)        || \
(c == HPC_SLOT_ON)         || \
(c == HPC_CTLR_RESET)      || \
(c == HPC_BUS_33CONVMODE)  || \
(c == HPC_BUS_66CONVMODE)  || \
(c == HPC_BUS_66PCIXMODE)  || \
(c == HPC_BUS_100PCIXMODE) || \
(c == HPC_BUS_133PCIXMODE) || \
(c == HPC_ALLSLOT_OFF)     || \
(c == HPC_ALLSLOT_ON))
#define ENABLE		1
#define DISABLE		0
#define CARD_INFO	0x07
#define PCIX133		0x07
#define PCIX66		0x05
#define PCI66		0x04
extern struct pci_bus *ibmphp_pci_bus;
struct pci_func ;
struct slot ;
struct controller ;
extern int ibmphp_init_devno (struct slot **);
extern int ibmphp_do_disable_slot (struct slot *slot_cur);
extern int ibmphp_update_slot_info (struct slot *);
extern int ibmphp_configure_card (struct pci_func *, u8);
extern int ibmphp_unconfigure_card (struct slot **, int);
extern struct hotplug_slot_ops ibmphp_hotplug_slot_ops;
