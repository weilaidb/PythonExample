#define _IXGB_EE_H_
#define IXGB_EEPROM_SIZE    64
#define IXGB_ETH_LENGTH_OF_ADDRESS   6
#define EEPROM_READ_OPCODE  0x6
#define EEPROM_WRITE_OPCODE 0x5
#define EEPROM_ERASE_OPCODE 0x7
#define EEPROM_EWEN_OPCODE  0x13
#define EEPROM_EWDS_OPCODE  0x10
#define EEPROM_IA_1_2_REG        0x0000
#define EEPROM_IA_3_4_REG        0x0001
#define EEPROM_IA_5_6_REG        0x0002
#define EEPROM_COMPATIBILITY_REG 0x0003
#define EEPROM_PBA_1_2_REG       0x0008
#define EEPROM_PBA_3_4_REG       0x0009
#define EEPROM_INIT_CONTROL1_REG 0x000A
#define EEPROM_SUBSYS_ID_REG     0x000B
#define EEPROM_SUBVEND_ID_REG    0x000C
#define EEPROM_DEVICE_ID_REG     0x000D
#define EEPROM_VENDOR_ID_REG     0x000E
#define EEPROM_INIT_CONTROL2_REG 0x000F
#define EEPROM_SWDPINS_REG       0x0020
#define EEPROM_CIRCUIT_CTRL_REG  0x0021
#define EEPROM_D0_D3_POWER_REG   0x0022
#define EEPROM_FLASH_VERSION     0x0032
#define EEPROM_CHECKSUM_REG      0x003F
#define EEPROM_ICW1_SIGNATURE_MASK  0xC000
#define EEPROM_ICW1_SIGNATURE_VALID 0x4000
#define EEPROM_ICW1_SIGNATURE_CLEAR 0x0000
#define EEPROM_SUM 0xBABA
#define PBA_SIZE 4
struct ixgb_ee_map_type ;
u16 ixgb_read_eeprom(struct ixgb_hw *hw, u16 reg);
bool ixgb_validate_eeprom_checksum(struct ixgb_hw *hw);
void ixgb_update_eeprom_checksum(struct ixgb_hw *hw);
void ixgb_write_eeprom(struct ixgb_hw *hw, u16 reg, u16 data);
