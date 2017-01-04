#define STRUCT_FIELD(header, field) \
.struct_offset_bytes = offsetof(struct ib_unpacked_ ## header, field),      \
.struct_size_bytes   = sizeof ((struct ib_unpacked_ ## header *) 0)->field, \
.field_name          = #header ":" #field
static const struct ib_field lrh_table[]  = ;
static const struct ib_field eth_table[]  = ;
static const struct ib_field vlan_table[]  = ;
static const struct ib_field grh_table[]  = ;
static const struct ib_field bth_table[]  = ;
static const struct ib_field deth_table[] = ;
void ib_ud_header_init(int     		    payload_bytes,
int		    lrh_present,
int		    eth_present,
int		    vlan_present,
int    		    grh_present,
int		    immediate_present,
struct ib_ud_header *header)
EXPORT_SYMBOL(ib_ud_header_init);
int ib_ud_header_pack(struct ib_ud_header *header,
void                *buf)
EXPORT_SYMBOL(ib_ud_header_pack);
int ib_ud_header_unpack(void                *buf,
struct ib_ud_header *header)
EXPORT_SYMBOL(ib_ud_header_unpack);
