static unsigned long fs;
static inline void set_fs(unsigned long seg)
typedef unsigned long addr_t;
static inline char rdfs8(addr_t addr)
int cmdline_find_option(const char *option, char *buffer, int bufsize)
int cmdline_find_option_bool(const char *option)
