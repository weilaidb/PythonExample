#define DRV_MODULE_NAME     "mac_esp"
#define PFX                 DRV_MODULE_NAME ": "
#define DRV_VERSION         "1.000"
#define DRV_MODULE_RELDATE  "Sept 15, 2007"
#define MAC_ESP_IO_BASE          0x50F00000
#define MAC_ESP_REGS_QUADRA      (MAC_ESP_IO_BASE + 0x10000)
#define MAC_ESP_REGS_QUADRA2     (MAC_ESP_IO_BASE + 0xF000)
#define MAC_ESP_REGS_QUADRA3     (MAC_ESP_IO_BASE + 0x18000)
#define MAC_ESP_REGS_SPACING     0x402
#define MAC_ESP_PDMA_REG         0xF9800024
#define MAC_ESP_PDMA_REG_SPACING 0x4
#define MAC_ESP_PDMA_IO_OFFSET   0x100
#define esp_read8(REG)		mac_esp_read8(esp, REG)
#define esp_write8(VAL, REG)	mac_esp_write8(esp, VAL, REG)
struct mac_esp_priv ;
static struct esp *esp_chips[2];
#define MAC_ESP_GET_PRIV(esp) ((struct mac_esp_priv *) \
platform_get_drvdata((struct platform_device *) \
(esp->dev)))
static inline void mac_esp_write8(struct esp *esp, u8 val, unsigned long reg)
static inline u8 mac_esp_read8(struct esp *esp, unsigned long reg)
static dma_addr_t mac_esp_map_single(struct esp *esp, void *buf,
size_t sz, int dir)
static int mac_esp_map_sg(struct esp *esp, struct scatterlist *sg,
int num_sg, int dir)
static void mac_esp_unmap_single(struct esp *esp, dma_addr_t addr,
size_t sz, int dir)
static void mac_esp_unmap_sg(struct esp *esp, struct scatterlist *sg,
int num_sg, int dir)
static void mac_esp_reset_dma(struct esp *esp)
static void mac_esp_dma_drain(struct esp *esp)
static void mac_esp_dma_invalidate(struct esp *esp)
static int mac_esp_dma_error(struct esp *esp)
static inline int mac_esp_wait_for_empty_fifo(struct esp *esp)
static inline int mac_esp_wait_for_dreq(struct esp *esp)
#define MAC_ESP_PDMA_LOOP(operands) \
asm volatile ( \
"       tstw %1                   \n" \
"       jbeq 20f                  \n" \
"1:     movew " operands "        \n" \
"2:     movew " operands "        \n" \
"3:     movew " operands "        \n" \
"4:     movew " operands "        \n" \
"5:     movew " operands "        \n" \
"6:     movew " operands "        \n" \
"7:     movew " operands "        \n" \
"8:     movew " operands "        \n" \
"9:     movew " operands "        \n" \
"10:    movew " operands "        \n" \
"11:    movew " operands "        \n" \
"12:    movew " operands "        \n" \
"13:    movew " operands "        \n" \
"14:    movew " operands "        \n" \
"15:    movew " operands "        \n" \
"16:    movew " operands "        \n" \
"       subqw #1,%1               \n" \
"       jbne 1b                   \n" \
"20:    tstw %2                   \n" \
"       jbeq 30f                  \n" \
"21:    movew " operands "        \n" \
"       subqw #1,%2               \n" \
"       jbne 21b                  \n" \
"30:    tstw %3                   \n" \
"       jbeq 40f                  \n" \
"31:    moveb " operands "        \n" \
"32:    nop                       \n" \
"40:                              \n" \
"                                 \n" \
"       .section __ex_table,\"a\" \n" \
"       .align  4                 \n" \
"       .long   1b,40b            \n" \
"       .long   2b,40b            \n" \
"       .long   3b,40b            \n" \
"       .long   4b,40b            \n" \
"       .long   5b,40b            \n" \
"       .long   6b,40b            \n" \
"       .long   7b,40b            \n" \
"       .long   8b,40b            \n" \
"       .long   9b,40b            \n" \
"       .long  10b,40b            \n" \
"       .long  11b,40b            \n" \
"       .long  12b,40b            \n" \
"       .long  13b,40b            \n" \
"       .long  14b,40b            \n" \
"       .long  15b,40b            \n" \
"       .long  16b,40b            \n" \
"       .long  21b,40b            \n" \
"       .long  31b,40b            \n" \
"       .long  32b,40b            \n" \
"       .previous                 \n" \
: "+a" (addr), "+r" (count32), "+r" (count2) \
: "g" (count1), "a" (mep->pdma_io))
static void mac_esp_send_pdma_cmd(struct esp *esp, u32 addr, u32 esp_count,
u32 dma_count, int write, u8 cmd)
static inline unsigned int mac_esp_wait_for_fifo(struct esp *esp)
static inline int mac_esp_wait_for_intr(struct esp *esp)
#define MAC_ESP_PIO_LOOP(operands, reg1) \
asm volatile ( \
"1:     moveb " operands " \n" \
"       subqw #1,%1        \n" \
"       jbne 1b            \n" \
: "+a" (addr), "+r" (reg1) \
: "a" (fifo))
#define MAC_ESP_PIO_FILL(operands, reg1) \
asm volatile ( \
"       moveb " operands " \n" \
"       moveb " operands " \n" \
"       moveb " operands " \n" \
"       moveb " operands " \n" \
"       moveb " operands " \n" \
"       moveb " operands " \n" \
"       moveb " operands " \n" \
"       moveb " operands " \n" \
"       moveb " operands " \n" \
"       moveb " operands " \n" \
"       moveb " operands " \n" \
"       moveb " operands " \n" \
"       moveb " operands " \n" \
"       moveb " operands " \n" \
"       moveb " operands " \n" \
"       moveb " operands " \n" \
"       subqw #8,%1        \n" \
"       subqw #8,%1        \n" \
: "+a" (addr), "+r" (reg1) \
: "a" (fifo))
#define MAC_ESP_FIFO_SIZE 16
static void mac_esp_send_pio_cmd(struct esp *esp, u32 addr, u32 esp_count,
u32 dma_count, int write, u8 cmd)
static int mac_esp_irq_pending(struct esp *esp)
static u32 mac_esp_dma_length_limit(struct esp *esp, u32 dma_addr, u32 dma_len)
static irqreturn_t mac_scsi_esp_intr(int irq, void *dev_id)
static struct esp_driver_ops mac_esp_ops = ;
static int __devinit esp_mac_probe(struct platform_device *dev)
static int __devexit esp_mac_remove(struct platform_device *dev)
static struct platform_driver esp_mac_driver = ;
static int __init mac_esp_init(void)
static void __exit mac_esp_exit(void)
MODULE_DESCRIPTION("Mac ESP SCSI driver");
MODULE_AUTHOR("Finn Thain <fthain@telegraphics.com.au>");
MODULE_LICENSE("GPL v2");
MODULE_VERSION(DRV_VERSION);
MODULE_ALIAS("platform:" DRV_MODULE_NAME);
module_init(mac_esp_init);
module_exit(mac_esp_exit);
