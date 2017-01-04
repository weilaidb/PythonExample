static void flexcop_sram_set_chip(struct flexcop_device *fc,
flexcop_sram_type_t type)
int flexcop_sram_init(struct flexcop_device *fc)
int flexcop_sram_set_dest(struct flexcop_device *fc, flexcop_sram_dest_t dest,
flexcop_sram_dest_target_t target)
EXPORT_SYMBOL(flexcop_sram_set_dest);
void flexcop_wan_set_speed(struct flexcop_device *fc, flexcop_wan_speed_t s)
EXPORT_SYMBOL(flexcop_wan_set_speed);
void flexcop_sram_ctrl(struct flexcop_device *fc, int usb_wan, int sramdma, int maximumfill)
EXPORT_SYMBOL(flexcop_sram_ctrl);
