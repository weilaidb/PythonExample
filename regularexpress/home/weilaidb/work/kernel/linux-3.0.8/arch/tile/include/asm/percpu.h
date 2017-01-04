#define _ASM_TILE_PERCPU_H
register unsigned long __my_cpu_offset __asm__("tp");
#define __my_cpu_offset __my_cpu_offset
#define set_my_cpu_offset(tp) (__my_cpu_offset = (tp))
