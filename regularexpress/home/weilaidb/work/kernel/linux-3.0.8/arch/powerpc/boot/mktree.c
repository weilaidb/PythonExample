typedef struct boot_block  boot_block_t;
#define IMGBLK	512
unsigned int	tmpbuf[IMGBLK / sizeof(unsigned int)];
int main(int argc, char *argv[])
