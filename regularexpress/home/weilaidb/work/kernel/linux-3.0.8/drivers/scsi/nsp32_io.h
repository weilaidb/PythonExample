#define _NSP32_IO_H
static inline void nsp32_write1(unsigned int  base,
unsigned int  index,
unsigned char val)
static inline unsigned char nsp32_read1(unsigned int base,
unsigned int index)
static inline void nsp32_write2(unsigned int   base,
unsigned int   index,
unsigned short val)
static inline unsigned short nsp32_read2(unsigned int base,
unsigned int index)
static inline void nsp32_write4(unsigned int  base,
unsigned int  index,
unsigned long val)
static inline unsigned long nsp32_read4(unsigned int base,
unsigned int index)
static inline void nsp32_mmio_write1(unsigned long base,
unsigned int  index,
unsigned char val)
static inline unsigned char nsp32_mmio_read1(unsigned long base,
unsigned int  index)
static inline void nsp32_mmio_write2(unsigned long  base,
unsigned int   index,
unsigned short val)
static inline unsigned short nsp32_mmio_read2(unsigned long base,
unsigned int  index)
static inline void nsp32_mmio_write4(unsigned long base,
unsigned int  index,
unsigned long val)
static inline unsigned long nsp32_mmio_read4(unsigned long base,
unsigned int  index)
static inline unsigned char nsp32_index_read1(unsigned int base,
unsigned int reg)
static inline void nsp32_index_write1(unsigned int  base,
unsigned int  reg,
unsigned char val)
static inline unsigned short nsp32_index_read2(unsigned int base,
unsigned int reg)
static inline void nsp32_index_write2(unsigned int   base,
unsigned int   reg,
unsigned short val)
static inline unsigned long nsp32_index_read4(unsigned int base,
unsigned int reg)
static inline void nsp32_index_write4(unsigned int  base,
unsigned int  reg,
unsigned long val)
static inline unsigned char nsp32_mmio_index_read1(unsigned long base,
unsigned int reg)
static inline void nsp32_mmio_index_write1(unsigned long base,
unsigned int  reg,
unsigned char val)
static inline unsigned short nsp32_mmio_index_read2(unsigned long base,
unsigned int  reg)
static inline void nsp32_mmio_index_write2(unsigned long  base,
unsigned int   reg,
unsigned short val)
static inline void nsp32_multi_read4(unsigned int   base,
unsigned int   reg,
void          *buf,
unsigned long  count)
static inline void nsp32_fifo_read(unsigned int   base,
void          *buf,
unsigned long  count)
static inline void nsp32_multi_write4(unsigned int   base,
unsigned int   reg,
void          *buf,
unsigned long  count)
static inline void nsp32_fifo_write(unsigned int   base,
void          *buf,
unsigned long  count)
