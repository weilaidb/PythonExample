#define _T4FW_INTERFACE_H_
#define FW_T4VF_SGE_BASE_ADDR      0x0000
#define FW_T4VF_MPS_BASE_ADDR      0x0100
#define FW_T4VF_PL_BASE_ADDR       0x0200
#define FW_T4VF_MBDATA_BASE_ADDR   0x0240
#define FW_T4VF_CIM_BASE_ADDR      0x0300
enum fw_wr_opcodes ;
struct fw_wr_hdr ;
#define FW_WR_OP(x)	 ((x) << 24)
#define FW_WR_ATOMIC(x)	 ((x) << 23)
#define FW_WR_FLUSH(x)   ((x) << 22)
#define FW_WR_COMPL(x)   ((x) << 21)
#define FW_WR_IMMDLEN_MASK 0xff
#define FW_WR_IMMDLEN(x) ((x) << 0)
#define FW_WR_EQUIQ	(1U << 31)
#define FW_WR_EQUEQ	(1U << 30)
#define FW_WR_FLOWID(x)	((x) << 8)
#define FW_WR_LEN16(x)	((x) << 0)
struct fw_ulptx_wr ;
struct fw_tp_wr ;
struct fw_eth_tx_pkt_wr ;
enum fw_flowc_mnem ;
struct fw_flowc_mnemval ;
struct fw_flowc_wr ;
struct fw_ofld_tx_data_wr ;
struct fw_cmd_wr ;
struct fw_eth_tx_pkt_vm_wr ;
#define FW_CMD_MAX_TIMEOUT 3000
enum fw_cmd_opcodes ;
enum fw_cmd_cap ;
struct fw_cmd_hdr ;
#define FW_CMD_OP(x)		((x) << 24)
#define FW_CMD_OP_GET(x)        (((x) >> 24) & 0xff)
#define FW_CMD_REQUEST          (1U << 23)
#define FW_CMD_READ		(1U << 22)
#define FW_CMD_WRITE		(1U << 21)
#define FW_CMD_EXEC		(1U << 20)
#define FW_CMD_RAMASK(x)	((x) << 20)
#define FW_CMD_RETVAL(x)	((x) << 8)
#define FW_CMD_RETVAL_GET(x)	(((x) >> 8) & 0xff)
#define FW_CMD_LEN16(x)         ((x) << 0)
enum fw_ldst_addrspc ;
enum fw_ldst_mps_fid ;
enum fw_ldst_func_access_ctl ;
enum fw_ldst_func_mod_index ;
struct fw_ldst_cmd ;
#define FW_LDST_CMD_MSG(x)	((x) << 31)
#define FW_LDST_CMD_PADDR(x)	((x) << 8)
#define FW_LDST_CMD_MMD(x)	((x) << 0)
#define FW_LDST_CMD_FID(x)	((x) << 15)
#define FW_LDST_CMD_CTL(x)	((x) << 0)
#define FW_LDST_CMD_RPLCPF(x)	((x) << 0)
struct fw_reset_cmd ;
struct fw_hello_cmd ;
struct fw_bye_cmd ;
struct fw_initialize_cmd ;
enum fw_caps_config_hm ;
enum fw_caps_config_nbm ;
enum fw_caps_config_link ;
enum fw_caps_config_switch ;
enum fw_caps_config_nic ;
enum fw_caps_config_ofld ;
enum fw_caps_config_rdma ;
enum fw_caps_config_iscsi ;
enum fw_caps_config_fcoe ;
struct fw_caps_config_cmd ;
enum fw_params_mnem ;
enum fw_params_param_dev ;
enum fw_params_param_pfvf ;
enum fw_params_param_dmaq ;
#define FW_PARAMS_MNEM(x)      ((x) << 24)
#define FW_PARAMS_PARAM_X(x)   ((x) << 16)
#define FW_PARAMS_PARAM_Y(x)   ((x) << 8)
#define FW_PARAMS_PARAM_Z(x)   ((x) << 0)
#define FW_PARAMS_PARAM_XYZ(x) ((x) << 0)
#define FW_PARAMS_PARAM_YZ(x)  ((x) << 0)
struct fw_params_cmd ;
#define FW_PARAMS_CMD_PFN(x) ((x) << 8)
#define FW_PARAMS_CMD_VFN(x) ((x) << 0)
struct fw_pfvf_cmd ;
#define FW_PFVF_CMD_PFN(x) ((x) << 8)
#define FW_PFVF_CMD_VFN(x) ((x) << 0)
#define FW_PFVF_CMD_NIQFLINT(x) ((x) << 20)
#define FW_PFVF_CMD_NIQFLINT_GET(x) (((x) >> 20) & 0xfff)
#define FW_PFVF_CMD_NIQ(x) ((x) << 0)
#define FW_PFVF_CMD_NIQ_GET(x) (((x) >> 0) & 0xfffff)
#define FW_PFVF_CMD_TYPE (1 << 31)
#define FW_PFVF_CMD_TYPE_GET(x) (((x) >> 31) & 0x1)
#define FW_PFVF_CMD_CMASK(x) ((x) << 24)
#define FW_PFVF_CMD_CMASK_MASK 0xf
#define FW_PFVF_CMD_CMASK_GET(x) (((x) >> 24) & FW_PFVF_CMD_CMASK_MASK)
#define FW_PFVF_CMD_PMASK(x) ((x) << 20)
#define FW_PFVF_CMD_PMASK_MASK 0xf
#define FW_PFVF_CMD_PMASK_GET(x) (((x) >> 20) & FW_PFVF_CMD_PMASK_MASK)
#define FW_PFVF_CMD_NEQ(x) ((x) << 0)
#define FW_PFVF_CMD_NEQ_GET(x) (((x) >> 0) & 0xfffff)
#define FW_PFVF_CMD_TC(x) ((x) << 24)
#define FW_PFVF_CMD_TC_GET(x) (((x) >> 24) & 0xff)
#define FW_PFVF_CMD_NVI(x) ((x) << 16)
#define FW_PFVF_CMD_NVI_GET(x) (((x) >> 16) & 0xff)
#define FW_PFVF_CMD_NEXACTF(x) ((x) << 0)
#define FW_PFVF_CMD_NEXACTF_GET(x) (((x) >> 0) & 0xffff)
#define FW_PFVF_CMD_R_CAPS(x) ((x) << 24)
#define FW_PFVF_CMD_R_CAPS_GET(x) (((x) >> 24) & 0xff)
#define FW_PFVF_CMD_WX_CAPS(x) ((x) << 16)
#define FW_PFVF_CMD_WX_CAPS_GET(x) (((x) >> 16) & 0xff)
#define FW_PFVF_CMD_NETHCTRL(x) ((x) << 0)
#define FW_PFVF_CMD_NETHCTRL_GET(x) (((x) >> 0) & 0xffff)
enum fw_iq_type ;
struct fw_iq_cmd ;
#define FW_IQ_CMD_PFN(x) ((x) << 8)
#define FW_IQ_CMD_VFN(x) ((x) << 0)
#define FW_IQ_CMD_ALLOC (1U << 31)
#define FW_IQ_CMD_FREE (1U << 30)
#define FW_IQ_CMD_MODIFY (1U << 29)
#define FW_IQ_CMD_IQSTART(x) ((x) << 28)
#define FW_IQ_CMD_IQSTOP(x) ((x) << 27)
#define FW_IQ_CMD_TYPE(x) ((x) << 29)
#define FW_IQ_CMD_IQASYNCH(x) ((x) << 28)
#define FW_IQ_CMD_VIID(x) ((x) << 16)
#define FW_IQ_CMD_IQANDST(x) ((x) << 15)
#define FW_IQ_CMD_IQANUS(x) ((x) << 14)
#define FW_IQ_CMD_IQANUD(x) ((x) << 12)
#define FW_IQ_CMD_IQANDSTINDEX(x) ((x) << 0)
#define FW_IQ_CMD_IQDROPRSS (1U << 15)
#define FW_IQ_CMD_IQGTSMODE (1U << 14)
#define FW_IQ_CMD_IQPCIECH(x) ((x) << 12)
#define FW_IQ_CMD_IQDCAEN(x) ((x) << 11)
#define FW_IQ_CMD_IQDCACPU(x) ((x) << 6)
#define FW_IQ_CMD_IQINTCNTTHRESH(x) ((x) << 4)
#define FW_IQ_CMD_IQO (1U << 3)
#define FW_IQ_CMD_IQCPRIO(x) ((x) << 2)
#define FW_IQ_CMD_IQESIZE(x) ((x) << 0)
#define FW_IQ_CMD_IQNS(x) ((x) << 31)
#define FW_IQ_CMD_IQRO(x) ((x) << 30)
#define FW_IQ_CMD_IQFLINTIQHSEN(x) ((x) << 28)
#define FW_IQ_CMD_IQFLINTCONGEN(x) ((x) << 27)
#define FW_IQ_CMD_IQFLINTISCSIC(x) ((x) << 26)
#define FW_IQ_CMD_FL0CNGCHMAP(x) ((x) << 20)
#define FW_IQ_CMD_FL0CACHELOCK(x) ((x) << 15)
#define FW_IQ_CMD_FL0DBP(x) ((x) << 14)
#define FW_IQ_CMD_FL0DATANS(x) ((x) << 13)
#define FW_IQ_CMD_FL0DATARO(x) ((x) << 12)
#define FW_IQ_CMD_FL0CONGCIF(x) ((x) << 11)
#define FW_IQ_CMD_FL0ONCHIP(x) ((x) << 10)
#define FW_IQ_CMD_FL0STATUSPGNS(x) ((x) << 9)
#define FW_IQ_CMD_FL0STATUSPGRO(x) ((x) << 8)
#define FW_IQ_CMD_FL0FETCHNS(x) ((x) << 7)
#define FW_IQ_CMD_FL0FETCHRO(x) ((x) << 6)
#define FW_IQ_CMD_FL0HOSTFCMODE(x) ((x) << 4)
#define FW_IQ_CMD_FL0CPRIO(x) ((x) << 3)
#define FW_IQ_CMD_FL0PADEN (1U << 2)
#define FW_IQ_CMD_FL0PACKEN (1U << 1)
#define FW_IQ_CMD_FL0CONGEN (1U << 0)
#define FW_IQ_CMD_FL0DCAEN(x) ((x) << 15)
#define FW_IQ_CMD_FL0DCACPU(x) ((x) << 10)
#define FW_IQ_CMD_FL0FBMIN(x) ((x) << 7)
#define FW_IQ_CMD_FL0FBMAX(x) ((x) << 4)
#define FW_IQ_CMD_FL0CIDXFTHRESHO (1U << 3)
#define FW_IQ_CMD_FL0CIDXFTHRESH(x) ((x) << 0)
#define FW_IQ_CMD_FL1CNGCHMAP(x) ((x) << 20)
#define FW_IQ_CMD_FL1CACHELOCK(x) ((x) << 15)
#define FW_IQ_CMD_FL1DBP(x) ((x) << 14)
#define FW_IQ_CMD_FL1DATANS(x) ((x) << 13)
#define FW_IQ_CMD_FL1DATARO(x) ((x) << 12)
#define FW_IQ_CMD_FL1CONGCIF(x) ((x) << 11)
#define FW_IQ_CMD_FL1ONCHIP(x) ((x) << 10)
#define FW_IQ_CMD_FL1STATUSPGNS(x) ((x) << 9)
#define FW_IQ_CMD_FL1STATUSPGRO(x) ((x) << 8)
#define FW_IQ_CMD_FL1FETCHNS(x) ((x) << 7)
#define FW_IQ_CMD_FL1FETCHRO(x) ((x) << 6)
#define FW_IQ_CMD_FL1HOSTFCMODE(x) ((x) << 4)
#define FW_IQ_CMD_FL1CPRIO(x) ((x) << 3)
#define FW_IQ_CMD_FL1PADEN (1U << 2)
#define FW_IQ_CMD_FL1PACKEN (1U << 1)
#define FW_IQ_CMD_FL1CONGEN (1U << 0)
#define FW_IQ_CMD_FL1DCAEN(x) ((x) << 15)
#define FW_IQ_CMD_FL1DCACPU(x) ((x) << 10)
#define FW_IQ_CMD_FL1FBMIN(x) ((x) << 7)
#define FW_IQ_CMD_FL1FBMAX(x) ((x) << 4)
#define FW_IQ_CMD_FL1CIDXFTHRESHO (1U << 3)
#define FW_IQ_CMD_FL1CIDXFTHRESH(x) ((x) << 0)
struct fw_eq_eth_cmd ;
#define FW_EQ_ETH_CMD_PFN(x) ((x) << 8)
#define FW_EQ_ETH_CMD_VFN(x) ((x) << 0)
#define FW_EQ_ETH_CMD_ALLOC (1U << 31)
#define FW_EQ_ETH_CMD_FREE (1U << 30)
#define FW_EQ_ETH_CMD_MODIFY (1U << 29)
#define FW_EQ_ETH_CMD_EQSTART (1U << 28)
#define FW_EQ_ETH_CMD_EQSTOP (1U << 27)
#define FW_EQ_ETH_CMD_EQID(x) ((x) << 0)
#define FW_EQ_ETH_CMD_EQID_GET(x) (((x) >> 0) & 0xfffff)
#define FW_EQ_ETH_CMD_PHYSEQID(x) ((x) << 0)
#define FW_EQ_ETH_CMD_PHYSEQID_GET(x) (((x) >> 0) & 0xfffff)
#define FW_EQ_ETH_CMD_FETCHSZM(x) ((x) << 26)
#define FW_EQ_ETH_CMD_STATUSPGNS(x) ((x) << 25)
#define FW_EQ_ETH_CMD_STATUSPGRO(x) ((x) << 24)
#define FW_EQ_ETH_CMD_FETCHNS(x) ((x) << 23)
#define FW_EQ_ETH_CMD_FETCHRO(x) ((x) << 22)
#define FW_EQ_ETH_CMD_HOSTFCMODE(x) ((x) << 20)
#define FW_EQ_ETH_CMD_CPRIO(x) ((x) << 19)
#define FW_EQ_ETH_CMD_ONCHIP(x) ((x) << 18)
#define FW_EQ_ETH_CMD_PCIECHN(x) ((x) << 16)
#define FW_EQ_ETH_CMD_IQID(x) ((x) << 0)
#define FW_EQ_ETH_CMD_DCAEN(x) ((x) << 31)
#define FW_EQ_ETH_CMD_DCACPU(x) ((x) << 26)
#define FW_EQ_ETH_CMD_FBMIN(x) ((x) << 23)
#define FW_EQ_ETH_CMD_FBMAX(x) ((x) << 20)
#define FW_EQ_ETH_CMD_CIDXFTHRESHO(x) ((x) << 19)
#define FW_EQ_ETH_CMD_CIDXFTHRESH(x) ((x) << 16)
#define FW_EQ_ETH_CMD_EQSIZE(x) ((x) << 0)
#define FW_EQ_ETH_CMD_VIID(x) ((x) << 16)
struct fw_eq_ctrl_cmd ;
#define FW_EQ_CTRL_CMD_PFN(x) ((x) << 8)
#define FW_EQ_CTRL_CMD_VFN(x) ((x) << 0)
#define FW_EQ_CTRL_CMD_ALLOC (1U << 31)
#define FW_EQ_CTRL_CMD_FREE (1U << 30)
#define FW_EQ_CTRL_CMD_MODIFY (1U << 29)
#define FW_EQ_CTRL_CMD_EQSTART (1U << 28)
#define FW_EQ_CTRL_CMD_EQSTOP (1U << 27)
#define FW_EQ_CTRL_CMD_CMPLIQID(x) ((x) << 20)
#define FW_EQ_CTRL_CMD_EQID(x) ((x) << 0)
#define FW_EQ_CTRL_CMD_EQID_GET(x) (((x) >> 0) & 0xfffff)
#define FW_EQ_CTRL_CMD_PHYSEQID_GET(x) (((x) >> 0) & 0xfffff)
#define FW_EQ_CTRL_CMD_FETCHSZM (1U << 26)
#define FW_EQ_CTRL_CMD_STATUSPGNS (1U << 25)
#define FW_EQ_CTRL_CMD_STATUSPGRO (1U << 24)
#define FW_EQ_CTRL_CMD_FETCHNS (1U << 23)
#define FW_EQ_CTRL_CMD_FETCHRO (1U << 22)
#define FW_EQ_CTRL_CMD_HOSTFCMODE(x) ((x) << 20)
#define FW_EQ_CTRL_CMD_CPRIO(x) ((x) << 19)
#define FW_EQ_CTRL_CMD_ONCHIP(x) ((x) << 18)
#define FW_EQ_CTRL_CMD_PCIECHN(x) ((x) << 16)
#define FW_EQ_CTRL_CMD_IQID(x) ((x) << 0)
#define FW_EQ_CTRL_CMD_DCAEN(x) ((x) << 31)
#define FW_EQ_CTRL_CMD_DCACPU(x) ((x) << 26)
#define FW_EQ_CTRL_CMD_FBMIN(x) ((x) << 23)
#define FW_EQ_CTRL_CMD_FBMAX(x) ((x) << 20)
#define FW_EQ_CTRL_CMD_CIDXFTHRESHO(x) ((x) << 19)
#define FW_EQ_CTRL_CMD_CIDXFTHRESH(x) ((x) << 16)
#define FW_EQ_CTRL_CMD_EQSIZE(x) ((x) << 0)
struct fw_eq_ofld_cmd ;
#define FW_EQ_OFLD_CMD_PFN(x) ((x) << 8)
#define FW_EQ_OFLD_CMD_VFN(x) ((x) << 0)
#define FW_EQ_OFLD_CMD_ALLOC (1U << 31)
#define FW_EQ_OFLD_CMD_FREE (1U << 30)
#define FW_EQ_OFLD_CMD_MODIFY (1U << 29)
#define FW_EQ_OFLD_CMD_EQSTART (1U << 28)
#define FW_EQ_OFLD_CMD_EQSTOP (1U << 27)
#define FW_EQ_OFLD_CMD_EQID(x) ((x) << 0)
#define FW_EQ_OFLD_CMD_EQID_GET(x) (((x) >> 0) & 0xfffff)
#define FW_EQ_OFLD_CMD_PHYSEQID_GET(x) (((x) >> 0) & 0xfffff)
#define FW_EQ_OFLD_CMD_FETCHSZM(x) ((x) << 26)
#define FW_EQ_OFLD_CMD_STATUSPGNS(x) ((x) << 25)
#define FW_EQ_OFLD_CMD_STATUSPGRO(x) ((x) << 24)
#define FW_EQ_OFLD_CMD_FETCHNS(x) ((x) << 23)
#define FW_EQ_OFLD_CMD_FETCHRO(x) ((x) << 22)
#define FW_EQ_OFLD_CMD_HOSTFCMODE(x) ((x) << 20)
#define FW_EQ_OFLD_CMD_CPRIO(x) ((x) << 19)
#define FW_EQ_OFLD_CMD_ONCHIP(x) ((x) << 18)
#define FW_EQ_OFLD_CMD_PCIECHN(x) ((x) << 16)
#define FW_EQ_OFLD_CMD_IQID(x) ((x) << 0)
#define FW_EQ_OFLD_CMD_DCAEN(x) ((x) << 31)
#define FW_EQ_OFLD_CMD_DCACPU(x) ((x) << 26)
#define FW_EQ_OFLD_CMD_FBMIN(x) ((x) << 23)
#define FW_EQ_OFLD_CMD_FBMAX(x) ((x) << 20)
#define FW_EQ_OFLD_CMD_CIDXFTHRESHO(x) ((x) << 19)
#define FW_EQ_OFLD_CMD_CIDXFTHRESH(x) ((x) << 16)
#define FW_EQ_OFLD_CMD_EQSIZE(x) ((x) << 0)
#define FW_VIID_PFN_GET(x) (((x) >> 8) & 0x7)
#define FW_VIID_VIVLD_GET(x) (((x) >> 7) & 0x1)
#define FW_VIID_VIN_GET(x) (((x) >> 0) & 0x7F)
struct fw_vi_cmd ;
#define FW_VI_CMD_PFN(x) ((x) << 8)
#define FW_VI_CMD_VFN(x) ((x) << 0)
#define FW_VI_CMD_ALLOC (1U << 31)
#define FW_VI_CMD_FREE (1U << 30)
#define FW_VI_CMD_VIID(x) ((x) << 0)
#define FW_VI_CMD_VIID_GET(x) ((x) & 0xfff)
#define FW_VI_CMD_PORTID(x) ((x) << 4)
#define FW_VI_CMD_PORTID_GET(x) (((x) >> 4) & 0xf)
#define FW_VI_CMD_RSSSIZE_GET(x) (((x) >> 0) & 0x7ff)
#define FW_VI_MAC_ADD_MAC		0x3FF
#define FW_VI_MAC_ADD_PERSIST_MAC	0x3FE
#define FW_VI_MAC_MAC_BASED_FREE	0x3FD
#define FW_CLS_TCAM_NUM_ENTRIES		336
enum fw_vi_mac_smac ;
enum fw_vi_mac_result ;
struct fw_vi_mac_cmd ;
#define FW_VI_MAC_CMD_VIID(x) ((x) << 0)
#define FW_VI_MAC_CMD_FREEMACS(x) ((x) << 31)
#define FW_VI_MAC_CMD_HASHVECEN (1U << 23)
#define FW_VI_MAC_CMD_HASHUNIEN(x) ((x) << 22)
#define FW_VI_MAC_CMD_VALID (1U << 15)
#define FW_VI_MAC_CMD_PRIO(x) ((x) << 12)
#define FW_VI_MAC_CMD_SMAC_RESULT(x) ((x) << 10)
#define FW_VI_MAC_CMD_SMAC_RESULT_GET(x) (((x) >> 10) & 0x3)
#define FW_VI_MAC_CMD_IDX(x) ((x) << 0)
#define FW_VI_MAC_CMD_IDX_GET(x) (((x) >> 0) & 0x3ff)
#define FW_RXMODE_MTU_NO_CHG	65535
struct fw_vi_rxmode_cmd ;
#define FW_VI_RXMODE_CMD_VIID(x) ((x) << 0)
#define FW_VI_RXMODE_CMD_MTU_MASK 0xffff
#define FW_VI_RXMODE_CMD_MTU(x) ((x) << 16)
#define FW_VI_RXMODE_CMD_PROMISCEN_MASK 0x3
#define FW_VI_RXMODE_CMD_PROMISCEN(x) ((x) << 14)
#define FW_VI_RXMODE_CMD_ALLMULTIEN_MASK 0x3
#define FW_VI_RXMODE_CMD_ALLMULTIEN(x) ((x) << 12)
#define FW_VI_RXMODE_CMD_BROADCASTEN_MASK 0x3
#define FW_VI_RXMODE_CMD_BROADCASTEN(x) ((x) << 10)
#define FW_VI_RXMODE_CMD_VLANEXEN_MASK 0x3
#define FW_VI_RXMODE_CMD_VLANEXEN(x) ((x) << 8)
struct fw_vi_enable_cmd ;
#define FW_VI_ENABLE_CMD_VIID(x) ((x) << 0)
#define FW_VI_ENABLE_CMD_IEN(x) ((x) << 31)
#define FW_VI_ENABLE_CMD_EEN(x) ((x) << 30)
#define FW_VI_ENABLE_CMD_LED (1U << 29)
#define VI_VF_NUM_STATS	16
enum fw_vi_stats_vf_index ;
#define VI_PF_NUM_STATS	17
enum fw_vi_stats_pf_index ;
struct fw_vi_stats_cmd ;
#define FW_VI_STATS_CMD_VIID(x) ((x) << 0)
#define FW_VI_STATS_CMD_NSTATS(x) ((x) << 12)
#define FW_VI_STATS_CMD_IX(x) ((x) << 0)
struct fw_acl_mac_cmd ;
#define FW_ACL_MAC_CMD_PFN(x) ((x) << 8)
#define FW_ACL_MAC_CMD_VFN(x) ((x) << 0)
#define FW_ACL_MAC_CMD_EN(x) ((x) << 31)
struct fw_acl_vlan_cmd ;
#define FW_ACL_VLAN_CMD_PFN(x) ((x) << 8)
#define FW_ACL_VLAN_CMD_VFN(x) ((x) << 0)
#define FW_ACL_VLAN_CMD_EN(x) ((x) << 31)
#define FW_ACL_VLAN_CMD_DROPNOVLAN(x) ((x) << 7)
#define FW_ACL_VLAN_CMD_FM(x) ((x) << 6)
enum fw_port_cap ;
enum fw_port_mdi ;
#define FW_PORT_MDI(x) ((x) << 9)
enum fw_port_action ;
enum fw_port_l2cfg_ctlbf ;
enum fw_port_dcb_cfg ;
enum fw_port_dcb_cfg_rc ;
struct fw_port_cmd ;
#define FW_PORT_CMD_READ (1U << 22)
#define FW_PORT_CMD_PORTID(x) ((x) << 0)
#define FW_PORT_CMD_PORTID_GET(x) (((x) >> 0) & 0xf)
#define FW_PORT_CMD_ACTION(x) ((x) << 16)
#define FW_PORT_CMD_ACTION_GET(x) (((x) >> 16) & 0xffff)
#define FW_PORT_CMD_CTLBF(x) ((x) << 10)
#define FW_PORT_CMD_OVLAN3(x) ((x) << 7)
#define FW_PORT_CMD_OVLAN2(x) ((x) << 6)
#define FW_PORT_CMD_OVLAN1(x) ((x) << 5)
#define FW_PORT_CMD_OVLAN0(x) ((x) << 4)
#define FW_PORT_CMD_IVLAN0(x) ((x) << 3)
#define FW_PORT_CMD_TXIPG(x) ((x) << 19)
#define FW_PORT_CMD_LSTATUS (1U << 31)
#define FW_PORT_CMD_LSPEED(x) ((x) << 24)
#define FW_PORT_CMD_LSPEED_GET(x) (((x) >> 24) & 0x3f)
#define FW_PORT_CMD_TXPAUSE (1U << 23)
#define FW_PORT_CMD_RXPAUSE (1U << 22)
#define FW_PORT_CMD_MDIOCAP (1U << 21)
#define FW_PORT_CMD_MDIOADDR_GET(x) (((x) >> 16) & 0x1f)
#define FW_PORT_CMD_LPTXPAUSE (1U << 15)
#define FW_PORT_CMD_LPRXPAUSE (1U << 14)
#define FW_PORT_CMD_PTYPE_MASK 0x1f
#define FW_PORT_CMD_PTYPE_GET(x) (((x) >> 8) & FW_PORT_CMD_PTYPE_MASK)
#define FW_PORT_CMD_MODTYPE_MASK 0x1f
#define FW_PORT_CMD_MODTYPE_GET(x) (((x) >> 0) & FW_PORT_CMD_MODTYPE_MASK)
#define FW_PORT_CMD_PPPEN(x) ((x) << 31)
#define FW_PORT_CMD_TPSRC(x) ((x) << 28)
#define FW_PORT_CMD_NCSISRC(x) ((x) << 24)
#define FW_PORT_CMD_CH0(x) ((x) << 20)
#define FW_PORT_CMD_CH1(x) ((x) << 16)
#define FW_PORT_CMD_CH2(x) ((x) << 12)
#define FW_PORT_CMD_CH3(x) ((x) << 8)
#define FW_PORT_CMD_NCSICH(x) ((x) << 4)
enum fw_port_type ;
enum fw_port_module_type ;
#define FW_NUM_PORT_STATS 50
#define FW_NUM_PORT_TX_STATS 23
#define FW_NUM_PORT_RX_STATS 27
enum fw_port_stats_tx_index ;
enum fw_port_stat_rx_index ;
struct fw_port_stats_cmd ;
#define FW_PORT_STATS_CMD_NSTATS(x) ((x) << 4)
#define FW_PORT_STATS_CMD_BG_BM(x) ((x) << 0)
#define FW_PORT_STATS_CMD_TX(x) ((x) << 7)
#define FW_PORT_STATS_CMD_IX(x) ((x) << 0)
#define FW_NUM_LB_STATS 16
enum fw_port_lb_stats_index ;
struct fw_port_lb_stats_cmd ;
#define FW_PORT_LB_STATS_CMD_LBPORT(x) ((x) << 0)
#define FW_PORT_LB_STATS_CMD_NSTATS(x) ((x) << 4)
#define FW_PORT_LB_STATS_CMD_BG_BM(x) ((x) << 0)
#define FW_PORT_LB_STATS_CMD_IX(x) ((x) << 0)
struct fw_rss_ind_tbl_cmd ;
struct fw_rss_glb_config_cmd ;
#define FW_RSS_GLB_CONFIG_CMD_MODE(x)	((x) << 28)
#define FW_RSS_GLB_CONFIG_CMD_MODE_GET(x) (((x) >> 28) & 0xf)
#define FW_RSS_GLB_CONFIG_CMD_MODE_MANUAL	0
#define FW_RSS_GLB_CONFIG_CMD_MODE_BASICVIRTUAL	1
struct fw_rss_vi_config_cmd ;
enum fw_error_type ;
struct fw_error_cmd ;
struct fw_debug_cmd ;
struct fw_hdr ;
#define FW_HDR_FW_VER_MAJOR_GET(x) (((x) >> 24) & 0xff)
#define FW_HDR_FW_VER_MINOR_GET(x) (((x) >> 16) & 0xff)
#define FW_HDR_FW_VER_MICRO_GET(x) (((x) >> 8) & 0xff)
#define FW_HDR_FW_VER_BUILD_GET(x) (((x) >> 0) & 0xff)
