MODULE_DESCRIPTION("ISDN4Linux: Driver for PCBIT-T card");
MODULE_AUTHOR("Pedro Roque Marques");
MODULE_LICENSE("GPL");
static int mem[MAX_PCBIT_CARDS];
static int irq[MAX_PCBIT_CARDS];
module_param_array(mem, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
static int num_boards;
struct pcbit_dev * dev_pcbit[MAX_PCBIT_CARDS];
static int __init pcbit_init(void)
static void __exit pcbit_exit(void)
#define MAX_PARA	(MAX_PCBIT_CARDS * 2)
static int __init pcbit_setup(char *line)
__setup("pcbit=", pcbit_setup);
module_init(pcbit_init);
module_exit(pcbit_exit);
