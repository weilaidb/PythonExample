#define __ASM_OCTEON_OCTEON_H
extern uint64_t octeon_bootmem_alloc_range_phys(uint64_t size,
uint64_t alignment,
uint64_t min_addr,
uint64_t max_addr,
int do_locking);
extern void *octeon_bootmem_alloc(uint64_t size, uint64_t alignment,
int do_locking);
extern void *octeon_bootmem_alloc_range(uint64_t size, uint64_t alignment,
uint64_t min_addr, uint64_t max_addr,
int do_locking);
extern void *octeon_bootmem_alloc_named(uint64_t size, uint64_t alignment,
char *name);
extern void *octeon_bootmem_alloc_named_range(uint64_t size, uint64_t min_addr,
uint64_t max_addr, uint64_t align,
char *name);
extern void *octeon_bootmem_alloc_named_address(uint64_t size, uint64_t address,
char *name);
extern int octeon_bootmem_free_named(char *name);
extern void octeon_bootmem_lock(void);
extern void octeon_bootmem_unlock(void);
extern int octeon_is_simulation(void);
extern int octeon_is_pci_host(void);
extern int octeon_usb_is_ref_clk(void);
extern uint64_t octeon_get_clock_rate(void);
extern u64 octeon_get_io_clock_rate(void);
extern const char *octeon_board_type_string(void);
extern const char *octeon_get_pci_interrupts(void);
extern int octeon_get_southbridge_interrupt(void);
extern int octeon_get_boot_coremask(void);
extern int octeon_get_boot_num_arguments(void);
extern const char *octeon_get_boot_argument(int arg);
extern void octeon_hal_setup_reserved32(void);
extern void octeon_user_io_init(void);
struct octeon_cop2_state;
extern unsigned long octeon_crypto_enable(struct octeon_cop2_state *state);
extern void octeon_crypto_disable(struct octeon_cop2_state *state,
unsigned long flags);
extern asmlinkage void octeon_cop2_restore(struct octeon_cop2_state *task);
extern void octeon_init_cvmcount(void);
extern void octeon_setup_delays(void);
#define OCTEON_ARGV_MAX_ARGS	64
#define OCTOEN_SERIAL_LEN	20
struct octeon_boot_descriptor ;
union octeon_cvmemctl ;
struct octeon_cf_data ;
struct octeon_i2c_data ;
extern void octeon_write_lcd(const char *s);
extern void octeon_check_cpu_bist(void);
extern int octeon_get_boot_debug_flag(void);
extern int octeon_get_boot_uart(void);
struct uart_port;
extern unsigned int octeon_serial_in(struct uart_port *, int);
extern void octeon_serial_out(struct uart_port *, int, int);
static inline void octeon_npi_write32(uint64_t address, uint32_t val)
static inline uint32_t octeon_npi_read32(uint64_t address)
extern struct cvmx_bootinfo *octeon_bootinfo;
extern uint64_t octeon_bootloader_entry_addr;
extern void (*octeon_irq_setup_secondary)(void);
