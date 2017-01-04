#define NXHAL_VERSION	1
static u32
netxen_poll_rsp(struct netxen_adapter *adapter)
static u32
netxen_issue_cmd(struct netxen_adapter *adapter,
u32 pci_fn, u32 version, u32 arg1, u32 arg2, u32 arg3, u32 cmd)
int
nx_fw_cmd_set_mtu(struct netxen_adapter *adapter, int mtu)
int
nx_fw_cmd_set_gbe_port(struct netxen_adapter *adapter,
u32 speed, u32 duplex, u32 autoneg)
static int
nx_fw_cmd_create_rx_ctx(struct netxen_adapter *adapter)
static void
nx_fw_cmd_destroy_rx_ctx(struct netxen_adapter *adapter)
static int
nx_fw_cmd_create_tx_ctx(struct netxen_adapter *adapter)
static void
nx_fw_cmd_destroy_tx_ctx(struct netxen_adapter *adapter)
int
nx_fw_cmd_query_phy(struct netxen_adapter *adapter, u32 reg, u32 *val)
int
nx_fw_cmd_set_phy(struct netxen_adapter *adapter, u32 reg, u32 val)
static u64 ctx_addr_sig_regs[][3] = ;
#define CRB_CTX_ADDR_REG_LO(FUNC_ID)	(ctx_addr_sig_regs[FUNC_ID][0])
#define CRB_CTX_ADDR_REG_HI(FUNC_ID)	(ctx_addr_sig_regs[FUNC_ID][2])
#define CRB_CTX_SIGNATURE_REG(FUNC_ID)	(ctx_addr_sig_regs[FUNC_ID][1])
#define lower32(x)	((u32)((x) & 0xffffffff))
#define upper32(x)	((u32)(((u64)(x) >> 32) & 0xffffffff))
static struct netxen_recv_crb recv_crb_registers[] = ;
static int
netxen_init_old_ctx(struct netxen_adapter *adapter)
int netxen_alloc_hw_resources(struct netxen_adapter *adapter)
void netxen_free_hw_resources(struct netxen_adapter *adapter)
