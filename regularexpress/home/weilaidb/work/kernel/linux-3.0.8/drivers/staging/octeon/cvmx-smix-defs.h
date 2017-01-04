#define __CVMX_SMIX_DEFS_H__
#define CVMX_SMIX_CLK(offset) \
CVMX_ADD_IO_SEG(0x0001180000001818ull + (((offset) & 1) * 256))
#define CVMX_SMIX_CMD(offset) \
CVMX_ADD_IO_SEG(0x0001180000001800ull + (((offset) & 1) * 256))
#define CVMX_SMIX_EN(offset) \
CVMX_ADD_IO_SEG(0x0001180000001820ull + (((offset) & 1) * 256))
#define CVMX_SMIX_RD_DAT(offset) \
CVMX_ADD_IO_SEG(0x0001180000001810ull + (((offset) & 1) * 256))
#define CVMX_SMIX_WR_DAT(offset) \
CVMX_ADD_IO_SEG(0x0001180000001808ull + (((offset) & 1) * 256))
union cvmx_smix_clk ;
union cvmx_smix_cmd ;
union cvmx_smix_en ;
union cvmx_smix_rd_dat ;
union cvmx_smix_wr_dat ;
