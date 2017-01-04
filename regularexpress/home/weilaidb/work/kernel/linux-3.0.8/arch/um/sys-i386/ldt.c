extern int modify_ldt(int func, void *ptr, unsigned long bytecount);
static long write_ldt_entry(struct mm_id *mm_idp, int func,
struct user_desc *desc, void **addr, int done)
static long read_ldt_from_host(void __user * ptr, unsigned long bytecount)
static int read_ldt(void __user * ptr, unsigned long bytecount)
static int read_default_ldt(void __user * ptr, unsigned long bytecount)
static int write_ldt(void __user * ptr, unsigned long bytecount, int func)
static long do_modify_ldt_skas(int func, void __user *ptr,
unsigned long bytecount)
static DEFINE_SPINLOCK(host_ldt_lock);
static short dummy_list[9] = ;
static short * host_ldt_entries = NULL;
static void ldt_get_host_info(void)
long init_new_ldt(struct mm_context *new_mm, struct mm_context *from_mm)
void free_ldt(struct mm_context *mm)
int sys_modify_ldt(int func, void __user *ptr, unsigned long bytecount)
