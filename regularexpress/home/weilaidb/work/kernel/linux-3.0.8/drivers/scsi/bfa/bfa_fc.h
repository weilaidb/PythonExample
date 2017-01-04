#define __BFA_FC_H__
typedef u64 wwn_t;
#define WWN_NULL	(0)
#define FC_SYMNAME_MAX	256
#define MAC_ADDRLEN	(6)
struct mac_s ;
#define mac_t struct mac_s
#define SCSI_MAX_CDBLEN     16
struct scsi_cdb_s ;
#define SCSI_STATUS_GOOD                   0x00
#define SCSI_STATUS_CHECK_CONDITION        0x02
#define SCSI_STATUS_CONDITION_MET          0x04
#define SCSI_STATUS_BUSY                   0x08
#define SCSI_STATUS_INTERMEDIATE           0x10
#define SCSI_STATUS_ICM                    0x14
#define SCSI_STATUS_RESERVATION_CONFLICT   0x18
#define SCSI_STATUS_COMMAND_TERMINATED     0x22
#define SCSI_STATUS_QUEUE_FULL             0x28
#define SCSI_STATUS_ACA_ACTIVE             0x30
#define SCSI_MAX_ALLOC_LEN      0xFF
struct fchs_s ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
#define FC_DOMAIN_MASK  0xFF0000
#define FC_DOMAIN_SHIFT 16
#define FC_AREA_MASK    0x00FF00
#define FC_AREA_SHIFT   8
#define FC_PORT_MASK    0x0000FF
#define FC_PORT_SHIFT   0
#define FC_GET_DOMAIN(p)	(((p) & FC_DOMAIN_MASK) >> FC_DOMAIN_SHIFT)
#define FC_GET_AREA(p)		(((p) & FC_AREA_MASK) >> FC_AREA_SHIFT)
#define FC_GET_PORT(p)		(((p) & FC_PORT_MASK) >> FC_PORT_SHIFT)
#define FC_DOMAIN_CTRLR(p)	(FC_DOMAIN_CONTROLLER_MASK | (FC_GET_DOMAIN(p)))
enum ;
struct fc_els_cmd_s ;
enum ;
enum ;
enum ;
struct fc_plogi_csp_s ;
struct fc_plogi_clp_s ;
#define FLOGI_VVL_BRCD    0x42524344
struct fc_logi_s ;
struct fc_logo_s ;
struct fc_adisc_s ;
struct fc_exch_status_blk_s ;
struct fc_res_s ;
struct fc_res_acc_s ;
struct fc_rec_s ;
#define FC_REC_ESB_OWN_RSP	0x80000000
#define FC_REC_ESB_SI		0x40000000
#define FC_REC_ESB_COMP		0x20000000
#define FC_REC_ESB_ENDCOND_ABN	0x10000000
#define FC_REC_ESB_RQACT	0x04000000
#define FC_REC_ESB_ERRP_MSK	0x03000000
#define FC_REC_ESB_OXID_INV	0x00800000
#define FC_REC_ESB_RXID_INV	0x00400000
#define FC_REC_ESB_PRIO_INUSE	0x00200000
struct fc_rec_acc_s ;
struct fc_rsi_s ;
struct fc_prli_params_s ;
enum ;
struct fc_prli_params_page_s ;
struct fc_prli_s ;
struct fc_prlo_params_page_s ;
struct fc_prlo_s ;
struct fc_prlo_acc_params_page_s ;
struct fc_prlo_acc_s ;
enum ;
enum ;
struct fc_scr_s ;
enum ;
struct fc_ls_rjt_s ;
enum ;
enum ;
struct fc_rrq_s ;
struct fc_ba_acc_s ;
struct fc_ba_rjt_s ;
struct fc_tprlo_params_page_s ;
struct fc_tprlo_s ;
enum fc_tprlo_type ;
struct fc_tprlo_acc_s ;
#define FC_RSCN_PGLEN	0x4
enum fc_rscn_format ;
struct fc_rscn_event_s ;
struct fc_rscn_pl_s ;
struct fc_echo_s ;
#define RNID_NODEID_DATA_FORMAT_COMMON			0x00
#define RNID_NODEID_DATA_FORMAT_FCP3			0x08
#define RNID_NODEID_DATA_FORMAT_DISCOVERY		0xDF
#define RNID_ASSOCIATED_TYPE_UNKNOWN			0x00000001
#define RNID_ASSOCIATED_TYPE_OTHER                      0x00000002
#define RNID_ASSOCIATED_TYPE_HUB                        0x00000003
#define RNID_ASSOCIATED_TYPE_SWITCH                     0x00000004
#define RNID_ASSOCIATED_TYPE_GATEWAY                    0x00000005
#define RNID_ASSOCIATED_TYPE_STORAGE_DEVICE             0x00000009
#define RNID_ASSOCIATED_TYPE_HOST                       0x0000000A
#define RNID_ASSOCIATED_TYPE_STORAGE_SUBSYSTEM          0x0000000B
#define RNID_ASSOCIATED_TYPE_STORAGE_ACCESS_DEVICE      0x0000000E
#define RNID_ASSOCIATED_TYPE_NAS_SERVER                 0x00000011
#define RNID_ASSOCIATED_TYPE_BRIDGE                     0x00000002
#define RNID_ASSOCIATED_TYPE_VIRTUALIZATION_DEVICE      0x00000003
#define RNID_ASSOCIATED_TYPE_MULTI_FUNCTION_DEVICE      0x000000FF
struct fc_rnid_cmd_s ;
struct fc_rnid_common_id_data_s ;
struct fc_rnid_general_topology_data_s ;
struct fc_rnid_acc_s ;
#define RNID_ASSOCIATED_TYPE_UNKNOWN                    0x00000001
#define RNID_ASSOCIATED_TYPE_OTHER                      0x00000002
#define RNID_ASSOCIATED_TYPE_HUB                        0x00000003
#define RNID_ASSOCIATED_TYPE_SWITCH                     0x00000004
#define RNID_ASSOCIATED_TYPE_GATEWAY                    0x00000005
#define RNID_ASSOCIATED_TYPE_STORAGE_DEVICE             0x00000009
#define RNID_ASSOCIATED_TYPE_HOST                       0x0000000A
#define RNID_ASSOCIATED_TYPE_STORAGE_SUBSYSTEM          0x0000000B
#define RNID_ASSOCIATED_TYPE_STORAGE_ACCESS_DEVICE      0x0000000E
#define RNID_ASSOCIATED_TYPE_NAS_SERVER                 0x00000011
#define RNID_ASSOCIATED_TYPE_BRIDGE                     0x00000002
#define RNID_ASSOCIATED_TYPE_VIRTUALIZATION_DEVICE      0x00000003
#define RNID_ASSOCIATED_TYPE_MULTI_FUNCTION_DEVICE      0x000000FF
enum fc_rpsc_speed_cap ;
enum fc_rpsc_op_speed ;
struct fc_rpsc_speed_info_s ;
struct fc_rpsc_cmd_s ;
struct fc_rpsc_acc_s ;
#define FC_BRCD_TOKEN    0x42524344
struct fc_rpsc2_cmd_s ;
enum fc_rpsc2_port_type ;
struct fc_rpsc2_port_info_s ;
struct fc_rpsc2_acc_s ;
enum fc_cos ;
struct fc_symname_s ;
#define FC_ED_TOV	2
#define FC_REC_TOV	(FC_ED_TOV + 1)
#define FC_RA_TOV	10
#define FC_ELS_TOV	(2 * FC_RA_TOV)
#define FC_FCCT_TOV	(3 * FC_RA_TOV)
#define FC_VF_ID_NULL    0
#define FC_VF_ID_MIN     1
#define FC_VF_ID_MAX     0xEFF
#define FC_VF_ID_CTL     0xFEF
struct fc_vft_s ;
enum ;
#define FCP_CMND_CDB_LEN    16
#define FCP_CMND_LUN_LEN    8
struct fcp_cmnd_s ;
#define fcp_cmnd_cdb_len(_cmnd) ((_cmnd)->addl_cdb_len * 4 + FCP_CMND_CDB_LEN)
#define fcp_cmnd_fcpdl(_cmnd)	((&(_cmnd)->fcp_dl)[(_cmnd)->addl_cdb_len])
enum fcp_iodir ;
enum fcp_tm_cmnd ;
enum fcp_residue ;
struct fcp_rspinfo_s ;
struct fcp_resp_s ;
#define fcp_snslen(__fcprsp)	((__fcprsp)->sns_len_valid ?		\
(__fcprsp)->sns_len : 0)
#define fcp_rsplen(__fcprsp)	((__fcprsp)->rsp_len_valid ?		\
(__fcprsp)->rsp_len : 0)
#define fcp_rspinfo(__fcprsp)	((struct fcp_rspinfo_s *)((__fcprsp) + 1))
#define fcp_snsinfo(__fcprsp)	(((u8 *)fcp_rspinfo(__fcprsp)) +	\
fcp_rsplen(__fcprsp))
struct ct_hdr_s ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
struct fcgs_id_req_s ;
#define fcgs_gpnid_req_t struct fcgs_id_req_s
#define fcgs_gnnid_req_t struct fcgs_id_req_s
#define fcgs_gspnid_req_t struct fcgs_id_req_s
struct fcgs_gidpn_req_s ;
struct fcgs_gidpn_resp_s ;
struct fcgs_rftid_req_s ;
#define FC_GS_FCP_FC4_FEATURE_INITIATOR  0x02
#define FC_GS_FCP_FC4_FEATURE_TARGET	 0x01
struct fcgs_rffid_req_s ;
struct fcgs_gidft_req_s ;
struct fcgs_gidft_resp_s ;
struct fcgs_rspnid_req_s ;
struct fcgs_rpnid_req_s ;
struct fcgs_rnnid_req_s ;
struct fcgs_rcsid_req_s ;
struct fcgs_rptid_req_s ;
struct fcgs_ganxt_req_s ;
struct fcgs_ganxt_rsp_s ;
enum ;
#define CT_GMAL_RESP_PREFIX_TELNET	 "telnet:
#define CT_GMAL_RESP_PREFIX_HTTP	 "http:
struct fcgs_req_s ;
#define fcgs_gmal_req_t struct fcgs_req_s
#define fcgs_gfn_req_t struct fcgs_req_s
struct fcgs_gmal_resp_s ;
struct fcgs_gmal_entry_s {
u8  len;
u8  prefix[7];
#define	FDMI_GRHL		0x0100
#define	FDMI_GHAT		0x0101
#define	FDMI_GRPL		0x0102
#define	FDMI_GPAT		0x0110
#define	FDMI_RHBA		0x0200
#define	FDMI_RHAT		0x0201
#define	FDMI_RPRT		0x0210
#define	FDMI_RPA		0x0211
#define	FDMI_DHBA		0x0300
#define	FDMI_DPRT		0x0310
#define	FDMI_NO_ADDITIONAL_EXP		0x00
#define	FDMI_HBA_ALREADY_REG		0x10
#define	FDMI_HBA_ATTRIB_NOT_REG		0x11
#define	FDMI_HBA_ATTRIB_MULTIPLE	0x12
#define	FDMI_HBA_ATTRIB_LENGTH_INVALID	0x13
#define	FDMI_HBA_ATTRIB_NOT_PRESENT	0x14
#define	FDMI_PORT_ORIG_NOT_IN_LIST	0x15
#define	FDMI_PORT_HBA_NOT_IN_LIST	0x16
#define	FDMI_PORT_ATTRIB_NOT_REG	0x20
#define	FDMI_PORT_NOT_REG		0x21
#define	FDMI_PORT_ATTRIB_MULTIPLE	0x22
#define	FDMI_PORT_ATTRIB_LENGTH_INVALID	0x23
#define	FDMI_PORT_ALREADY_REGISTEREED	0x24
#define	FDMI_TRANS_SPEED_1G		0x00000001
#define	FDMI_TRANS_SPEED_2G		0x00000002
#define	FDMI_TRANS_SPEED_10G		0x00000004
#define	FDMI_TRANS_SPEED_4G		0x00000008
#define	FDMI_TRANS_SPEED_8G		0x00000010
#define	FDMI_TRANS_SPEED_16G		0x00000020
#define	FDMI_TRANS_SPEED_UNKNOWN	0x00008000
enum fdmi_hba_attribute_type ;
enum fdmi_port_attribute_type ;
struct fdmi_attr_s ;
struct fdmi_hba_attr_s ;
struct fdmi_port_list_s ;
struct fdmi_port_attr_s ;
struct fdmi_rhba_s ;
struct fdmi_rprt_s ;
struct fdmi_rpa_s ;
