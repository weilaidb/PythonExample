struct boot_params boot_params __attribute__((aligned(16)));
char *HEAP = _end;
char *heap_end = _end;
static void copy_boot_params(void)
static void keyboard_set_repeat(void)
static void query_ist(void)
static void set_bios_mode(void)
static void init_heap(void)
void main(void)
