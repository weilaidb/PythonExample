#define _ASM_TILE_BACKTRACE_H
typedef bool (*BacktraceMemoryReader)(void *result,
unsigned long address,
unsigned int size,
void *extra);
typedef struct  BacktraceIterator;
typedef enum  CallerPCLocation;
typedef enum  CallerSPLocation;
enum ;
enum ;
typedef struct  CallerLocation;
extern void backtrace_init(BacktraceIterator *state,
BacktraceMemoryReader read_memory_func,
void *read_memory_func_extra,
unsigned long pc, unsigned long lr,
unsigned long sp, unsigned long r52);
extern bool backtrace_next(BacktraceIterator *state);
