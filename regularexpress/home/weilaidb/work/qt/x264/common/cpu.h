#define X264_CPU_H
uint32_t x264_cpu_detect( void );
int      x264_cpu_num_processors( void );
void     x264_cpu_emms( void );
void     x264_cpu_sfence( void );
#if HAVE_MMX
#if HAVE_X86_INLINE_ASM
#define x264_emms() asm volatile( "emms":::"memory","st","st(1)","st(2)", \
"st(3)","st(4)","st(5)","st(6)","st(7)" )
#define x264_emms() x264_cpu_emms()
#define x264_emms()
#define x264_sfence x264_cpu_sfence
#if (ARCH_X86 || STACK_ALIGNMENT > 16) && HAVE_MMX
intptr_t x264_stack_align( void (*func)(), ... );
#define x264_stack_align(func,...) x264_stack_align((void (*)())func, __VA_ARGS__)
#define x264_stack_align(func,...) func(__VA_ARGS__)
typedef struct
x264_cpu_name_t;
extern const x264_cpu_name_t x264_cpu_names[];
