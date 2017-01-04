#define __NSP_IO_H__
static inline          void nsp_write(unsigned int base,
unsigned int index,
unsigned char val);
static inline unsigned char nsp_read(unsigned int base,
unsigned int index);
static inline          void nsp_index_write(unsigned int BaseAddr,
unsigned int Register,
unsigned char Value);
static inline unsigned char nsp_index_read(unsigned int BaseAddr,
unsigned int Register);
static inline void nsp_write(unsigned int  base,
unsigned int  index,
unsigned char val)
static inline unsigned char nsp_read(unsigned int base,
unsigned int index)
static inline unsigned char nsp_index_read(unsigned int BaseAddr,
unsigned int Register)
static inline void nsp_index_write(unsigned int  BaseAddr,
unsigned int  Register,
unsigned char Value)
static inline void nsp_multi_read_1(unsigned int   BaseAddr,
unsigned int   Register,
void          *buf,
unsigned long  count)
static inline void nsp_fifo8_read(unsigned int   base,
void          *buf,
unsigned long  count)
static inline void nsp_multi_read_2(unsigned int   BaseAddr,
unsigned int   Register,
void          *buf,
unsigned long  count)
static inline void nsp_fifo16_read(unsigned int   base,
void          *buf,
unsigned long  count)
static inline void nsp_multi_read_4(unsigned int   BaseAddr,
unsigned int   Register,
void          *buf,
unsigned long  count)
static inline void nsp_fifo32_read(unsigned int   base,
void          *buf,
unsigned long  count)
static inline void nsp_multi_write_1(unsigned int   BaseAddr,
unsigned int   Register,
void          *buf,
unsigned long  count)
static inline void nsp_fifo8_write(unsigned int   base,
void          *buf,
unsigned long  count)
static inline void nsp_multi_write_2(unsigned int   BaseAddr,
unsigned int   Register,
void          *buf,
unsigned long  count)
static inline void nsp_fifo16_write(unsigned int   base,
void          *buf,
unsigned long  count)
static inline void nsp_multi_write_4(unsigned int   BaseAddr,
unsigned int   Register,
void          *buf,
unsigned long  count)
static inline void nsp_fifo32_write(unsigned int   base,
void          *buf,
unsigned long  count)
static inline void nsp_mmio_write(unsigned long base,
unsigned int  index,
unsigned char val)
static inline unsigned char nsp_mmio_read(unsigned long base,
unsigned int  index)
static inline unsigned char nsp_mmio_index_read(unsigned long base,
unsigned int  reg)
static inline void nsp_mmio_index_write(unsigned long base,
unsigned int  reg,
unsigned char val)
static inline void nsp_mmio_multi_read_4(unsigned long  base,
unsigned int   Register,
void          *buf,
unsigned long  count)
static inline void nsp_mmio_fifo32_read(unsigned int   base,
void          *buf,
unsigned long  count)
static inline void nsp_mmio_multi_write_4(unsigned long  base,
unsigned int   Register,
void          *buf,
unsigned long  count)
static inline void nsp_mmio_fifo32_write(unsigned int   base,
void          *buf,
unsigned long  count)
