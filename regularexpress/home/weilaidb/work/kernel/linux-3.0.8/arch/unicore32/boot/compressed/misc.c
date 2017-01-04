unsigned char *output_data;
unsigned long output_ptr;
unsigned int free_mem_ptr;
unsigned int free_mem_end_ptr;
#define STATIC static
#define STATIC_RW_DATA
#define arch_decomp_error(x)
#define arch_decomp_setup()
#define arch_decomp_puts(p)
void *memcpy(void *dest, const void *src, size_t n)
void error(char *x)
unsigned long decompress_kernel(unsigned long output_start,
unsigned long free_mem_ptr_p,
unsigned long free_mem_ptr_end_p)
