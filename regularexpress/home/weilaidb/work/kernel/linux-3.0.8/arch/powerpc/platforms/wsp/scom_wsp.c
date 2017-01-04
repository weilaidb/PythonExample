static scom_map_t wsp_scom_map(struct device_node *dev, u64 reg, u64 count)
static void wsp_scom_unmap(scom_map_t map)
static u64 wsp_scom_read(scom_map_t map, u32 reg)
static void wsp_scom_write(scom_map_t map, u32 reg, u64 value)
static const struct scom_controller wsp_scom_controller = ;
void scom_init_wsp(void)
