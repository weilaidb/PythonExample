int static_init(struct pcmcia_socket *s)
struct resource *pcmcia_make_resource(unsigned long start, unsigned long end,
int flags, const char *name)
static int static_find_io(struct pcmcia_socket *s, unsigned int attr,
unsigned int *base, unsigned int num,
unsigned int align, struct resource **parent)
struct pccard_resource_ops pccard_static_ops = ;
EXPORT_SYMBOL(pccard_static_ops);
MODULE_AUTHOR("David A. Hinds, Dominik Brodowski");
MODULE_LICENSE("GPL");
MODULE_ALIAS("rsrc_nonstatic");
