#if HAVE_POSIXTHREAD && SYS_LINUX
#if SYS_BEOS
#if SYS_MACOSX || SYS_FREEBSD
#if SYS_OPENBSD
const x264_cpu_name_t x264_cpu_names[] =
;
#if (ARCH_PPC && SYS_LINUX) || (ARCH_ARM && !HAVE_NEON)
static sigjmp_buf jmpbuf;
static volatile sig_atomic_t canjump = 0;
static void sigill_handler( int sig )
#if HAVE_MMX
int x264_cpu_cpuid_test( void );
void x264_cpu_cpuid( uint32_t op, uint32_t *eax, uint32_t *ebx, uint32_t *ecx, uint32_t *edx );
void x264_cpu_xgetbv( uint32_t op, uint32_t *eax, uint32_t *edx );
uint32_t x264_cpu_detect( void )
#elif ARCH_PPC && HAVE_ALTIVEC
#if SYS_MACOSX || SYS_OPENBSD || SYS_FREEBSD
uint32_t x264_cpu_detect( void )
#elif SYS_LINUX
uint32_t x264_cpu_detect( void )
#elif ARCH_ARM
void x264_cpu_neon_test( void );
int x264_cpu_fast_neon_mrc_test( void );
uint32_t x264_cpu_detect( void )
#elif ARCH_AARCH64
uint32_t x264_cpu_detect( void )
#elif ARCH_MIPS
uint32_t x264_cpu_detect( void )
uint32_t x264_cpu_detect( void )
int x264_cpu_num_processors( void )
