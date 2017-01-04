#define HYDRA_CPD_PD0	0x00000001
#define HYDRA_CPD_PD1	0x00000002
#define HYDRA_CPD_PD2	0x00000004
#define HYDRA_CPD_PD3	0x00000008
#define HYDRA_SCLK	HYDRA_CPD_PD0
#define HYDRA_SDAT	HYDRA_CPD_PD1
#define HYDRA_SCLK_OE	0x00000010
#define HYDRA_SDAT_OE	0x00000020
static inline void pdregw(void *data, u32 val)
static inline u32 pdregr(void *data)
static void hydra_bit_setscl(void *data, int state)
static void hydra_bit_setsda(void *data, int state)
static int hydra_bit_getscl(void *data)
static int hydra_bit_getsda(void *data)
static struct i2c_algo_bit_data hydra_bit_data = ;
static struct i2c_adapter hydra_adap = ;
static const struct pci_device_id hydra_ids[] = ;
MODULE_DEVICE_TABLE (pci, hydra_ids);
static int __devinit hydra_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void __devexit hydra_remove(struct pci_dev *dev)
static struct pci_driver hydra_driver = ;
static int __init i2c_hydra_init(void)
static void __exit i2c_hydra_exit(void)
MODULE_AUTHOR("Geert Uytterhoeven <geert@linux-m68k.org>");
MODULE_DESCRIPTION("i2c for Apple Hydra Mac I/O");
MODULE_LICENSE("GPL");
module_init(i2c_hydra_init);
module_exit(i2c_hydra_exit);
