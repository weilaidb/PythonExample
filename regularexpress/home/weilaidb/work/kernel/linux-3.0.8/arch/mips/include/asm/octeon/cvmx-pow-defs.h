#define __CVMX_POW_DEFS_H__
#define CVMX_POW_BIST_STAT (CVMX_ADD_IO_SEG(0x00016700000003F8ull))
#define CVMX_POW_DS_PC (CVMX_ADD_IO_SEG(0x0001670000000398ull))
#define CVMX_POW_ECC_ERR (CVMX_ADD_IO_SEG(0x0001670000000218ull))
#define CVMX_POW_INT_CTL (CVMX_ADD_IO_SEG(0x0001670000000220ull))
#define CVMX_POW_IQ_CNTX(offset) (CVMX_ADD_IO_SEG(0x0001670000000340ull) + ((offset) & 7) * 8)
#define CVMX_POW_IQ_COM_CNT (CVMX_ADD_IO_SEG(0x0001670000000388ull))
#define CVMX_POW_IQ_INT (CVMX_ADD_IO_SEG(0x0001670000000238ull))
#define CVMX_POW_IQ_INT_EN (CVMX_ADD_IO_SEG(0x0001670000000240ull))
#define CVMX_POW_IQ_THRX(offset) (CVMX_ADD_IO_SEG(0x00016700000003A0ull) + ((offset) & 7) * 8)
#define CVMX_POW_NOS_CNT (CVMX_ADD_IO_SEG(0x0001670000000228ull))
#define CVMX_POW_NW_TIM (CVMX_ADD_IO_SEG(0x0001670000000210ull))
#define CVMX_POW_PF_RST_MSK (CVMX_ADD_IO_SEG(0x0001670000000230ull))
#define CVMX_POW_PP_GRP_MSKX(offset) (CVMX_ADD_IO_SEG(0x0001670000000000ull) + ((offset) & 15) * 8)
#define CVMX_POW_QOS_RNDX(offset) (CVMX_ADD_IO_SEG(0x00016700000001C0ull) + ((offset) & 7) * 8)
#define CVMX_POW_QOS_THRX(offset) (CVMX_ADD_IO_SEG(0x0001670000000180ull) + ((offset) & 7) * 8)
#define CVMX_POW_TS_PC (CVMX_ADD_IO_SEG(0x0001670000000390ull))
#define CVMX_POW_WA_COM_PC (CVMX_ADD_IO_SEG(0x0001670000000380ull))
#define CVMX_POW_WA_PCX(offset) (CVMX_ADD_IO_SEG(0x0001670000000300ull) + ((offset) & 7) * 8)
#define CVMX_POW_WQ_INT (CVMX_ADD_IO_SEG(0x0001670000000200ull))
#define CVMX_POW_WQ_INT_CNTX(offset) (CVMX_ADD_IO_SEG(0x0001670000000100ull) + ((offset) & 15) * 8)
#define CVMX_POW_WQ_INT_PC (CVMX_ADD_IO_SEG(0x0001670000000208ull))
#define CVMX_POW_WQ_INT_THRX(offset) (CVMX_ADD_IO_SEG(0x0001670000000080ull) + ((offset) & 15) * 8)
#define CVMX_POW_WS_PCX(offset) (CVMX_ADD_IO_SEG(0x0001670000000280ull) + ((offset) & 15) * 8)
union cvmx_pow_bist_stat ;
union cvmx_pow_ds_pc ;
union cvmx_pow_ecc_err ;
union cvmx_pow_int_ctl ;
union cvmx_pow_iq_cntx ;
union cvmx_pow_iq_com_cnt ;
union cvmx_pow_iq_int ;
union cvmx_pow_iq_int_en ;
union cvmx_pow_iq_thrx ;
union cvmx_pow_nos_cnt ;
union cvmx_pow_nw_tim ;
union cvmx_pow_pf_rst_msk ;
union cvmx_pow_pp_grp_mskx ;
union cvmx_pow_qos_rndx ;
union cvmx_pow_qos_thrx ;
union cvmx_pow_ts_pc ;
union cvmx_pow_wa_com_pc ;
union cvmx_pow_wa_pcx ;
union cvmx_pow_wq_int ;
union cvmx_pow_wq_int_cntx ;
union cvmx_pow_wq_int_pc ;
union cvmx_pow_wq_int_thrx ;
union cvmx_pow_ws_pcx ;
