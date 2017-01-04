#define _ASM_S390_SCSW_H_
struct cmd_scsw  __attribute__ ((packed));
struct tm_scsw  __attribute__ ((packed));
union scsw  __attribute__ ((packed));
#define SCSW_FCTL_CLEAR_FUNC	 0x1
#define SCSW_FCTL_HALT_FUNC	 0x2
#define SCSW_FCTL_START_FUNC	 0x4
#define SCSW_ACTL_SUSPENDED	 0x1
#define SCSW_ACTL_DEVACT	 0x2
#define SCSW_ACTL_SCHACT	 0x4
#define SCSW_ACTL_CLEAR_PEND	 0x8
#define SCSW_ACTL_HALT_PEND	 0x10
#define SCSW_ACTL_START_PEND	 0x20
#define SCSW_ACTL_RESUME_PEND	 0x40
#define SCSW_STCTL_STATUS_PEND	 0x1
#define SCSW_STCTL_SEC_STATUS	 0x2
#define SCSW_STCTL_PRIM_STATUS	 0x4
#define SCSW_STCTL_INTER_STATUS	 0x8
#define SCSW_STCTL_ALERT_STATUS	 0x10
#define DEV_STAT_ATTENTION	 0x80
#define DEV_STAT_STAT_MOD	 0x40
#define DEV_STAT_CU_END		 0x20
#define DEV_STAT_BUSY		 0x10
#define DEV_STAT_CHN_END	 0x08
#define DEV_STAT_DEV_END	 0x04
#define DEV_STAT_UNIT_CHECK	 0x02
#define DEV_STAT_UNIT_EXCEP	 0x01
#define SCHN_STAT_PCI		 0x80
#define SCHN_STAT_INCORR_LEN	 0x40
#define SCHN_STAT_PROG_CHECK	 0x20
#define SCHN_STAT_PROT_CHECK	 0x10
#define SCHN_STAT_CHN_DATA_CHK	 0x08
#define SCHN_STAT_CHN_CTRL_CHK	 0x04
#define SCHN_STAT_INTF_CTRL_CHK	 0x02
#define SCHN_STAT_CHAIN_CHECK	 0x01
#define SNS0_CMD_REJECT		0x80
#define SNS_CMD_REJECT		SNS0_CMD_REJEC
#define SNS0_INTERVENTION_REQ	0x40
#define SNS0_BUS_OUT_CHECK	0x20
#define SNS0_EQUIPMENT_CHECK	0x10
#define SNS0_DATA_CHECK		0x08
#define SNS0_OVERRUN		0x04
#define SNS0_INCOMPL_DOMAIN	0x01
#define SNS1_PERM_ERR		0x80
#define SNS1_INV_TRACK_FORMAT	0x40
#define SNS1_EOC		0x20
#define SNS1_MESSAGE_TO_OPER	0x10
#define SNS1_NO_REC_FOUND	0x08
#define SNS1_FILE_PROTECTED	0x04
#define SNS1_WRITE_INHIBITED	0x02
#define SNS1_INPRECISE_END	0x01
#define SNS2_REQ_INH_WRITE	0x80
#define SNS2_CORRECTABLE	0x40
#define SNS2_FIRST_LOG_ERR	0x20
#define SNS2_ENV_DATA_PRESENT	0x10
#define SNS2_INPRECISE_END	0x04
static inline int scsw_is_tm(union scsw *scsw)
static inline u32 scsw_key(union scsw *scsw)
static inline u32 scsw_eswf(union scsw *scsw)
static inline u32 scsw_cc(union scsw *scsw)
static inline u32 scsw_ectl(union scsw *scsw)
static inline u32 scsw_pno(union scsw *scsw)
static inline u32 scsw_fctl(union scsw *scsw)
static inline u32 scsw_actl(union scsw *scsw)
static inline u32 scsw_stctl(union scsw *scsw)
static inline u32 scsw_dstat(union scsw *scsw)
static inline u32 scsw_cstat(union scsw *scsw)
static inline int scsw_cmd_is_valid_key(union scsw *scsw)
static inline int scsw_cmd_is_valid_sctl(union scsw *scsw)
static inline int scsw_cmd_is_valid_eswf(union scsw *scsw)
static inline int scsw_cmd_is_valid_cc(union scsw *scsw)
static inline int scsw_cmd_is_valid_fmt(union scsw *scsw)
static inline int scsw_cmd_is_valid_pfch(union scsw *scsw)
static inline int scsw_cmd_is_valid_isic(union scsw *scsw)
static inline int scsw_cmd_is_valid_alcc(union scsw *scsw)
static inline int scsw_cmd_is_valid_ssi(union scsw *scsw)
static inline int scsw_cmd_is_valid_zcc(union scsw *scsw)
static inline int scsw_cmd_is_valid_ectl(union scsw *scsw)
static inline int scsw_cmd_is_valid_pno(union scsw *scsw)
static inline int scsw_cmd_is_valid_fctl(union scsw *scsw)
static inline int scsw_cmd_is_valid_actl(union scsw *scsw)
static inline int scsw_cmd_is_valid_stctl(union scsw *scsw)
static inline int scsw_cmd_is_valid_dstat(union scsw *scsw)
static inline int scsw_cmd_is_valid_cstat(union scsw *scsw)
static inline int scsw_tm_is_valid_key(union scsw *scsw)
static inline int scsw_tm_is_valid_eswf(union scsw *scsw)
static inline int scsw_tm_is_valid_cc(union scsw *scsw)
static inline int scsw_tm_is_valid_fmt(union scsw *scsw)
static inline int scsw_tm_is_valid_x(union scsw *scsw)
static inline int scsw_tm_is_valid_q(union scsw *scsw)
static inline int scsw_tm_is_valid_ectl(union scsw *scsw)
static inline int scsw_tm_is_valid_pno(union scsw *scsw)
static inline int scsw_tm_is_valid_fctl(union scsw *scsw)
static inline int scsw_tm_is_valid_actl(union scsw *scsw)
static inline int scsw_tm_is_valid_stctl(union scsw *scsw)
static inline int scsw_tm_is_valid_dstat(union scsw *scsw)
static inline int scsw_tm_is_valid_cstat(union scsw *scsw)
static inline int scsw_tm_is_valid_fcxs(union scsw *scsw)
static inline int scsw_tm_is_valid_schxs(union scsw *scsw)
static inline int scsw_is_valid_actl(union scsw *scsw)
static inline int scsw_is_valid_cc(union scsw *scsw)
static inline int scsw_is_valid_cstat(union scsw *scsw)
static inline int scsw_is_valid_dstat(union scsw *scsw)
static inline int scsw_is_valid_ectl(union scsw *scsw)
static inline int scsw_is_valid_eswf(union scsw *scsw)
static inline int scsw_is_valid_fctl(union scsw *scsw)
static inline int scsw_is_valid_key(union scsw *scsw)
static inline int scsw_is_valid_pno(union scsw *scsw)
static inline int scsw_is_valid_stctl(union scsw *scsw)
static inline int scsw_cmd_is_solicited(union scsw *scsw)
static inline int scsw_tm_is_solicited(union scsw *scsw)
static inline int scsw_is_solicited(union scsw *scsw)
