struct pcmcia_align_data ;
static resource_size_t pcmcia_align(void *align_data,
const struct resource *res,
resource_size_t size, resource_size_t align)
static struct resource *__iodyn_find_io_region(struct pcmcia_socket *s,
unsigned long base, int num,
unsigned long align)
static int iodyn_find_io(struct pcmcia_socket *s, unsigned int attr,
unsigned int *base, unsigned int num,
unsigned int align, struct resource **parent)
struct pccard_resource_ops pccard_iodyn_ops = ;
EXPORT_SYMBOL(pccard_iodyn_ops);
