#define _ASM_S390_IPL_H
#define IPL_PARMBLOCK_ORIGIN	0x2000
#define IPL_PARM_BLK_FCP_LEN (sizeof(struct ipl_list_hdr) + \
sizeof(struct ipl_block_fcp))
#define IPL_PARM_BLK0_FCP_LEN (sizeof(struct ipl_block_fcp) + 8)
#define IPL_PARM_BLK_CCW_LEN (sizeof(struct ipl_list_hdr) + \
sizeof(struct ipl_block_ccw))
#define IPL_PARM_BLK0_CCW_LEN (sizeof(struct ipl_block_ccw) + 8)
#define IPL_MAX_SUPPORTED_VERSION (0)
#define IPL_PARMBLOCK_START	((struct ipl_parameter_block *) \
IPL_PARMBLOCK_ORIGIN)
#define IPL_PARMBLOCK_SIZE	(IPL_PARMBLOCK_START->hdr.len)
struct ipl_list_hdr  __attribute__((packed));
struct ipl_block_fcp  __attribute__((packed));
#define DIAG308_VMPARM_SIZE	64
#define DIAG308_SCPDATA_SIZE	(PAGE_SIZE - (sizeof(struct ipl_list_hdr) + \
offsetof(struct ipl_block_fcp, scp_data)))
struct ipl_block_ccw  __attribute__((packed));
struct ipl_parameter_block  __attribute__((packed,aligned(4096)));
extern u32 ipl_flags;
extern u32 dump_prefix_page;
extern unsigned int zfcpdump_prefix_array[];
extern void do_reipl(void);
extern void do_halt(void);
extern void do_poff(void);
extern void ipl_save_parameters(void);
extern void ipl_update_parameters(void);
extern size_t append_ipl_vmparm(char *, size_t);
extern size_t append_ipl_scpdata(char *, size_t);
enum ;
enum ipl_type ;
struct ipl_info
;
extern struct ipl_info ipl_info;
extern void setup_ipl(void);
enum diag308_subcode  ;
enum diag308_ipl_type ;
enum diag308_opt ;
enum diag308_flags ;
enum diag308_vm_flags ;
enum diag308_rc ;
extern int diag308(unsigned long subcode, void *addr);
