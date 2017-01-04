#define __IXGBE_VF_H__
struct ixgbe_hw;
typedef u8* (*ixgbe_mc_addr_itr) (struct ixgbe_hw *hw, u8 **mc_addr_ptr,
u32 *vmdq);
struct ixgbe_mac_operations ;
enum ixgbe_mac_type ;
struct ixgbe_mac_info ;
struct ixgbe_mbx_operations ;
struct ixgbe_mbx_stats ;
struct ixgbe_mbx_info ;
struct ixgbe_hw ;
struct ixgbevf_hw_stats ;
struct ixgbevf_info ;
