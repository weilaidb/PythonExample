#define _ASM_IA64_SN_SN_SAL_H
#define  SN_SAL_POD_MODE                           0x02000001
#define  SN_SAL_SYSTEM_RESET                       0x02000002
#define  SN_SAL_PROBE                              0x02000003
#define  SN_SAL_GET_MASTER_NASID                   0x02000004
#define	 SN_SAL_GET_KLCONFIG_ADDR		   0x02000005
#define  SN_SAL_LOG_CE				   0x02000006
#define  SN_SAL_REGISTER_CE			   0x02000007
#define  SN_SAL_GET_PARTITION_ADDR		   0x02000009
#define  SN_SAL_XP_ADDR_REGION			   0x0200000f
#define  SN_SAL_NO_FAULT_ZONE_VIRTUAL		   0x02000010
#define  SN_SAL_NO_FAULT_ZONE_PHYSICAL		   0x02000011
#define  SN_SAL_PRINT_ERROR			   0x02000012
#define  SN_SAL_REGISTER_PMI_HANDLER		   0x02000014
#define  SN_SAL_SET_ERROR_HANDLING_FEATURES	   0x0200001a
#define  SN_SAL_GET_FIT_COMPT			   0x0200001b
#define  SN_SAL_GET_SAPIC_INFO                     0x0200001d
#define  SN_SAL_GET_SN_INFO                        0x0200001e
#define  SN_SAL_CONSOLE_PUTC                       0x02000021
#define  SN_SAL_CONSOLE_GETC                       0x02000022
#define  SN_SAL_CONSOLE_PUTS                       0x02000023
#define  SN_SAL_CONSOLE_GETS                       0x02000024
#define  SN_SAL_CONSOLE_GETS_TIMEOUT               0x02000025
#define  SN_SAL_CONSOLE_POLL                       0x02000026
#define  SN_SAL_CONSOLE_INTR                       0x02000027
#define  SN_SAL_CONSOLE_PUTB			   0x02000028
#define  SN_SAL_CONSOLE_XMIT_CHARS		   0x0200002a
#define  SN_SAL_CONSOLE_READC			   0x0200002b
#define  SN_SAL_SYSCTL_OP			   0x02000030
#define  SN_SAL_SYSCTL_MODID_GET	           0x02000031
#define  SN_SAL_SYSCTL_GET                         0x02000032
#define  SN_SAL_SYSCTL_IOBRICK_MODULE_GET          0x02000033
#define  SN_SAL_SYSCTL_IO_PORTSPEED_GET            0x02000035
#define  SN_SAL_SYSCTL_SLAB_GET                    0x02000036
#define  SN_SAL_BUS_CONFIG		   	   0x02000037
#define  SN_SAL_SYS_SERIAL_GET			   0x02000038
#define  SN_SAL_PARTITION_SERIAL_GET		   0x02000039
#define  SN_SAL_SYSCTL_PARTITION_GET               0x0200003a
#define  SN_SAL_SYSTEM_POWER_DOWN		   0x0200003b
#define  SN_SAL_GET_MASTER_BASEIO_NASID		   0x0200003c
#define  SN_SAL_COHERENCE                          0x0200003d
#define  SN_SAL_MEMPROTECT                         0x0200003e
#define  SN_SAL_SYSCTL_FRU_CAPTURE		   0x0200003f
#define  SN_SAL_SYSCTL_IOBRICK_PCI_OP		   0x02000042
#define	 SN_SAL_IROUTER_OP			   0x02000043
#define  SN_SAL_SYSCTL_EVENT                       0x02000044
#define  SN_SAL_IOIF_INTERRUPT			   0x0200004a
#define  SN_SAL_HWPERF_OP			   0x02000050
#define  SN_SAL_IOIF_ERROR_INTERRUPT		   0x02000051
#define  SN_SAL_IOIF_PCI_SAFE			   0x02000052
#define  SN_SAL_IOIF_SLOT_ENABLE		   0x02000053
#define  SN_SAL_IOIF_SLOT_DISABLE		   0x02000054
#define  SN_SAL_IOIF_GET_HUBDEV_INFO		   0x02000055
#define  SN_SAL_IOIF_GET_PCIBUS_INFO		   0x02000056
#define  SN_SAL_IOIF_GET_PCIDEV_INFO		   0x02000057
#define  SN_SAL_IOIF_GET_WIDGET_DMAFLUSH_LIST	   0x02000058
#define  SN_SAL_IOIF_GET_DEVICE_DMAFLUSH_LIST	   0x0200005a
#define SN_SAL_IOIF_INIT			   0x0200005f
#define SN_SAL_HUB_ERROR_INTERRUPT		   0x02000060
#define SN_SAL_BTE_RECOVER			   0x02000061
#define SN_SAL_RESERVED_DO_NOT_USE		   0x02000062
#define SN_SAL_IOIF_GET_PCI_TOPOLOGY		   0x02000064
#define  SN_SAL_GET_PROM_FEATURE_SET		   0x02000065
#define  SN_SAL_SET_OS_FEATURE_SET		   0x02000066
#define  SN_SAL_INJECT_ERROR			   0x02000067
#define  SN_SAL_SET_CPU_NUMBER			   0x02000068
#define  SN_SAL_KERNEL_LAUNCH_EVENT		   0x02000069
#define  SN_SAL_WATCHLIST_ALLOC			   0x02000070
#define  SN_SAL_WATCHLIST_FREE			   0x02000071
#define SAL_CONSOLE_INTR_OFF    0
#define SAL_CONSOLE_INTR_ON     1
#define SAL_CONSOLE_INTR_STATUS 2
#define SAL_CONSOLE_INTR_XMIT	1
#define SAL_CONSOLE_INTR_RECV	2
#define SAL_INTR_ALLOC		1
#define SAL_INTR_FREE		2
#define SAL_INTR_REDIRECT	3
#define SAL_SYSCTL_OP_IOBOARD		0x0001
#define SAL_SYSCTL_OP_TIO_JLCK_RST      0x0002
#define SAL_IROUTER_OPEN	0
#define SAL_IROUTER_CLOSE	1
#define SAL_IROUTER_SEND	2
#define SAL_IROUTER_RECV	3
#define SAL_IROUTER_INTR_STATUS	4
#define SAL_IROUTER_INTR_ON	5
#define SAL_IROUTER_INTR_OFF	6
#define SAL_IROUTER_INIT	7
#define SAL_IROUTER_INTR_XMIT	SAL_CONSOLE_INTR_XMIT
#define SAL_IROUTER_INTR_RECV	SAL_CONSOLE_INTR_RECV
#define SAL_ERR_FEAT_MCA_SLV_TO_OS_INIT_SLV	0x1
#define SAL_ERR_FEAT_LOG_SBES			0x2
#define SAL_ERR_FEAT_MFR_OVERRIDE		0x4
#define SAL_ERR_FEAT_SBE_THRESHOLD		0xffff0000
#define SALRET_MORE_PASSES	1
#define SALRET_OK		0
#define SALRET_NOT_IMPLEMENTED	(-1)
#define SALRET_INVALID_ARG	(-2)
#define SALRET_ERROR		(-3)
#define SN_SAL_FAKE_PROM			   0x02009999
static inline u32
sn_sal_rev(void)
static inline u64
ia64_sn_get_console_nasid(void)
static inline u64
ia64_sn_get_master_baseio_nasid(void)
static inline void *
ia64_sn_get_klconfig_addr(nasid_t nasid)
static inline u64
ia64_sn_console_getc(int *ch)
static inline u64
ia64_sn_console_readc(void)
static inline u64
ia64_sn_console_putc(char ch)
static inline u64
ia64_sn_console_putb(const char *buf, int len)
static inline u64
ia64_sn_plat_specific_err_print(int (*hook)(const char*, ...), char *rec)
static inline u64
ia64_sn_plat_cpei_handler(void)
static inline u64
ia64_sn_plat_set_error_handling_features(void)
static inline u64
ia64_sn_console_check(int *result)
static inline u64
ia64_sn_console_intr_status(void)
static inline void
ia64_sn_console_intr_enable(u64 intr)
static inline void
ia64_sn_console_intr_disable(u64 intr)
static inline u64
ia64_sn_console_xmit_chars(char *buf, int len)
static inline u64
ia64_sn_sysctl_iobrick_module_get(nasid_t nasid, int *result)
static inline u64
ia64_sn_pod_mode(void)
static inline u64
ia64_sn_probe_mem(long addr, long size, void *data_ptr)
static inline u64
ia64_sn_sys_serial_get(char *buf)
extern char sn_system_serial_number_string[];
extern u64 sn_partition_serial_number;
static inline char *
sn_system_serial_number(void)
static inline u64
ia64_sn_partition_serial_get(void)
static inline u64
sn_partition_serial_number_val(void)
static inline partid_t
ia64_sn_sysctl_partition_get(nasid_t nasid)
static inline s64
sn_partition_reserved_page_pa(u64 buf, u64 *cookie, u64 *addr, u64 *len)
static inline int
sn_register_xp_addr_region(u64 paddr, u64 len, int operation)
static inline int
sn_register_nofault_code(u64 start_addr, u64 end_addr, u64 return_addr,
int virtual, int operation)
static inline int
sn_register_pmi_handler(u64 handler, u64 global_pointer)
static inline int
sn_change_coherence(u64 *new_domain, u64 *old_domain)
static inline int
sn_change_memprotect(u64 paddr, u64 len, u64 perms, u64 *nasid_array)
#define SN_MEMPROT_ACCESS_CLASS_0		0x14a080
#define SN_MEMPROT_ACCESS_CLASS_1		0x2520c2
#define SN_MEMPROT_ACCESS_CLASS_2		0x14a1ca
#define SN_MEMPROT_ACCESS_CLASS_3		0x14a290
#define SN_MEMPROT_ACCESS_CLASS_6		0x084080
#define SN_MEMPROT_ACCESS_CLASS_7		0x021080
static inline void
ia64_sn_power_down(void)
static inline u64
ia64_sn_fru_capture(void)
static inline u64
ia64_sn_sysctl_iobrick_pci_op(nasid_t n, u64 connection_type,
u64 bus, char slot,
u64 action)
static inline int
ia64_sn_irtr_open(nasid_t nasid)
static inline int
ia64_sn_irtr_close(nasid_t nasid, int subch)
static inline int
ia64_sn_irtr_recv(nasid_t nasid, int subch, char *buf, int *len)
static inline int
ia64_sn_irtr_send(nasid_t nasid, int subch, char *buf, int len)
static inline int
ia64_sn_irtr_intr(nasid_t nasid, int subch)
static inline int
ia64_sn_irtr_intr_enable(nasid_t nasid, int subch, u64 intr)
static inline int
ia64_sn_irtr_intr_disable(nasid_t nasid, int subch, u64 intr)
static inline int
ia64_sn_sysctl_event_init(nasid_t nasid)
static inline int
ia64_sn_sysctl_tio_clock_reset(nasid_t nasid)
static inline long
ia64_sn_sysctl_ioboard_get(nasid_t nasid, u16 *ioboard)
static inline int
ia64_sn_get_fit_compt(u64 nasid, u64 index, void *fitentry, void *banbuf,
u64 banlen)
static inline int
ia64_sn_irtr_init(nasid_t nasid, void *buf, int len)
static inline u64
ia64_sn_get_sapic_info(int sapicid, int *nasid, int *subnode, int *slice)
static inline u64
ia64_sn_get_sn_info(int fc, u8 *shubtype, u16 *nasid_bitmask, u8 *nasid_shift,
u8 *systemsize, u8 *sharing_domain_size, u8 *partid, u8 *coher, u8 *reg)
static inline int
ia64_sn_hwperf_op(nasid_t nasid, u64 opcode, u64 a0, u64 a1, u64 a2,
u64 a3, u64 a4, int *v0)
static inline int
ia64_sn_ioif_get_pci_topology(u64 buf, u64 len)
static inline int
ia64_sn_bte_recovery(nasid_t nasid)
static inline int
ia64_sn_is_fake_prom(void)
static inline int
ia64_sn_get_prom_feature_set(int set, unsigned long *feature_set)
static inline int
ia64_sn_set_os_feature(int feature)
static inline int
sn_inject_error(u64 paddr, u64 *data, u64 *ecc)
static inline int
ia64_sn_set_cpu_number(int cpu)
static inline int
ia64_sn_kernel_launch_event(void)
union sn_watchlist_u ;
static inline int
sn_mq_watchlist_alloc(int blade, void *mq, unsigned int mq_size,
unsigned long *intr_mmr_offset)
static inline int
sn_mq_watchlist_free(int blade, int watchlist_num)
