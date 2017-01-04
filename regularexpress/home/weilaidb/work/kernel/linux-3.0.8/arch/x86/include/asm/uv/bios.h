#define _ASM_X86_UV_BIOS_H
enum uv_bios_cmd ;
enum ;
struct uv_systab ;
enum ;
union partition_info_u ;
enum uv_memprotect ;
extern s64 uv_bios_call(enum uv_bios_cmd, u64, u64, u64, u64, u64);
extern s64 uv_bios_call_irqsave(enum uv_bios_cmd, u64, u64, u64, u64, u64);
extern s64 uv_bios_call_reentrant(enum uv_bios_cmd, u64, u64, u64, u64, u64);
extern s64 uv_bios_get_sn_info(int, int *, long *, long *, long *, long *);
extern s64 uv_bios_freq_base(u64, u64 *);
extern int uv_bios_mq_watchlist_alloc(unsigned long, unsigned int,
unsigned long *);
extern int uv_bios_mq_watchlist_free(int, int);
extern s64 uv_bios_change_memprotect(u64, u64, enum uv_memprotect);
extern s64 uv_bios_reserved_page_pa(u64, u64 *, u64 *, u64 *);
extern int uv_bios_set_legacy_vga_target(bool decode, int domain, int bus);
extern void uv_bios_init(void);
extern unsigned long sn_rtc_cycles_per_second;
extern int uv_type;
extern long sn_partition_id;
extern long sn_coherency_id;
extern long sn_region_size;
extern long system_serial_number;
#define partition_coherence_id()	(sn_coherency_id)
extern struct kobject *sgi_uv_kobj;
