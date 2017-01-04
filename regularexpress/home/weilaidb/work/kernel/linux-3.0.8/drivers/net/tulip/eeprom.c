static struct eeprom_fixup eeprom_fixups[] __devinitdata = ;
static const char *block_name[] __devinitdata = ;
static void __devinit tulip_build_fake_mediatable(struct tulip_private *tp)
void __devinit tulip_parse_eeprom(struct net_device *dev)
#define EE_SHIFT_CLK	0x02
#define EE_CS		0x01
#define EE_DATA_WRITE	0x04
#define EE_WRITE_0	0x01
#define EE_WRITE_1	0x05
#define EE_DATA_READ	0x08
#define EE_ENB		(0x4800 | EE_CS)
#define eeprom_delay()	ioread32(ee_addr)
#define EE_READ_CMD		(6)
int __devinit tulip_read_eeprom(struct net_device *dev, int location, int addr_len)
