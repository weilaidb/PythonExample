#define ERG_DPRAM_PAGE_SIZE 0x2000
#define BOOT_IMG_SIZE 4096
#define ERG_DPRAM_FILL_SIZE (ERG_DPRAM_PAGE_SIZE - BOOT_IMG_SIZE)
#define ERG_TO_HY_BUF_SIZE  0x0E00
#define ERG_TO_PC_BUF_SIZE  0x0E00
typedef struct ErgDpram_tag  tErgDpram;
#define PCI9050_INTR_REG    0x4C
#define PCI9050_USER_IO     0x51
#define PCI9050_INTR_REG_EN1    0x01
#define PCI9050_INTR_REG_POL1   0x02
#define PCI9050_INTR_REG_STAT1  0x04
#define PCI9050_INTR_REG_ENPCI  0x40
#define PCI9050_USER_IO_EN3     0x02
#define PCI9050_USER_IO_DIR3    0x04
#define PCI9050_USER_IO_DAT3    0x08
#define PCI9050_E1_RESET    (                     PCI9050_USER_IO_DIR3)
#define PCI9050_E1_RUN      (PCI9050_USER_IO_DAT3|PCI9050_USER_IO_DIR3)
