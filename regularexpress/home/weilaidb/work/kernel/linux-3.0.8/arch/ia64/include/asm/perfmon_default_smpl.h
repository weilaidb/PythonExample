#define __PERFMON_DEFAULT_SMPL_H__ 1
#define PFM_DEFAULT_SMPL_UUID
typedef struct  pfm_default_smpl_arg_t;
typedef struct  pfm_default_smpl_ctx_arg_t;
typedef struct  pfm_default_smpl_hdr_t;
typedef struct  pfm_default_smpl_entry_t;
#define PFM_DEFAULT_MAX_PMDS		64
#define PFM_DEFAULT_MAX_ENTRY_SIZE	(sizeof(pfm_default_smpl_entry_t)+(sizeof(unsigned long)*PFM_DEFAULT_MAX_PMDS))
#define PFM_DEFAULT_SMPL_MIN_BUF_SIZE	(sizeof(pfm_default_smpl_hdr_t)+PFM_DEFAULT_MAX_ENTRY_SIZE)
#define PFM_DEFAULT_SMPL_VERSION_MAJ	2U
#define PFM_DEFAULT_SMPL_VERSION_MIN	0U
#define PFM_DEFAULT_SMPL_VERSION	(((PFM_DEFAULT_SMPL_VERSION_MAJ&0xffff)<<16)|(PFM_DEFAULT_SMPL_VERSION_MIN & 0xffff))
