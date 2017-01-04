static int fd_map;
static int mmap_failed;
static void *ehdr_curr;
static char gpfx;
static struct stat sb;
static jmp_buf jmpenv;
static const char *altmcount;
static int warn_on_notrace_sect;
enum ;
static void
cleanup(void)
static void __attribute__((noreturn))
fail_file(void)
static void __attribute__((noreturn))
succeed_file(void)
static off_t
ulseek(int const fd, off_t const offset, int const whence)
static size_t
uread(int const fd, void *const buf, size_t const count)
static size_t
uwrite(int const fd, void const *const buf, size_t const count)
static void *
umalloc(size_t size)
static unsigned char ideal_nop5_x86_64[5] = ;
static unsigned char ideal_nop5_x86_32[5] = ;
static unsigned char *ideal_nop;
static char rel_type_nop;
static int (*make_nop)(void *map, size_t const offset);
static int make_nop_x86(void *map, size_t const offset)
static void *mmap_file(char const *fname)
static uint64_t w8rev(uint64_t const x)
static uint32_t w4rev(uint32_t const x)
static uint32_t w2rev(uint16_t const x)
static uint64_t w8nat(uint64_t const x)
static uint32_t w4nat(uint32_t const x)
static uint32_t w2nat(uint16_t const x)
static uint64_t (*w8)(uint64_t);
static uint32_t (*w)(uint32_t);
static uint32_t (*w2)(uint16_t);
static int
is_mcounted_section_name(char const *const txtname)
#define RECORD_MCOUNT_64
typedef uint8_t myElf64_Byte;
union mips_r_info ;
static uint64_t MIPS64_r_sym(Elf64_Rel const *rp)
static void MIPS64_r_info(Elf64_Rel *const rp, unsigned sym, unsigned type)
static void
do_file(char const *const fname)
int
main(int argc, char *argv[])
