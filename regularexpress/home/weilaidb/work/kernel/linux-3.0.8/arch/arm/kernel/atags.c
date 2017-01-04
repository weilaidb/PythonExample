struct buffer ;
static int
read_buffer(char* page, char** start, off_t off, int count,
int* eof, void* data)
#define BOOT_PARAMS_SIZE 1536
static char __initdata atags_copy[BOOT_PARAMS_SIZE];
void __init save_atags(const struct tag *tags)
static int __init init_atags_procfs(void)
arch_initcall(init_atags_procfs);
