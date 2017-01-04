int et131x_init_eeprom(struct et131x_adapter *etdev);
void ConfigGlobalRegs(struct et131x_adapter *pAdapter);
void ConfigMMCRegs(struct et131x_adapter *pAdapter);
void et131x_enable_interrupts(struct et131x_adapter *adapter);
void et131x_disable_interrupts(struct et131x_adapter *adapter);
void et131x_align_allocated_memory(struct et131x_adapter *adapter,
u64 *phys_addr,
u64 *offset, u64 mask);
int et131x_adapter_setup(struct et131x_adapter *adapter);
int et131x_adapter_memory_alloc(struct et131x_adapter *adapter);
void et131x_adapter_memory_free(struct et131x_adapter *adapter);
void et131x_hwaddr_init(struct et131x_adapter *adapter);
void et131x_soft_reset(struct et131x_adapter *adapter);
irqreturn_t et131x_isr(int irq, void *dev_id);
void et131x_isr_handler(struct work_struct *work);
void ConfigMACRegs1(struct et131x_adapter *adapter);
void ConfigMACRegs2(struct et131x_adapter *adapter);
void ConfigRxMacRegs(struct et131x_adapter *adapter);
void ConfigTxMacRegs(struct et131x_adapter *adapter);
void ConfigMacStatRegs(struct et131x_adapter *adapter);
void ConfigFlowControl(struct et131x_adapter *adapter);
void UpdateMacStatHostCounters(struct et131x_adapter *adapter);
void HandleMacStatInterrupt(struct et131x_adapter *adapter);
void SetupDeviceForMulticast(struct et131x_adapter *adapter);
void SetupDeviceForUnicast(struct et131x_adapter *adapter);
struct net_device *et131x_device_alloc(void);
void EnablePhyComa(struct et131x_adapter *adapter);
void DisablePhyComa(struct et131x_adapter *adapter);
void ET1310_PhyInit(struct et131x_adapter *adapter);
void ET1310_PhyReset(struct et131x_adapter *adapter);
void ET1310_PhyPowerDown(struct et131x_adapter *adapter, bool down);
void ET1310_PhyAdvertise1000BaseT(struct et131x_adapter *adapter,
u16 duplex);
void ET1310_PhyAccessMiBit(struct et131x_adapter *adapter,
u16 action,
u16 regnum, u16 bitnum, u8 *value);
int et131x_xcvr_find(struct et131x_adapter *adapter);
void et131x_setphy_normal(struct et131x_adapter *adapter);
int PhyMiRead(struct et131x_adapter *adapter, u8 xcvrAddr,
u8 xcvrReg, u16 *value);
#define MiRead(adapter, xcvrReg, value) \
PhyMiRead((adapter), (adapter)->Stats.xcvr_addr, (xcvrReg), (value))
int32_t MiWrite(struct et131x_adapter *adapter,
u8 xcvReg, u16 value);
void et131x_Mii_check(struct et131x_adapter *pAdapter,
MI_BMSR_t bmsr, MI_BMSR_t bmsr_ints);
void SetPhy_10BaseTHalfDuplex(struct et131x_adapter *adapter);
int et131x_rx_dma_memory_alloc(struct et131x_adapter *adapter);
void et131x_rx_dma_memory_free(struct et131x_adapter *adapter);
int et131x_rfd_resources_alloc(struct et131x_adapter *adapter,
struct rfd *rfd);
void et131x_rfd_resources_free(struct et131x_adapter *adapter,
struct rfd *rfd);
int et131x_init_recv(struct et131x_adapter *adapter);
void ConfigRxDmaRegs(struct et131x_adapter *adapter);
void SetRxDmaTimer(struct et131x_adapter *adapter);
void et131x_rx_dma_disable(struct et131x_adapter *adapter);
void et131x_rx_dma_enable(struct et131x_adapter *adapter);
void et131x_reset_recv(struct et131x_adapter *adapter);
void et131x_handle_recv_interrupt(struct et131x_adapter *adapter);
int et131x_tx_dma_memory_alloc(struct et131x_adapter *adapter);
void et131x_tx_dma_memory_free(struct et131x_adapter *adapter);
void ConfigTxDmaRegs(struct et131x_adapter *adapter);
void et131x_init_send(struct et131x_adapter *adapter);
void et131x_tx_dma_disable(struct et131x_adapter *adapter);
void et131x_tx_dma_enable(struct et131x_adapter *adapter);
void et131x_handle_send_interrupt(struct et131x_adapter *adapter);
void et131x_free_busy_send_packets(struct et131x_adapter *adapter);
int et131x_send_packets(struct sk_buff *skb, struct net_device *netdev);
