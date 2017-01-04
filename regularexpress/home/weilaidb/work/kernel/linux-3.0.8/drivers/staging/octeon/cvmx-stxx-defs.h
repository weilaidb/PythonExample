#define __CVMX_STXX_DEFS_H__
#define CVMX_STXX_ARB_CTL(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000608ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_STXX_BCKPRS_CNT(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000688ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_STXX_COM_CTL(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000600ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_STXX_DIP_CNT(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000690ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_STXX_IGN_CAL(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000610ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_STXX_INT_MSK(block_id) \
CVMX_ADD_IO_SEG(0x00011800900006A0ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_STXX_INT_REG(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000698ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_STXX_INT_SYNC(block_id) \
CVMX_ADD_IO_SEG(0x00011800900006A8ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_STXX_MIN_BST(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000618ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_STXX_SPI4_CALX(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180090000400ull + (((offset) & 31) * 8) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_STXX_SPI4_DAT(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000628ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_STXX_SPI4_STAT(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000630ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_STXX_STAT_BYTES_HI(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000648ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_STXX_STAT_BYTES_LO(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000680ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_STXX_STAT_CTL(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000638ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_STXX_STAT_PKT_XMT(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000640ull + (((block_id) & 1) * 0x8000000ull))
union cvmx_stxx_arb_ctl ;
union cvmx_stxx_bckprs_cnt ;
union cvmx_stxx_com_ctl ;
union cvmx_stxx_dip_cnt ;
union cvmx_stxx_ign_cal ;
union cvmx_stxx_int_msk ;
union cvmx_stxx_int_reg ;
union cvmx_stxx_int_sync ;
union cvmx_stxx_min_bst ;
union cvmx_stxx_spi4_calx ;
union cvmx_stxx_spi4_dat ;
union cvmx_stxx_spi4_stat ;
union cvmx_stxx_stat_bytes_hi ;
union cvmx_stxx_stat_bytes_lo ;
union cvmx_stxx_stat_ctl ;
union cvmx_stxx_stat_pkt_xmt ;
