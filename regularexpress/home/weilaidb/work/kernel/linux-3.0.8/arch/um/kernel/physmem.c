static int physmem_fd = -1;
unsigned long high_physmem;
extern unsigned long long physmem_size;
int __init init_maps(unsigned long physmem, unsigned long iomem,
unsigned long highmem)
void map_memory(unsigned long virt, unsigned long phys, unsigned long len,
int r, int w, int x)
extern int __syscall_stub_start;
void __init setup_physmem(unsigned long start, unsigned long reserve_end,
unsigned long len, unsigned long long highmem)
int phys_mapping(unsigned long phys, unsigned long long *offset_out)
static int __init uml_mem_setup(char *line, int *add)
__uml_setup("mem=", uml_mem_setup,
"mem=<Amount of desired ram>\n"
"    This controls how much \"physical\" memory the kernel allocates\n"
"    for the system. The size is specified as a number followed by\n"
"    one of 'k', 'K', 'm', 'M', which have the obvious meanings.\n"
"    This is not related to the amount of memory in the host.  It can\n"
"    be more, and the excess, if it's ever used, will just be swapped out.\n"
"	Example: mem=64M\n\n"
);
extern int __init parse_iomem(char *str, int *add);
__uml_setup("iomem=", parse_iomem,
"iomem=<name>,<file>\n"
"    Configure <file> as an IO memory region named <name>.\n\n"
);
struct iomem_region *iomem_regions;
int iomem_size;
unsigned long find_iomem(char *driver, unsigned long *len_out)
static int setup_iomem(void)
__initcall(setup_iomem);
