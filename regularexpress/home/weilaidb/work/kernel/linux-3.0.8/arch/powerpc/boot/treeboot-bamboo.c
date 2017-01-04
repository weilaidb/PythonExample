BSS_STACK(4096);
#define PIBS_MAC0 0xfffc0400
#define PIBS_MAC1 0xfffc0500
char pibs_mac0[6];
char pibs_mac1[6];
static void read_pibs_mac(void)
void platform_init(void)
