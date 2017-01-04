static u16 nes_read16_eeprom(void __iomem *addr, u16 offset);
u32 mh_detected;
u32 mh_pauses_sent;
int nes_read_eeprom_values(struct nes_device *nesdev, struct nes_adapter *nesadapter)
static u16 nes_read16_eeprom(void __iomem *addr, u16 offset)
void nes_write_1G_phy_reg(struct nes_device *nesdev, u8 phy_reg, u8 phy_addr, u16 data)
void nes_read_1G_phy_reg(struct nes_device *nesdev, u8 phy_reg, u8 phy_addr, u16 *data)
void nes_write_10G_phy_reg(struct nes_device *nesdev, u16 phy_addr, u8 dev_addr, u16 phy_reg,
u16 data)
void nes_read_10G_phy_reg(struct nes_device *nesdev, u8 phy_addr, u8 dev_addr, u16 phy_reg)
struct nes_cqp_request *nes_get_cqp_request(struct nes_device *nesdev)
void nes_free_cqp_request(struct nes_device *nesdev,
struct nes_cqp_request *cqp_request)
void nes_put_cqp_request(struct nes_device *nesdev,
struct nes_cqp_request *cqp_request)
void nes_post_cqp_request(struct nes_device *nesdev,
struct nes_cqp_request *cqp_request)
int nes_arp_table(struct nes_device *nesdev, u32 ip_addr, u8 *mac_addr, u32 action)
void nes_mh_fix(unsigned long parm)
void nes_clc(unsigned long parm)
void nes_dump_mem(unsigned int dump_debug_level, void *addr, int length)
