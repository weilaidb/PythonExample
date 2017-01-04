#define LPFC_BSG_VENDOR_SET_CT_EVENT		1
#define LPFC_BSG_VENDOR_GET_CT_EVENT		2
#define LPFC_BSG_VENDOR_SEND_MGMT_RESP		3
#define LPFC_BSG_VENDOR_DIAG_MODE		4
#define LPFC_BSG_VENDOR_DIAG_RUN_LOOPBACK	5
#define LPFC_BSG_VENDOR_GET_MGMT_REV		6
#define LPFC_BSG_VENDOR_MBOX			7
#define LPFC_BSG_VENDOR_MENLO_CMD		8
#define LPFC_BSG_VENDOR_MENLO_DATA		9
#define LPFC_BSG_VENDOR_DIAG_MODE_END		10
#define LPFC_BSG_VENDOR_LINK_DIAG_TEST		11
struct set_ct_event ;
struct get_ct_event ;
struct get_ct_event_reply ;
struct send_mgmt_resp ;
#define INTERNAL_LOOP_BACK 0x1
#define EXTERNAL_LOOP_BACK 0x2
struct diag_mode_set ;
struct sli4_link_diag ;
struct diag_mode_test ;
struct diag_status ;
#define LPFC_WWNN_TYPE		0
#define LPFC_WWPN_TYPE		1
struct get_mgmt_rev ;
#define MANAGEMENT_MAJOR_REV   1
#define MANAGEMENT_MINOR_REV   0
struct MgmtRevInfo ;
struct get_mgmt_rev_reply ;
#define BSG_MBOX_SIZE 4096
struct dfc_mbox_req ;
struct menlo_command ;
struct menlo_response ;
#define bsg_bf_get_le32(name, ptr) \
((le32_to_cpu((ptr)->name##_WORD) >> name##_SHIFT) & name##_MASK)
#define bsg_bf_get(name, ptr) \
(((ptr)->name##_WORD >> name##_SHIFT) & name##_MASK)
#define bsg_bf_set_le32(name, ptr, value) \
((ptr)->name##_WORD = cpu_to_le32(((((value) & \
name##_MASK) << name##_SHIFT) | (le32_to_cpu((ptr)->name##_WORD) & \
~(name##_MASK << name##_SHIFT)))))
#define bsg_bf_set(name, ptr, value) \
((ptr)->name##_WORD = ((((value) & name##_MASK) << name##_SHIFT) | \
((ptr)->name##_WORD & ~(name##_MASK << name##_SHIFT))))
struct lpfc_sli_config_mse ;
struct lpfc_sli_config_hbd ;
struct lpfc_sli_config_hdr ;
struct lpfc_sli_config_emb0_subsys ;
struct lpfc_sli_config_emb1_subsys ;
struct lpfc_sli_config_mbox ;
#define SLI_CONFIG_NOT_HANDLED		0
#define SLI_CONFIG_HANDLED		1
