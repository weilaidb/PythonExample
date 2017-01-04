static int free_vme_vec_bitmap;
asmlinkage void falcon_hblhandler(void);
asm(".text\n"
__ALIGN_STR "\n\t"
"falcon_hblhandler:\n\t"
"orw	#0x200,%sp@\n\t"
"rte");
extern void atari_microwire_cmd(int cmd);
extern int atari_SCC_reset_done;
static int atari_startup_irq(unsigned int irq)
static void atari_shutdown_irq(unsigned int irq)
static struct irq_controller atari_irq_controller = ;
void __init atari_init_IRQ(void)
unsigned long atari_register_vme_int(void)
EXPORT_SYMBOL(atari_register_vme_int);
void atari_unregister_vme_int(unsigned long irq)
EXPORT_SYMBOL(atari_unregister_vme_int);
