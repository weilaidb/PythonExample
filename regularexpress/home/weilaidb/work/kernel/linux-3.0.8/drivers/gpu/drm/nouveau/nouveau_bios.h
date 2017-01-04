#define __NOUVEAU_BIOS_H__
#define DCB_MAX_NUM_ENTRIES 16
#define DCB_MAX_NUM_I2C_ENTRIES 16
#define DCB_MAX_NUM_GPIO_ENTRIES 32
#define DCB_MAX_NUM_CONNECTOR_ENTRIES 16
#define DCB_LOC_ON_CHIP 0
#define ROM16(x) le16_to_cpu(*(uint16_t *)&(x))
#define ROM32(x) le32_to_cpu(*(uint32_t *)&(x))
#define ROMPTR(bios, x) (ROM16(x) ? &(bios)->data[ROM16(x)] : NULL)
struct bit_entry ;
int bit_table(struct drm_device *, u8 id, struct bit_entry *);
struct dcb_i2c_entry ;
enum dcb_gpio_tag ;
struct dcb_gpio_entry ;
struct dcb_gpio_table ;
enum dcb_connector_type ;
struct dcb_connector_table_entry ;
struct dcb_connector_table ;
enum dcb_type ;
struct dcb_entry ;
struct dcb_table ;
enum nouveau_or ;
enum LVDS_script ;
enum pll_types ;
struct pll_lims ;
struct nvbios ;
