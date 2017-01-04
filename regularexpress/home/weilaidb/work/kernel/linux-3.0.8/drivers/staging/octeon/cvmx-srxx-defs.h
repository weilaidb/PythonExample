#define __CVMX_SRXX_DEFS_H__
#define CVMX_SRXX_COM_CTL(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000200ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_SRXX_IGN_RX_FULL(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000218ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_SRXX_SPI4_CALX(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180090000000ull + (((offset) & 31) * 8) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_SRXX_SPI4_STAT(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000208ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_SRXX_SW_TICK_CTL(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000220ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_SRXX_SW_TICK_DAT(block_id) \
CVMX_ADD_IO_SEG(0x0001180090000228ull + (((block_id) & 1) * 0x8000000ull))
union cvmx_srxx_com_ctl ;
union cvmx_srxx_ign_rx_full ;
union cvmx_srxx_spi4_calx ;
union cvmx_srxx_spi4_stat ;
union cvmx_srxx_sw_tick_ctl ;
union cvmx_srxx_sw_tick_dat ;
