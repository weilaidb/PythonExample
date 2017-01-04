#define __CVMX_LED_DEFS_H__
#define CVMX_LED_BLINK (CVMX_ADD_IO_SEG(0x0001180000001A48ull))
#define CVMX_LED_CLK_PHASE (CVMX_ADD_IO_SEG(0x0001180000001A08ull))
#define CVMX_LED_CYLON (CVMX_ADD_IO_SEG(0x0001180000001AF8ull))
#define CVMX_LED_DBG (CVMX_ADD_IO_SEG(0x0001180000001A18ull))
#define CVMX_LED_EN (CVMX_ADD_IO_SEG(0x0001180000001A00ull))
#define CVMX_LED_POLARITY (CVMX_ADD_IO_SEG(0x0001180000001A50ull))
#define CVMX_LED_PRT (CVMX_ADD_IO_SEG(0x0001180000001A10ull))
#define CVMX_LED_PRT_FMT (CVMX_ADD_IO_SEG(0x0001180000001A30ull))
#define CVMX_LED_PRT_STATUSX(offset) (CVMX_ADD_IO_SEG(0x0001180000001A80ull) + ((offset) & 7) * 8)
#define CVMX_LED_UDD_CNTX(offset) (CVMX_ADD_IO_SEG(0x0001180000001A20ull) + ((offset) & 1) * 8)
#define CVMX_LED_UDD_DATX(offset) (CVMX_ADD_IO_SEG(0x0001180000001A38ull) + ((offset) & 1) * 8)
#define CVMX_LED_UDD_DAT_CLRX(offset) (CVMX_ADD_IO_SEG(0x0001180000001AC8ull) + ((offset) & 1) * 16)
#define CVMX_LED_UDD_DAT_SETX(offset) (CVMX_ADD_IO_SEG(0x0001180000001AC0ull) + ((offset) & 1) * 16)
union cvmx_led_blink ;
union cvmx_led_clk_phase ;
union cvmx_led_cylon ;
union cvmx_led_dbg ;
union cvmx_led_en ;
union cvmx_led_polarity ;
union cvmx_led_prt ;
union cvmx_led_prt_fmt ;
union cvmx_led_prt_statusx ;
union cvmx_led_udd_cntx ;
union cvmx_led_udd_datx ;
union cvmx_led_udd_dat_clrx ;
union cvmx_led_udd_dat_setx ;
