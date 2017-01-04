#define __RTL8712_CMD_H_
u8 r8712_fw_cmd(struct _adapter *pAdapter, u32 cmd);
void r8712_fw_cmd_data(struct _adapter *pAdapter, u32 *value, u8 flag);
enum rtl8712_h2c_cmd ;
#define _GetBBReg_CMD_		_Read_BBREG_CMD_
#define _SetBBReg_CMD_		_Write_BBREG_CMD_
#define _GetRFReg_CMD_		_Read_RFREG_CMD_
#define _SetRFReg_CMD_		_Write_RFREG_CMD_
#define _DRV_INT_CMD_		(MAX_H2CCMD+1)
#define _SetRFIntFs_CMD_	(MAX_H2CCMD+2)
static struct _cmd_callback	cmd_callback[] = ;
