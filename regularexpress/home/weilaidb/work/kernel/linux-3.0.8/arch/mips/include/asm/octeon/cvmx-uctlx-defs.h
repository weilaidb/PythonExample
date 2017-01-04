#define __CVMX_UCTLX_TYPEDEFS_H__
#define CVMX_UCTLX_BIST_STATUS(block_id) (CVMX_ADD_IO_SEG(0x000118006F0000A0ull))
#define CVMX_UCTLX_CLK_RST_CTL(block_id) (CVMX_ADD_IO_SEG(0x000118006F000000ull))
#define CVMX_UCTLX_EHCI_CTL(block_id) (CVMX_ADD_IO_SEG(0x000118006F000080ull))
#define CVMX_UCTLX_EHCI_FLA(block_id) (CVMX_ADD_IO_SEG(0x000118006F0000A8ull))
#define CVMX_UCTLX_ERTO_CTL(block_id) (CVMX_ADD_IO_SEG(0x000118006F000090ull))
#define CVMX_UCTLX_IF_ENA(block_id) (CVMX_ADD_IO_SEG(0x000118006F000030ull))
#define CVMX_UCTLX_INT_ENA(block_id) (CVMX_ADD_IO_SEG(0x000118006F000028ull))
#define CVMX_UCTLX_INT_REG(block_id) (CVMX_ADD_IO_SEG(0x000118006F000020ull))
#define CVMX_UCTLX_OHCI_CTL(block_id) (CVMX_ADD_IO_SEG(0x000118006F000088ull))
#define CVMX_UCTLX_ORTO_CTL(block_id) (CVMX_ADD_IO_SEG(0x000118006F000098ull))
#define CVMX_UCTLX_PPAF_WM(block_id) (CVMX_ADD_IO_SEG(0x000118006F000038ull))
#define CVMX_UCTLX_UPHY_CTL_STATUS(block_id) (CVMX_ADD_IO_SEG(0x000118006F000008ull))
#define CVMX_UCTLX_UPHY_PORTX_CTL_STATUS(offset, block_id) (CVMX_ADD_IO_SEG(0x000118006F000010ull) + (((offset) & 1) + ((block_id) & 0) * 0x0ull) * 8)
union cvmx_uctlx_bist_status ;
union cvmx_uctlx_clk_rst_ctl ;
union cvmx_uctlx_ehci_ctl ;
union cvmx_uctlx_ehci_fla ;
union cvmx_uctlx_erto_ctl ;
union cvmx_uctlx_if_ena ;
union cvmx_uctlx_int_ena ;
union cvmx_uctlx_int_reg ;
union cvmx_uctlx_ohci_ctl ;
union cvmx_uctlx_orto_ctl ;
union cvmx_uctlx_ppaf_wm ;
union cvmx_uctlx_uphy_ctl_status ;
union cvmx_uctlx_uphy_portx_ctl_status ;
