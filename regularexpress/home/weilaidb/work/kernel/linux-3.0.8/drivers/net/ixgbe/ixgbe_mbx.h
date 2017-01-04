#define _IXGBE_MBX_H_
#define IXGBE_VFMAILBOX_SIZE        16
#define IXGBE_ERR_MBX               -100
#define IXGBE_VFMAILBOX             0x002FC
#define IXGBE_VFMBMEM               0x00200
#define IXGBE_PFMAILBOX_STS   0x00000001
#define IXGBE_PFMAILBOX_ACK   0x00000002
#define IXGBE_PFMAILBOX_VFU   0x00000004
#define IXGBE_PFMAILBOX_PFU   0x00000008
#define IXGBE_PFMAILBOX_RVFU  0x00000010
#define IXGBE_MBVFICR_VFREQ_MASK 0x0000FFFF
#define IXGBE_MBVFICR_VFREQ_VF1  0x00000001
#define IXGBE_MBVFICR_VFACK_MASK 0xFFFF0000
#define IXGBE_MBVFICR_VFACK_VF1  0x00010000
#define IXGBE_VT_MSGTYPE_ACK      0x80000000
#define IXGBE_VT_MSGTYPE_NACK     0x40000000
#define IXGBE_VT_MSGTYPE_CTS      0x20000000
#define IXGBE_VT_MSGINFO_SHIFT    16
#define IXGBE_VT_MSGINFO_MASK     (0xFF << IXGBE_VT_MSGINFO_SHIFT)
#define IXGBE_VF_RESET            0x01
#define IXGBE_VF_SET_MAC_ADDR     0x02
#define IXGBE_VF_SET_MULTICAST    0x03
#define IXGBE_VF_SET_VLAN         0x04
#define IXGBE_VF_SET_LPE          0x05
#define IXGBE_VF_SET_MACVLAN      0x06
#define IXGBE_VF_PERMADDR_MSG_LEN 4
#define IXGBE_VF_MC_TYPE_WORD     3
#define IXGBE_PF_CONTROL_MSG      0x0100
#define IXGBE_VF_MBX_INIT_TIMEOUT 2000
#define IXGBE_VF_MBX_INIT_DELAY   500
s32 ixgbe_read_mbx(struct ixgbe_hw *, u32 *, u16, u16);
s32 ixgbe_write_mbx(struct ixgbe_hw *, u32 *, u16, u16);
s32 ixgbe_check_for_msg(struct ixgbe_hw *, u16);
s32 ixgbe_check_for_ack(struct ixgbe_hw *, u16);
s32 ixgbe_check_for_rst(struct ixgbe_hw *, u16);
void ixgbe_init_mbx_params_pf(struct ixgbe_hw *);
extern struct ixgbe_mbx_operations mbx_ops_generic;
