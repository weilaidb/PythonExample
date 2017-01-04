#define  _ASM_X86_INTEL_SCU_IPC_H_
#define IPCMSG_VRTC	0xFA
#define IPC_CMD_VRTC_SETTIME      1
#define IPC_CMD_VRTC_SETALARM     2
int intel_scu_ipc_ioread8(u16 addr, u8 *data);
int intel_scu_ipc_ioread16(u16 addr, u16 *data);
int intel_scu_ipc_ioread32(u16 addr, u32 *data);
int intel_scu_ipc_readv(u16 *addr, u8 *data, int len);
int intel_scu_ipc_iowrite8(u16 addr, u8 data);
int intel_scu_ipc_iowrite16(u16 addr, u16 data);
int intel_scu_ipc_iowrite32(u16 addr, u32 data);
int intel_scu_ipc_writev(u16 *addr, u8 *data, int len);
int intel_scu_ipc_update_register(u16 addr, u8 data, u8 mask);
int intel_scu_ipc_simple_command(int cmd, int sub);
int intel_scu_ipc_command(int cmd, int sub, u32 *in, int inlen,
u32 *out, int outlen);
int intel_scu_ipc_i2c_cntrl(u32 addr, u32 *data);
int intel_scu_ipc_fw_update(u8 *buffer, u32 length);
