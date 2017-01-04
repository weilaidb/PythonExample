#define _IOHELPER_H
typedef	u8	(read_reg_func)(void *hwp, u8 offset);
typedef	void	(write_reg_func)(void *hwp, u8 offset, u8 value);
typedef	void	(fifo_func)(void *hwp, u8 offset, u8 *datap, int size);
struct _ioport ;
#define IOFUNC_IO(name, hws, ap) \
static u8 Read##name##_IO(void *p, u8 off)  \
static void Write##name##_IO(void *p, u8 off, u8 val)  \
static void ReadFiFo##name##_IO(void *p, u8 off, u8 *dp, int size)  \
static void WriteFiFo##name##_IO(void *p, u8 off, u8 *dp, int size)
#define IOFUNC_IND(name, hws, ap) \
static u8 Read##name##_IND(void *p, u8 off)  \
static void Write##name##_IND(void *p, u8 off, u8 val)  \
static void ReadFiFo##name##_IND(void *p, u8 off, u8 *dp, int size)  \
static void WriteFiFo##name##_IND(void *p, u8 off, u8 *dp, int size)
#define IOFUNC_MEMIO(name, hws, typ, adr) \
static u8 Read##name##_MIO(void *p, u8 off)  \
static void Write##name##_MIO(void *p, u8 off, u8 val)  \
static void ReadFiFo##name##_MIO(void *p, u8 off, u8 *dp, int size)  \
static void WriteFiFo##name##_MIO(void *p, u8 off, u8 *dp, int size)
#define ASSIGN_FUNC(typ, name, dest)	do  while (0)
#define ASSIGN_FUNC_IPAC(typ, target)	do  while (0)
