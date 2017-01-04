static const char arch[] = "PowerPC";
#define N_DESCR	6
unsigned int descr[N_DESCR] = ;
static const char rpaname[] = "IBM,RPA-Client-Config";
#define N_RPA_DESCR	8
unsigned int rpanote[N_RPA_DESCR] = ;
#define ROUNDUP(len)	(((len) + 3) & ~3)
unsigned char buf[512];
#define GET_16BE(off)	((buf[off] << 8) + (buf[(off)+1]))
#define GET_32BE(off)	((GET_16BE(off) << 16) + GET_16BE((off)+2))
#define PUT_16BE(off, v)	(buf[off] = ((v) >> 8) & 0xff, \
buf[(off) + 1] = (v) & 0xff)
#define PUT_32BE(off, v)	(PUT_16BE((off), (v) >> 16), \
PUT_16BE((off) + 2, (v)))
#define E_IDENT		0
#define	E_PHOFF		28
#define E_PHENTSIZE	42
#define E_PHNUM		44
#define E_HSIZE		52
#define EI_MAGIC	0
#define EI_CLASS	4
#define EI_DATA		5
#define PH_TYPE		0
#define PH_OFFSET	4
#define PH_FILESZ	16
#define PH_HSIZE	32
#define PT_NOTE		4
#define ELFCLASS32	1
#define ELFDATA2MSB	2
unsigned char elf_magic[4] = ;
int
main(int ac, char **av)
