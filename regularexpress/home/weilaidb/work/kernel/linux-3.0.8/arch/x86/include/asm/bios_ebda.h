#define _ASM_X86_BIOS_EBDA_H
static inline unsigned int get_bios_ebda(void)
static inline unsigned int get_bios_ebda_length(void)
void reserve_ebda_region(void);
void check_for_bios_corruption(void);
void start_periodic_check_for_corruption(void);
static inline void check_for_bios_corruption(void)
static inline void start_periodic_check_for_corruption(void)
