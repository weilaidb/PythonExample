static int pnx8550_timers_read(char* page, char** start, off_t offset, int count, int* eof, void* data)
static int pnx8550_registers_read(char* page, char** start, off_t offset, int count, int* eof, void* data)
static struct proc_dir_entry* pnx8550_dir;
static struct proc_dir_entry* pnx8550_timers;
static struct proc_dir_entry* pnx8550_registers;
static int pnx8550_proc_init( void )
__initcall(pnx8550_proc_init);
