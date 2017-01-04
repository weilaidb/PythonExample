int cmx255_pcmcia_init(void);
int cmx270_pcmcia_init(void);
void cmx255_pcmcia_exit(void);
void cmx270_pcmcia_exit(void);
static int __init cmx2xx_pcmcia_init(void)
static void __exit cmx2xx_pcmcia_exit(void)
module_init(cmx2xx_pcmcia_init);
module_exit(cmx2xx_pcmcia_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mike Rapoport <mike@compulab.co.il>");
MODULE_DESCRIPTION("CM-x2xx PCMCIA driver");
