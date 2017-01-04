#define _KVM_VT_I_H
#define	ITR	0x01
#define	DTR	0x02
#define	IaDTR	0x03
#define IA64_TR_VMM       6
#define IA64_TR_VM_DATA   7
#define RR6 (6UL<<61)
#define RR7 (7UL<<61)
#define	VP_INITIALIZE	1UL
#define	VP_FR_PMC	1UL<<1
#define	VP_OPCODE	1UL<<8
#define	VP_CAUSE	1UL<<9
#define VP_FW_ACC   	1UL<<63
#define	VP_INIT_ENV_INITALIZE  (VP_INITIALIZE | VP_FR_PMC |\
VP_OPCODE | VP_CAUSE | VP_FW_ACC)
#define	VP_INIT_ENV  VP_FR_PMC | VP_OPCODE | VP_CAUSE | VP_FW_ACC
#define		PAL_VP_CREATE   265
#define		PAL_VP_ENV_INFO 266
#define		PAL_VP_EXIT_ENV 267
#define		PAL_VP_INIT_ENV 268
#define		PAL_VP_REGISTER 269
#define		PAL_VP_RESUME   270
#define		PAL_VP_RESTORE  270
#define		PAL_VP_SUSPEND  271
#define		PAL_VP_SAVE	271
#define		PAL_VP_TERMINATE 272
union vac ;
union vdc ;
struct vpd ;
#define PAL_PROC_VM_BIT		(1UL << 40)
#define PAL_PROC_VMSW_BIT	(1UL << 54)
static inline s64 ia64_pal_vp_env_info(u64 *buffer_size,
u64 *vp_env_info)
static inline s64 ia64_pal_vp_exit_env(u64 iva)
static inline s64 ia64_pal_vp_init_env(u64 config_options, u64 pbase_addr,
u64 vbase_addr, u64 *vsa_base)
static inline s64 ia64_pal_vp_restore(u64 *vpd, u64 pal_proc_vector)
static inline s64 ia64_pal_vp_save(u64 *vpd, u64 pal_proc_vector)
#define VPD_VAC_START_OFFSET		0
#define VPD_VDC_START_OFFSET		8
#define VPD_VHPI_START_OFFSET		256
#define VPD_VGR_START_OFFSET		1024
#define VPD_VBGR_START_OFFSET		1152
#define VPD_VNAT_START_OFFSET		1280
#define VPD_VBNAT_START_OFFSET		1288
#define VPD_VCPUID_START_OFFSET		1296
#define VPD_VPSR_START_OFFSET		1424
#define VPD_VPR_START_OFFSET		1432
#define VPD_VRSE_CFLE_START_OFFSET	1440
#define VPD_VCR_START_OFFSET		2048
#define VPD_VTPR_START_OFFSET		2576
#define VPD_VRR_START_OFFSET		3072
#define VPD_VMM_VAIL_START_OFFSET	31744
#define EVENT_MOV_TO_AR			 1
#define EVENT_MOV_TO_AR_IMM		 2
#define EVENT_MOV_FROM_AR		 3
#define EVENT_MOV_TO_CR			 4
#define EVENT_MOV_FROM_CR		 5
#define EVENT_MOV_TO_PSR		 6
#define EVENT_MOV_FROM_PSR		 7
#define EVENT_ITC_D			 8
#define EVENT_ITC_I			 9
#define EVENT_MOV_TO_RR			 10
#define EVENT_MOV_TO_DBR		 11
#define EVENT_MOV_TO_IBR		 12
#define EVENT_MOV_TO_PKR		 13
#define EVENT_MOV_TO_PMC		 14
#define EVENT_MOV_TO_PMD		 15
#define EVENT_ITR_D			 16
#define EVENT_ITR_I			 17
#define EVENT_MOV_FROM_RR		 18
#define EVENT_MOV_FROM_DBR		 19
#define EVENT_MOV_FROM_IBR		 20
#define EVENT_MOV_FROM_PKR		 21
#define EVENT_MOV_FROM_PMC		 22
#define EVENT_MOV_FROM_CPUID		 23
#define EVENT_SSM			 24
#define EVENT_RSM			 25
#define EVENT_PTC_L			 26
#define EVENT_PTC_G			 27
#define EVENT_PTC_GA			 28
#define EVENT_PTR_D			 29
#define EVENT_PTR_I			 30
#define EVENT_THASH			 31
#define EVENT_TTAG			 32
#define EVENT_TPA			 33
#define EVENT_TAK			 34
#define EVENT_PTC_E			 35
#define EVENT_COVER			 36
#define EVENT_RFI			 37
#define EVENT_BSW_0			 38
#define EVENT_BSW_1			 39
#define EVENT_VMSW			 40
#define PAL_VPS_RESUME_NORMAL           0x0000
#define PAL_VPS_RESUME_HANDLER          0x0400
#define PAL_VPS_SYNC_READ               0x0800
#define PAL_VPS_SYNC_WRITE              0x0c00
#define PAL_VPS_SET_PENDING_INTERRUPT   0x1000
#define PAL_VPS_THASH                   0x1400
#define PAL_VPS_TTAG                    0x1800
#define PAL_VPS_RESTORE                 0x1c00
#define PAL_VPS_SAVE                    0x2000
