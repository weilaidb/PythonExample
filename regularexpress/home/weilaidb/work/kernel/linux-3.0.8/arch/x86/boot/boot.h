#define BOOT_BOOT_H
#define STACK_SIZE	512
#define BUILD_BUG_ON(condition) ((void)sizeof(char[1 - 2*!!(condition)]))
#define ARRAY_SIZE(x) (sizeof(x) / sizeof(*(x)))
extern struct setup_header hdr;
extern struct boot_params boot_params;
#define cpu_relax()	asm volatile("rep; nop")
static inline void outb(u8 v, u16 port)
static inline u8 inb(u16 port)
static inline void outw(u16 v, u16 port)
static inline u16 inw(u16 port)
static inline void outl(u32 v, u16 port)
static inline u32 inl(u32 port)
static inline void io_delay(void)
static inline u16 ds(void)
static inline void set_fs(u16 seg)
static inline u16 fs(void)
static inline void set_gs(u16 seg)
static inline u16 gs(void)
typedef unsigned int addr_t;
static inline u8 rdfs8(addr_t addr)
static inline u16 rdfs16(addr_t addr)
static inline u32 rdfs32(addr_t addr)
static inline void wrfs8(u8 v, addr_t addr)
static inline void wrfs16(u16 v, addr_t addr)
static inline void wrfs32(u32 v, addr_t addr)
static inline u8 rdgs8(addr_t addr)
static inline u16 rdgs16(addr_t addr)
static inline u32 rdgs32(addr_t addr)
static inline void wrgs8(u8 v, addr_t addr)
static inline void wrgs16(u16 v, addr_t addr)
static inline void wrgs32(u32 v, addr_t addr)
static inline int memcmp(const void *s1, const void *s2, size_t len)
static inline int memcmp_fs(const void *s1, addr_t s2, size_t len)
static inline int memcmp_gs(const void *s1, addr_t s2, size_t len)
extern char _end[];
extern char *HEAP;
extern char *heap_end;
#define RESET_HEAP() ((void *)( HEAP = _end ))
static inline char *__get_heap(size_t s, size_t a, size_t n)
#define GET_HEAP(type, n) \
((type *)__get_heap(sizeof(type),__alignof__(type),(n)))
static inline bool heap_free(size_t n)
void copy_to_fs(addr_t dst, void *src, size_t len);
void *copy_from_fs(void *dst, addr_t src, size_t len);
void copy_to_gs(addr_t dst, void *src, size_t len);
void *copy_from_gs(void *dst, addr_t src, size_t len);
void *memcpy(void *dst, void *src, size_t len);
void *memset(void *dst, int c, size_t len);
#define memcpy(d,s,l) __builtin_memcpy(d,s,l)
#define memset(d,c,l) __builtin_memset(d,c,l)
int enable_a20(void);
int query_apm_bios(void);
struct biosregs ;
void intcall(u8 int_no, const struct biosregs *ireg, struct biosregs *oreg);
int __cmdline_find_option(u32 cmdline_ptr, const char *option, char *buffer, int bufsize);
int __cmdline_find_option_bool(u32 cmdline_ptr, const char *option);
static inline int cmdline_find_option(const char *option, char *buffer, int bufsize)
static inline int cmdline_find_option_bool(const char *option)
struct cpu_features ;
extern struct cpu_features cpu;
int check_cpu(int *cpu_level_ptr, int *req_level_ptr, u32 **err_flags_ptr);
int validate_cpu(void);
extern int early_serial_base;
void console_init(void);
void query_edd(void);
void __attribute__((noreturn)) die(void);
int query_mca(void);
int detect_memory(void);
void __attribute__((noreturn)) go_to_protected_mode(void);
void __attribute__((noreturn))
protected_mode_jump(u32 entrypoint, u32 bootparams);
int sprintf(char *buf, const char *fmt, ...);
int vsprintf(char *buf, const char *fmt, va_list args);
int printf(const char *fmt, ...);
void initregs(struct biosregs *regs);
int strcmp(const char *str1, const char *str2);
int strncmp(const char *cs, const char *ct, size_t count);
size_t strnlen(const char *s, size_t maxlen);
unsigned int atou(const char *s);
unsigned long long simple_strtoull(const char *cp, char **endp, unsigned int base);
void puts(const char *);
void putchar(int);
int getchar(void);
void kbd_flush(void);
int getchar_timeout(void);
void set_video(void);
int set_mode(u16 mode);
int mode_defined(u16 mode);
void probe_cards(int unsafe);
void vesa_store_edid(void);
