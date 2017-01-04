#define MAXPARTITIONS   8
#define u8 unsigned char
#define u16 unsigned short
#define u32 unsigned int
struct disklabel ;
typedef union __bootblock  bootblock;
#define	bootblock_label		__u1.__label
#define bootblock_checksum	__u2.__checksum
int main(int argc, char ** argv)
