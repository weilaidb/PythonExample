#define _IO_H_
#define NUM_IOREQ		8
#define MAX_PROT_SZ	(64-16)
#define _IOREADY			0
#define _IO_WAIT_COMPLETE   1
#define _IO_WAIT_RSP        2
#define _IOSZ_MASK_		(0x7F)
#define _IO_WRITE_		BIT(7)
#define _IO_FIXED_		BIT(8)
#define _IO_BURST_		BIT(9)
#define _IO_BYTE_		BIT(10)
#define _IO_HW_			BIT(11)
#define _IO_WORD_		BIT(12)
#define _IO_SYNC_		BIT(13)
#define _IO_CMDMASK_	(0x1F80)
#define _IO_ERR_		BIT(2)
#define _IO_SUCCESS_	BIT(1)
#define _IO_DONE_		BIT(0)
#define IO_RD32			(_IO_SYNC_ | _IO_WORD_)
#define IO_RD16			(_IO_SYNC_ | _IO_HW_)
#define IO_RD8			(_IO_SYNC_ | _IO_BYTE_)
#define IO_RD32_ASYNC	(_IO_WORD_)
#define IO_RD16_ASYNC	(_IO_HW_)
#define IO_RD8_ASYNC	(_IO_BYTE_)
#define IO_WR32			(_IO_WRITE_ | _IO_SYNC_ | _IO_WORD_)
#define IO_WR16			(_IO_WRITE_ | _IO_SYNC_ | _IO_HW_)
#define IO_WR8			(_IO_WRITE_ | _IO_SYNC_ | _IO_BYTE_)
#define IO_WR32_ASYNC	(_IO_WRITE_ | _IO_WORD_)
#define IO_WR16_ASYNC	(_IO_WRITE_ | _IO_HW_)
#define IO_WR8_ASYNC	(_IO_WRITE_ | _IO_BYTE_)
#define IO_WR_BURST(x)		(IO_WRITE_ | _IO_SYNC_ | _IO_BURST_ | \
((x) & _IOSZ_MASK_))
#define IO_RD_BURST(x)		(_IO_SYNC_ | _IO_BURST_ | ((x) & _IOSZ_MASK_))
#define _INTF_ASYNC_	BIT(0)
struct intf_priv;
struct	intf_hdl;
struct io_queue;
struct	_io_ops ;
struct io_req ;
struct	intf_hdl ;
struct reg_protocol_rd ;
struct reg_protocol_wt ;
struct io_queue ;
static inline u32 _RND4(u32 sz)
u8 r8712_read8(struct _adapter *adapter, u32 addr);
u16 r8712_read16(struct _adapter *adapter, u32 addr);
u32 r8712_read32(struct _adapter *adapter, u32 addr);
void r8712_read_mem(struct _adapter *adapter, u32 addr, u32 cnt, u8 *pmem);
void r8712_read_port(struct _adapter *adapter, u32 addr, u32 cnt, u8 *pmem);
void r8712_write8(struct _adapter *adapter, u32 addr, u8 val);
void r8712_write16(struct _adapter *adapter, u32 addr, u16 val);
void r8712_write32(struct _adapter *adapter, u32 addr, u32 val);
void r8712_write_mem(struct _adapter *adapter, u32 addr, u32 cnt, u8 *pmem);
void r8712_write_port(struct _adapter *adapter, u32 addr, u32 cnt, u8 *pmem);
uint r8712_alloc_io_queue(struct _adapter *adapter);
void r8712_free_io_queue(struct _adapter *adapter);
