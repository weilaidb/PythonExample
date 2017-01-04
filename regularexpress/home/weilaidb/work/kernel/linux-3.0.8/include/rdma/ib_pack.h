#define IB_PACK_H
enum ;
struct ib_field ;
#define RESERVED \
.field_name          = "reserved"
#define IB_OPCODE(transport, op) \
IB_OPCODE_ ## transport ## _ ## op = \
IB_OPCODE_ ## transport + IB_OPCODE_ ## op
enum ;
enum ;
struct ib_unpacked_lrh ;
struct ib_unpacked_grh ;
struct ib_unpacked_bth ;
struct ib_unpacked_deth ;
struct ib_unpacked_eth ;
struct ib_unpacked_vlan ;
struct ib_ud_header ;
void ib_pack(const struct ib_field        *desc,
int                           desc_len,
void                         *structure,
void                         *buf);
void ib_unpack(const struct ib_field        *desc,
int                           desc_len,
void                         *buf,
void                         *structure);
void ib_ud_header_init(int		    payload_bytes,
int		    lrh_present,
int		    eth_present,
int		    vlan_present,
int		    grh_present,
int		    immediate_present,
struct ib_ud_header *header);
int ib_ud_header_pack(struct ib_ud_header *header,
void                *buf);
int ib_ud_header_unpack(void                *buf,
struct ib_ud_header *header);
