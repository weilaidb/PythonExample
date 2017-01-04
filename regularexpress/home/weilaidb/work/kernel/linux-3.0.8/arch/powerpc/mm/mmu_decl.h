#if defined(CONFIG_40x) || defined(CONFIG_8xx)
static inline void _tlbil_all(void)
static inline void _tlbil_pid(unsigned int pid)
#define _tlbil_pid_noind(pid)	_tlbil_pid(pid)
extern void _tlbil_all(void);
extern void _tlbil_pid(unsigned int pid);
extern void _tlbil_pid_noind(unsigned int pid);
#define _tlbil_pid_noind(pid)	_tlbil_pid(pid)
static inline void _tlbil_va(unsigned long address, unsigned int pid,
unsigned int tsize, unsigned int ind)
#elif defined(CONFIG_PPC_BOOK3E)
extern void _tlbil_va(unsigned long address, unsigned int pid,
unsigned int tsize, unsigned int ind);
extern void __tlbil_va(unsigned long address, unsigned int pid);
static inline void _tlbil_va(unsigned long address, unsigned int pid,
unsigned int tsize, unsigned int ind)
#if defined(CONFIG_PPC_BOOK3E) || defined(CONFIG_PPC_47x)
extern void _tlbivax_bcast(unsigned long address, unsigned int pid,
unsigned int tsize, unsigned int ind);
static inline void _tlbivax_bcast(unsigned long address, unsigned int pid,
unsigned int tsize, unsigned int ind)
extern void hash_preload(struct mm_struct *mm, unsigned long ea,
unsigned long access, unsigned long trap);
extern void _tlbie(unsigned long address);
extern void _tlbia(void);
extern void mapin_ram(void);
extern int map_page(unsigned long va, phys_addr_t pa, int flags);
extern void setbat(int index, unsigned long virt, phys_addr_t phys,
unsigned int size, int flags);
extern int __map_without_bats;
extern int __allow_ioremap_reserved;
extern unsigned long ioremap_base;
extern unsigned int rtas_data, rtas_size;
struct hash_pte;
extern struct hash_pte *Hash, *Hash_end;
extern unsigned long Hash_size, Hash_mask;
extern int map_kernel_page(unsigned long ea, unsigned long pa, int flags);
extern unsigned long ioremap_bot;
extern unsigned long __max_low_memory;
extern phys_addr_t __initial_memory_limit_addr;
extern phys_addr_t total_memory;
extern phys_addr_t total_lowmem;
extern phys_addr_t memstart_addr;
extern phys_addr_t lowmem_end_addr;
extern unsigned long wii_hole_start;
extern unsigned long wii_hole_size;
extern unsigned long wii_mmu_mapin_mem2(unsigned long top);
extern void wii_memory_fixups(void);
#if defined(CONFIG_8xx)
#define MMU_init_hw()		do  while(0)
#define mmu_mapin_ram(top)	(0UL)
#elif defined(CONFIG_4xx)
extern void MMU_init_hw(void);
extern unsigned long mmu_mapin_ram(unsigned long top);
#elif defined(CONFIG_PPC_FSL_BOOK3E)
extern unsigned long map_mem_in_cams(unsigned long ram, int max_cam_idx);
extern void MMU_init_hw(void);
extern unsigned long mmu_mapin_ram(unsigned long top);
extern void adjust_total_lowmem(void);
extern void loadcam_entry(unsigned int index);
struct tlbcam ;
#elif defined(CONFIG_PPC32)
extern void MMU_init_hw(void);
extern unsigned long mmu_mapin_ram(unsigned long top);
