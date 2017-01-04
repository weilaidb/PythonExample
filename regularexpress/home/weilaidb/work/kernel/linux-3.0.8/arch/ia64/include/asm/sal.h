#define _ASM_IA64_SAL_H
#define IA64_SAL_PLATFORM_FEATURE_BUS_LOCK_BIT		0
#define IA64_SAL_PLATFORM_FEATURE_IRQ_REDIR_HINT_BIT	1
#define IA64_SAL_PLATFORM_FEATURE_IPI_REDIR_HINT_BIT	2
#define IA64_SAL_PLATFORM_FEATURE_ITC_DRIFT_BIT	 	3
#define IA64_SAL_PLATFORM_FEATURE_BUS_LOCK	  (1<<IA64_SAL_PLATFORM_FEATURE_BUS_LOCK_BIT)
#define IA64_SAL_PLATFORM_FEATURE_IRQ_REDIR_HINT (1<<IA64_SAL_PLATFORM_FEATURE_IRQ_REDIR_HINT_BIT)
#define IA64_SAL_PLATFORM_FEATURE_IPI_REDIR_HINT (1<<IA64_SAL_PLATFORM_FEATURE_IPI_REDIR_HINT_BIT)
#define IA64_SAL_PLATFORM_FEATURE_ITC_DRIFT	  (1<<IA64_SAL_PLATFORM_FEATURE_ITC_DRIFT_BIT)
extern spinlock_t sal_lock;
#define __IA64_FW_CALL(entry,result,a0,a1,a2,a3,a4,a5,a6,a7)	\
result = (*entry)(a0,a1,a2,a3,a4,a5,a6,a7)
# define IA64_FW_CALL(entry,result,args...) do  while (0)
# define SAL_CALL(result,args...)			\
IA64_FW_CALL(ia64_sal, result, args);
# define SAL_CALL_NOLOCK(result,args...) do  while (0)
# define SAL_CALL_REENTRANT(result,args...) do  while (0)
#define SAL_SET_VECTORS			0x01000000
#define SAL_GET_STATE_INFO		0x01000001
#define SAL_GET_STATE_INFO_SIZE		0x01000002
#define SAL_CLEAR_STATE_INFO		0x01000003
#define SAL_MC_RENDEZ			0x01000004
#define SAL_MC_SET_PARAMS		0x01000005
#define SAL_REGISTER_PHYSICAL_ADDR	0x01000006
#define SAL_CACHE_FLUSH			0x01000008
#define SAL_CACHE_INIT			0x01000009
#define SAL_PCI_CONFIG_READ		0x01000010
#define SAL_PCI_CONFIG_WRITE		0x01000011
#define SAL_FREQ_BASE			0x01000012
#define SAL_PHYSICAL_ID_INFO		0x01000013
#define SAL_UPDATE_PAL			0x01000020
struct ia64_sal_retval ;
typedef struct ia64_sal_retval (*ia64_sal_handler) (u64, ...);
enum ;
struct ia64_sal_systab ;
enum sal_systab_entry_type ;
#define SAL_DESC_SIZE(type)	"\060\040\020\040\020\020"[(unsigned) type]
typedef struct ia64_sal_desc_entry_point ia64_sal_desc_entry_point_t;
typedef struct ia64_sal_desc_memory  ia64_sal_desc_memory_t;
typedef struct ia64_sal_desc_platform_feature  ia64_sal_desc_platform_feature_t;
typedef struct ia64_sal_desc_tr  ia64_sal_desc_tr_t;
typedef struct ia64_sal_desc_ptc  ia64_sal_desc_ptc_t;
typedef struct ia64_sal_ptc_domain_info  ia64_sal_ptc_domain_info_t;
typedef struct ia64_sal_ptc_domain_proc_entry  ia64_sal_ptc_domain_proc_entry_t;
#define IA64_SAL_AP_EXTERNAL_INT 0
typedef struct ia64_sal_desc_ap_wakeup  ia64_sal_desc_ap_wakeup_t ;
extern ia64_sal_handler ia64_sal;
extern struct ia64_sal_desc_ptc *ia64_ptc_domain_info;
extern unsigned short sal_revision;
extern unsigned short sal_version;
#define SAL_VERSION_CODE(major, minor) ((bin2bcd(major) << 8) | bin2bcd(minor))
extern const char *ia64_sal_strerror (long status);
extern void ia64_sal_init (struct ia64_sal_systab *sal_systab);
enum ;
enum ;
enum ;
enum ;
#define	SAL_MC_PARAM_RZ_ALWAYS		0x1
#define	SAL_MC_PARAM_BINIT_ESCALATE	0x10
#define SAL_PROC_DEV_ERR_SECT_GUID  \
EFI_GUID(0xe429faf1, 0x3cb7, 0x11d4, 0xbc, 0xa7, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81)
#define SAL_PLAT_MEM_DEV_ERR_SECT_GUID  \
EFI_GUID(0xe429faf2, 0x3cb7, 0x11d4, 0xbc, 0xa7, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81)
#define SAL_PLAT_SEL_DEV_ERR_SECT_GUID  \
EFI_GUID(0xe429faf3, 0x3cb7, 0x11d4, 0xbc, 0xa7, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81)
#define SAL_PLAT_PCI_BUS_ERR_SECT_GUID  \
EFI_GUID(0xe429faf4, 0x3cb7, 0x11d4, 0xbc, 0xa7, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81)
#define SAL_PLAT_SMBIOS_DEV_ERR_SECT_GUID  \
EFI_GUID(0xe429faf5, 0x3cb7, 0x11d4, 0xbc, 0xa7, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81)
#define SAL_PLAT_PCI_COMP_ERR_SECT_GUID  \
EFI_GUID(0xe429faf6, 0x3cb7, 0x11d4, 0xbc, 0xa7, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81)
#define SAL_PLAT_SPECIFIC_ERR_SECT_GUID  \
EFI_GUID(0xe429faf7, 0x3cb7, 0x11d4, 0xbc, 0xa7, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81)
#define SAL_PLAT_HOST_CTLR_ERR_SECT_GUID  \
EFI_GUID(0xe429faf8, 0x3cb7, 0x11d4, 0xbc, 0xa7, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81)
#define SAL_PLAT_BUS_ERR_SECT_GUID  \
EFI_GUID(0xe429faf9, 0x3cb7, 0x11d4, 0xbc, 0xa7, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81)
#define PROCESSOR_ABSTRACTION_LAYER_OVERWRITE_GUID \
EFI_GUID(0x6cb0a200, 0x893a, 0x11da, 0x96, 0xd2, 0x0, 0x10, 0x83, 0xff, \
0xca, 0x4d)
#define MAX_CACHE_ERRORS	6
#define MAX_TLB_ERRORS		6
#define MAX_BUS_ERRORS		1
typedef struct sal_log_revision  sal_log_revision_t;
typedef struct sal_log_timestamp  sal_log_timestamp_t;
typedef struct sal_log_record_header  sal_log_record_header_t;
#define sal_log_severity_recoverable	0
#define sal_log_severity_fatal		1
#define sal_log_severity_corrected	2
#define ERI_NOT_VALID		0x0
#define ERI_NOT_ACCESSIBLE	0x30
#define ERI_CONTAINMENT_WARN	0x22
#define ERI_UNCORRECTED_ERROR	0x20
#define ERI_COMPONENT_RESET	0x24
#define ERI_CORR_ERROR_LOG	0x21
#define ERI_CORR_ERROR_THRESH	0x29
typedef struct sal_log_sec_header  sal_log_section_hdr_t;
typedef struct sal_log_mod_error_info  sal_log_mod_error_info_t;
typedef struct sal_processor_static_info  sal_processor_static_info_t;
struct sal_cpuid_info ;
typedef struct sal_log_processor_info  sal_log_processor_info_t;
#define SAL_LPI_PSI_INFO(l)									\
()
typedef struct sal_log_mem_dev_err_info  sal_log_mem_dev_err_info_t;
typedef struct sal_log_sel_dev_err_info  sal_log_sel_dev_err_info_t;
typedef struct sal_log_pci_bus_err_info  sal_log_pci_bus_err_info_t;
typedef struct sal_log_smbios_dev_err_info  sal_log_smbios_dev_err_info_t;
typedef struct sal_log_pci_comp_err_info  sal_log_pci_comp_err_info_t;
typedef struct sal_log_plat_specific_err_info  sal_log_plat_specific_err_info_t;
typedef struct sal_log_host_ctlr_err_info  sal_log_host_ctlr_err_info_t;
typedef struct sal_log_plat_bus_err_info  sal_log_plat_bus_err_info_t;
typedef union sal_log_platform_err_info  sal_log_platform_err_info_t;
typedef struct err_rec  ia64_err_rec_t;
extern s64 ia64_sal_cache_flush (u64 cache_type);
extern void __init check_sal_cache_flush (void);
static inline s64
ia64_sal_cache_init (void)
static inline s64
ia64_sal_clear_state_info (u64 sal_info_type)
static inline u64
ia64_sal_get_state_info (u64 sal_info_type, u64 *sal_info)
static inline u64
ia64_sal_get_state_info_size (u64 sal_info_type)
static inline s64
ia64_sal_mc_rendez (void)
static inline struct ia64_sal_retval
ia64_sal_mc_set_params (u64 param_type, u64 i_or_m, u64 i_or_m_val, u64 timeout, u64 rz_always)
static inline s64
ia64_sal_pci_config_read (u64 pci_config_addr, int type, u64 size, u64 *value)
static inline s64
ia64_sal_pci_config_write (u64 pci_config_addr, int type, u64 size, u64 value)
static inline s64
ia64_sal_register_physical_addr (u64 phys_entry, u64 phys_addr)
static inline s64
ia64_sal_set_vectors (u64 vector_type,
u64 handler_addr1, u64 gp1, u64 handler_len1,
u64 handler_addr2, u64 gp2, u64 handler_len2)
static inline s64
ia64_sal_update_pal (u64 param_buf, u64 scratch_buf, u64 scratch_buf_size,
u64 *error_code, u64 *scratch_buf_size_needed)
static inline s64
ia64_sal_physical_id_info(u16 *splid)
extern unsigned long sal_platform_features;
extern int (*salinfo_platform_oemdata)(const u8 *, u8 **, u64 *);
struct sal_ret_values ;
#define IA64_SAL_OEMFUNC_MIN		0x02000000
#define IA64_SAL_OEMFUNC_MAX		0x03ffffff
extern int ia64_sal_oemcall(struct ia64_sal_retval *, u64, u64, u64, u64, u64,
u64, u64, u64);
extern int ia64_sal_oemcall_nolock(struct ia64_sal_retval *, u64, u64, u64,
u64, u64, u64, u64, u64);
extern int ia64_sal_oemcall_reentrant(struct ia64_sal_retval *, u64, u64, u64,
u64, u64, u64, u64, u64);
extern long
ia64_sal_freq_base (unsigned long which, unsigned long *ticks_per_second,
unsigned long *drift_info);
struct sal_to_os_boot ;
extern struct sal_to_os_boot sal_boot_rendez_state[NR_CPUS];
extern void ia64_jump_to_sal(struct sal_to_os_boot *);
extern void ia64_sal_handler_init(void *entry_point, void *gpval);
#define PALO_MAX_TLB_PURGES	0xFFFF
#define PALO_SIG	"PALO"
struct palo_table ;
#define NPTCG_FROM_PAL			0
#define NPTCG_FROM_PALO			1
#define NPTCG_FROM_KERNEL_PARAMETER	2
