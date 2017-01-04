MODULE_DESCRIPTION("ISDN4Linux: Driver for Spellcaster card");
MODULE_AUTHOR("Spellcaster Telecommunications Inc.");
MODULE_LICENSE("GPL");
board *sc_adapter[MAX_CARDS];
int cinst;
static char devname[] = "scX";
static const char version[] = "2.0b1";
static const char *boardname[] = ;
static unsigned int io[] = ;
static unsigned char irq[] = ;
static unsigned long ram[] = ;
static int do_reset = 0;
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param_array(ram, int, NULL, 0);
module_param(do_reset, bool, 0);
static int identify_board(unsigned long, unsigned int);
static int __init sc_init(void)
static void __exit sc_exit(void)
static int identify_board(unsigned long rambase, unsigned int iobase)
module_init(sc_init);
module_exit(sc_exit);
