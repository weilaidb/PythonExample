#define __CVMX_PIP_DEFS_H__
enum cvmx_pip_port_parse_mode ;
#define CVMX_PIP_BCK_PRS \
CVMX_ADD_IO_SEG(0x00011800A0000038ull)
#define CVMX_PIP_BIST_STATUS \
CVMX_ADD_IO_SEG(0x00011800A0000000ull)
#define CVMX_PIP_CRC_CTLX(offset) \
CVMX_ADD_IO_SEG(0x00011800A0000040ull + (((offset) & 1) * 8))
#define CVMX_PIP_CRC_IVX(offset) \
CVMX_ADD_IO_SEG(0x00011800A0000050ull + (((offset) & 1) * 8))
#define CVMX_PIP_DEC_IPSECX(offset) \
CVMX_ADD_IO_SEG(0x00011800A0000080ull + (((offset) & 3) * 8))
#define CVMX_PIP_DSA_SRC_GRP \
CVMX_ADD_IO_SEG(0x00011800A0000190ull)
#define CVMX_PIP_DSA_VID_GRP \
CVMX_ADD_IO_SEG(0x00011800A0000198ull)
#define CVMX_PIP_FRM_LEN_CHKX(offset) \
CVMX_ADD_IO_SEG(0x00011800A0000180ull + (((offset) & 1) * 8))
#define CVMX_PIP_GBL_CFG \
CVMX_ADD_IO_SEG(0x00011800A0000028ull)
#define CVMX_PIP_GBL_CTL \
CVMX_ADD_IO_SEG(0x00011800A0000020ull)
#define CVMX_PIP_HG_PRI_QOS \
CVMX_ADD_IO_SEG(0x00011800A00001A0ull)
#define CVMX_PIP_INT_EN \
CVMX_ADD_IO_SEG(0x00011800A0000010ull)
#define CVMX_PIP_INT_REG \
CVMX_ADD_IO_SEG(0x00011800A0000008ull)
#define CVMX_PIP_IP_OFFSET \
CVMX_ADD_IO_SEG(0x00011800A0000060ull)
#define CVMX_PIP_PRT_CFGX(offset) \
CVMX_ADD_IO_SEG(0x00011800A0000200ull + (((offset) & 63) * 8))
#define CVMX_PIP_PRT_TAGX(offset) \
CVMX_ADD_IO_SEG(0x00011800A0000400ull + (((offset) & 63) * 8))
#define CVMX_PIP_QOS_DIFFX(offset) \
CVMX_ADD_IO_SEG(0x00011800A0000600ull + (((offset) & 63) * 8))
#define CVMX_PIP_QOS_VLANX(offset) \
CVMX_ADD_IO_SEG(0x00011800A00000C0ull + (((offset) & 7) * 8))
#define CVMX_PIP_QOS_WATCHX(offset) \
CVMX_ADD_IO_SEG(0x00011800A0000100ull + (((offset) & 7) * 8))
#define CVMX_PIP_RAW_WORD \
CVMX_ADD_IO_SEG(0x00011800A00000B0ull)
#define CVMX_PIP_SFT_RST \
CVMX_ADD_IO_SEG(0x00011800A0000030ull)
#define CVMX_PIP_STAT0_PRTX(offset) \
CVMX_ADD_IO_SEG(0x00011800A0000800ull + (((offset) & 63) * 80))
#define CVMX_PIP_STAT1_PRTX(offset) \
CVMX_ADD_IO_SEG(0x00011800A0000808ull + (((offset) & 63) * 80))
#define CVMX_PIP_STAT2_PRTX(offset) \
CVMX_ADD_IO_SEG(0x00011800A0000810ull + (((offset) & 63) * 80))
#define CVMX_PIP_STAT3_PRTX(offset) \
CVMX_ADD_IO_SEG(0x00011800A0000818ull + (((offset) & 63) * 80))
#define CVMX_PIP_STAT4_PRTX(offset) \
CVMX_ADD_IO_SEG(0x00011800A0000820ull + (((offset) & 63) * 80))
#define CVMX_PIP_STAT5_PRTX(offset) \
CVMX_ADD_IO_SEG(0x00011800A0000828ull + (((offset) & 63) * 80))
#define CVMX_PIP_STAT6_PRTX(offset) \
CVMX_ADD_IO_SEG(0x00011800A0000830ull + (((offset) & 63) * 80))
#define CVMX_PIP_STAT7_PRTX(offset) \
CVMX_ADD_IO_SEG(0x00011800A0000838ull + (((offset) & 63) * 80))
#define CVMX_PIP_STAT8_PRTX(offset) \
CVMX_ADD_IO_SEG(0x00011800A0000840ull + (((offset) & 63) * 80))
#define CVMX_PIP_STAT9_PRTX(offset) \
CVMX_ADD_IO_SEG(0x00011800A0000848ull + (((offset) & 63) * 80))
#define CVMX_PIP_STAT_CTL \
CVMX_ADD_IO_SEG(0x00011800A0000018ull)
#define CVMX_PIP_STAT_INB_ERRSX(offset) \
CVMX_ADD_IO_SEG(0x00011800A0001A10ull + (((offset) & 63) * 32))
#define CVMX_PIP_STAT_INB_OCTSX(offset) \
CVMX_ADD_IO_SEG(0x00011800A0001A08ull + (((offset) & 63) * 32))
#define CVMX_PIP_STAT_INB_PKTSX(offset) \
CVMX_ADD_IO_SEG(0x00011800A0001A00ull + (((offset) & 63) * 32))
#define CVMX_PIP_TAG_INCX(offset) \
CVMX_ADD_IO_SEG(0x00011800A0001800ull + (((offset) & 63) * 8))
#define CVMX_PIP_TAG_MASK \
CVMX_ADD_IO_SEG(0x00011800A0000070ull)
#define CVMX_PIP_TAG_SECRET \
CVMX_ADD_IO_SEG(0x00011800A0000068ull)
#define CVMX_PIP_TODO_ENTRY \
CVMX_ADD_IO_SEG(0x00011800A0000078ull)
union cvmx_pip_bck_prs ;
union cvmx_pip_bist_status ;
union cvmx_pip_crc_ctlx ;
union cvmx_pip_crc_ivx ;
union cvmx_pip_dec_ipsecx ;
union cvmx_pip_dsa_src_grp ;
union cvmx_pip_dsa_vid_grp ;
union cvmx_pip_frm_len_chkx ;
union cvmx_pip_gbl_cfg ;
union cvmx_pip_gbl_ctl ;
union cvmx_pip_hg_pri_qos ;
union cvmx_pip_int_en ;
union cvmx_pip_int_reg ;
union cvmx_pip_ip_offset ;
union cvmx_pip_prt_cfgx ;
union cvmx_pip_prt_tagx ;
union cvmx_pip_qos_diffx ;
union cvmx_pip_qos_vlanx ;
union cvmx_pip_qos_watchx ;
union cvmx_pip_raw_word ;
union cvmx_pip_sft_rst ;
union cvmx_pip_stat0_prtx ;
union cvmx_pip_stat1_prtx ;
union cvmx_pip_stat2_prtx ;
union cvmx_pip_stat3_prtx ;
union cvmx_pip_stat4_prtx ;
union cvmx_pip_stat5_prtx ;
union cvmx_pip_stat6_prtx ;
union cvmx_pip_stat7_prtx ;
union cvmx_pip_stat8_prtx ;
union cvmx_pip_stat9_prtx ;
union cvmx_pip_stat_ctl ;
union cvmx_pip_stat_inb_errsx ;
union cvmx_pip_stat_inb_octsx ;
union cvmx_pip_stat_inb_pktsx ;
union cvmx_pip_tag_incx ;
union cvmx_pip_tag_mask ;
union cvmx_pip_tag_secret ;
union cvmx_pip_todo_entry ;
