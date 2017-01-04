extern void gdb_handle_exception(void);
extern void kgdb_handle_exception(void);
static int kgdb_started = 0;
typedef
struct register_image
registers;
typedef
struct bp_register_image
support_registers;
enum register_name
;
static int register_size[] =
;
registers reg;
support_registers sreg;
static char *gdb_cris_strcpy(char *s1, const char *s2);
static int gdb_cris_strlen(const char *s);
static void *gdb_cris_memchr(const void *s, int c, int n);
static int gdb_cris_strtol(const char *s, char **endptr, int base);
static int write_register(int regno, char *val);
static int read_register(char regno, unsigned int *valptr);
int getDebugChar(void);
int getDebugChar(void)
void putDebugChar(int val);
void putDebugChar(int val)
static int hex(char ch);
static char *mem2hex(char *buf, unsigned char *mem, int count);
static unsigned char *hex2mem(unsigned char *mem, char *buf, int count);
static unsigned char *bin2mem(unsigned char *mem, unsigned char *buf, int count);
static void getpacket(char *buffer);
static void putpacket(char *buffer);
static void stub_is_stopped(int sigval);
void handle_exception(int sigval);
static void kill_restart(void);
void putDebugString(const unsigned char *str, int len);
void breakpoint(void);
#define USEDVAR(name)
#define USEDFUN(name)
#define BUFMAX 512
#define RUNLENMAX 64
static char input_buffer[BUFMAX];
static char output_buffer[BUFMAX];
enum error_type
;
static char *error_message[] =
;
#define INTERNAL_STACK_SIZE 1024
char internal_stack[INTERNAL_STACK_SIZE];
static int dynamic_bp = 0;
static char*
gdb_cris_strcpy(char *s1, const char *s2)
static int
gdb_cris_strlen(const char *s)
static void*
gdb_cris_memchr(const void *s, int c, int n)
static int
gdb_cris_strtol(const char *s, char **endptr, int base)
static int
write_register(int regno, char *val)
static int
read_register(char regno, unsigned int *valptr)
static int
hex(char ch)
static char *
mem2hex(char *buf, unsigned char *mem, int count)
static char *
mem2hex_nbo(char *buf, unsigned char *mem, int count)
static unsigned char*
hex2mem(unsigned char *mem, char *buf, int count)
static unsigned char*
bin2mem(unsigned char *mem, unsigned char *buf, int count)
static void
getpacket(char *buffer)
static void
putpacket(char *buffer)
void
putDebugString(const unsigned char *str, int len)
static void
stub_is_stopped(int sigval)
int insn_size(unsigned long pc)
void register_fixup(int sigval)
static void insert_watchpoint(char type, int addr, int len)
static void remove_watchpoint(char type, int addr, int len)
void
handle_exception(int sigval)
void
kgdb_init(void)
static void
kill_restart(void)
void
breakpoint(void)
