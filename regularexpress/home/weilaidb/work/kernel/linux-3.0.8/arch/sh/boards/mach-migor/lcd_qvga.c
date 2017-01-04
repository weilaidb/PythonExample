static void reset_lcd_module(void)
static unsigned long adjust_reg18(unsigned short data)
static void write_reg(void *sys_ops_handle,
struct sh_mobile_lcdc_sys_bus_ops *sys_ops,
unsigned short reg, unsigned short data)
static void write_reg16(void *sys_ops_handle,
struct sh_mobile_lcdc_sys_bus_ops *sys_ops,
unsigned short reg, unsigned short data)
static unsigned long read_reg16(void *sys_ops_handle,
struct sh_mobile_lcdc_sys_bus_ops *sys_ops,
unsigned short reg)
static void migor_lcd_qvga_seq(void *sys_ops_handle,
struct sh_mobile_lcdc_sys_bus_ops *sys_ops,
unsigned short const *data, int no_data)
static const unsigned short sync_data[] = ;
static const unsigned short magic0_data[] = ;
static const unsigned short magic1_data[] = ;
static const unsigned short magic2_data[] = ;
static const unsigned short magic3_data[] = ;
int migor_lcd_qvga_setup(void *board_data, void *sohandle,
struct sh_mobile_lcdc_sys_bus_ops *so)
