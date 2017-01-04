#define __CVMX_ASM_H__
#define CVMX_SYNC asm volatile ("sync" : : : "memory")
#define CVMX_SYNCW_STR "syncw\nsyncw\n"
#define CVMX_SYNCIO asm volatile ("nop")
#define CVMX_SYNCIOBDMA asm volatile ("synciobdma" : : : "memory")
#define CVMX_SYNCIOALL asm volatile ("nop")
#define CVMX_SYNCW asm volatile ("syncw\n\tsyncw" : : : "memory")
#define CVMX_SYNCWS CVMX_SYNCW
#define CVMX_SYNCS  CVMX_SYNC
#define CVMX_SYNCWS_STR CVMX_SYNCW_STR
#define CVMX_SYNCIO asm volatile ("nop")
#define CVMX_SYNCIOBDMA asm volatile ("sync" : : : "memory")
#define CVMX_SYNCIOALL asm volatile ("nop")
#define CVMX_SYNCW asm volatile ("sync" : : : "memory")
#define CVMX_SYNCWS CVMX_SYNCW
#define CVMX_SYNCS  CVMX_SYNC
#define CVMX_SYNCWS_STR CVMX_SYNCW_STR
#define CVMX_PREPARE_FOR_STORE(address, offset) \
asm volatile ("pref 30, " CVMX_TMP_STR(offset) "(%[rbase])" : : \
[rbase] "d" (address))
#define CVMX_DONT_WRITE_BACK(address, offset) \
asm volatile ("pref 29, " CVMX_TMP_STR(offset) "(%[rbase])" : : \
[rbase] "d" (address))
#define CVMX_ICACHE_INVALIDATE \
#define CVMX_ICACHE_INVALIDATE2 \
#define CVMX_DCACHE_INVALIDATE \
#define CVMX_CACHE(op, address, offset)					\
asm volatile ("cache " CVMX_TMP_STR(op) ", " CVMX_TMP_STR(offset) "(%[rbase])" \
: : [rbase] "d" (address) )
#define CVMX_CACHE_LCKL2(address, offset) CVMX_CACHE(31, address, offset)
#define CVMX_CACHE_WBIL2(address, offset) CVMX_CACHE(23, address, offset)
#define CVMX_CACHE_WBIL2I(address, offset) CVMX_CACHE(3, address, offset)
#define CVMX_CACHE_LTGL2I(address, offset) CVMX_CACHE(7, address, offset)
#define CVMX_POP(result, input) \
asm ("pop %[rd],%[rs]" : [rd] "=d" (result) : [rs] "d" (input))
#define CVMX_DPOP(result, input) \
asm ("dpop %[rd],%[rs]" : [rd] "=d" (result) : [rs] "d" (input))
#define CVMX_RDHWR(result, regstr) \
asm volatile ("rdhwr %[rt],$" CVMX_TMP_STR(regstr) : [rt] "=d" (result))
#define CVMX_RDHWRNV(result, regstr) \
asm ("rdhwr %[rt],$" CVMX_TMP_STR(regstr) : [rt] "=d" (result))
