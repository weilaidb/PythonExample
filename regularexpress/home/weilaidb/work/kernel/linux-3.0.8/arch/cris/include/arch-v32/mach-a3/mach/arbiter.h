#define _ASM_CRIS_ARCH_ARBITER_H
#define EXT_REGION 0
#define INT_REGION 1
typedef void (watch_callback)(void);
enum ;
enum ;
enum ;
#define MARB_CLIENTS(foo_cli, bar_cli) (((bar_cli) << 16) | (foo_cli))
int crisv32_arbiter_allocate_bandwidth(int client, int region,
unsigned long bandwidth);
int crisv32_arbiter_watch(unsigned long start, unsigned long size,
unsigned long clients, unsigned long accesses,
watch_callback * cb);
int crisv32_arbiter_unwatch(int id);
