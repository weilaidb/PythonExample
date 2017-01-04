#define _E1000_VF_H_
struct e1000_hw;
#define E1000_DEV_ID_82576_VF                 0x10CA
#define E1000_DEV_ID_I350_VF                  0x1520
#define E1000_REVISION_0 0
#define E1000_REVISION_1 1
#define E1000_REVISION_2 2
#define E1000_REVISION_3 3
#define E1000_REVISION_4 4
#define E1000_FUNC_0     0
#define E1000_FUNC_1     1
#define E1000_RAR_ENTRIES_VF      1
union e1000_adv_rx_desc ;
#define E1000_RXDADV_HDRBUFLEN_MASK      0x7FE0
#define E1000_RXDADV_HDRBUFLEN_SHIFT     5
union e1000_adv_tx_desc ;
#define E1000_ADVTXD_DTYP_CTXT    0x00200000
#define E1000_ADVTXD_DTYP_DATA    0x00300000
#define E1000_ADVTXD_DCMD_EOP     0x01000000
#define E1000_ADVTXD_DCMD_IFCS    0x02000000
#define E1000_ADVTXD_DCMD_RS      0x08000000
#define E1000_ADVTXD_DCMD_DEXT    0x20000000
#define E1000_ADVTXD_DCMD_VLE     0x40000000
#define E1000_ADVTXD_DCMD_TSE     0x80000000
#define E1000_ADVTXD_PAYLEN_SHIFT    14
struct e1000_adv_tx_context_desc ;
#define E1000_ADVTXD_MACLEN_SHIFT    9
#define E1000_ADVTXD_TUCMD_IPV4    0x00000400
#define E1000_ADVTXD_TUCMD_L4T_TCP 0x00000800
#define E1000_ADVTXD_L4LEN_SHIFT     8
#define E1000_ADVTXD_MSS_SHIFT      16
enum e1000_mac_type ;
struct e1000_vf_stats ;
struct e1000_mac_operations ;
struct e1000_mac_info ;
struct e1000_mbx_operations ;
struct e1000_mbx_stats ;
struct e1000_mbx_info ;
struct e1000_dev_spec_vf ;
struct e1000_hw ;
void e1000_rlpml_set_vf(struct e1000_hw *, u16);
void e1000_init_function_pointers_vf(struct e1000_hw *hw);
