#define PT_MIPS_REGINFO 0x70000000
struct sect ;
int *symTypeTable;
int must_convert_endian;
int format_bigendian;
static void copy(int out, int in, off_t offset, off_t size)
static void combine(struct sect *base, struct sect *new, int pad)
static int phcmp(const void *v1, const void *v2)
static char *saveRead(int file, off_t offset, off_t len, char *name)
#define swab16(x) \
((unsigned short)( \
(((unsigned short)(x) & (unsigned short)0x00ffU) << 8) | \
(((unsigned short)(x) & (unsigned short)0xff00U) >> 8) ))
#define swab32(x) \
((unsigned int)( \
(((unsigned int)(x) & (unsigned int)0x000000ffUL) << 24) | \
(((unsigned int)(x) & (unsigned int)0x0000ff00UL) <<  8) | \
(((unsigned int)(x) & (unsigned int)0x00ff0000UL) >>  8) | \
(((unsigned int)(x) & (unsigned int)0xff000000UL) >> 24) ))
static void convert_elf_hdr(Elf32_Ehdr * e)
static void convert_elf_phdrs(Elf32_Phdr * p, int num)
static void convert_elf_shdrs(Elf32_Shdr * s, int num)
static void convert_ecoff_filehdr(struct filehdr *f)
static void convert_ecoff_aouthdr(struct aouthdr *a)
static void convert_ecoff_esecs(struct scnhdr *s, int num)
int main(int argc, char *argv[])
