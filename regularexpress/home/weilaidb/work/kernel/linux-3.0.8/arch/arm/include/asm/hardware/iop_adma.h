#define IOP_ADMA_H
#define IOP_ADMA_SLOT_SIZE 32
#define IOP_ADMA_THRESHOLD 4
#define IOP_PARANOIA 1
#define IOP_PARANOIA 0
#define iop_paranoia(x) BUG_ON(IOP_PARANOIA && (x))
struct iop_adma_device ;
struct iop_adma_chan ;
struct iop_adma_desc_slot ;
struct iop_adma_platform_data ;
#define to_iop_sw_desc(addr_hw_desc) \
container_of(addr_hw_desc, struct iop_adma_desc_slot, hw_desc)
#define iop_hw_desc_slot_idx(hw_desc, idx) \
( (void *) (((unsigned long) hw_desc) + ((idx) << 5)) )
