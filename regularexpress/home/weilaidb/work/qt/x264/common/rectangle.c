#define CACHE_FUNC(name,size,width,height)\
static void x264_macroblock_cache_##name##_##width##_##height( void *target, uint32_t val )\
#define CACHE_FUNCS(name,size)\
CACHE_FUNC(name,size,4,4)\
CACHE_FUNC(name,size,2,4)\
CACHE_FUNC(name,size,4,2)\
CACHE_FUNC(name,size,2,2)\
CACHE_FUNC(name,size,2,1)\
CACHE_FUNC(name,size,1,2)\
CACHE_FUNC(name,size,1,1)\
void (*x264_cache_##name##_func_table[10])(void *, uint32_t) =\
;\
CACHE_FUNCS(mv, 4)
CACHE_FUNCS(mvd, 2)
CACHE_FUNCS(ref, 1)
