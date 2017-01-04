static u8 *ebony_mac0, *ebony_mac1;
#define EBONY_FPGA_PATH		"/plb/opb/ebc/fpga"
#define	EBONY_FPGA_FLASH_SEL	0x01
#define EBONY_SMALL_FLASH_PATH	"/plb/opb/ebc/small-flash"
static void ebony_flashsel_fixup(void)
static void ebony_fixups(void)
void ebony_init(void *mac0, void *mac1)
