#define __LINUX_TPM_H__
#define	TPM_ANY_NUM 0xFFFF
#if defined(CONFIG_TCG_TPM) || defined(CONFIG_TCG_TPM_MODULE)
extern int tpm_pcr_read(u32 chip_num, int pcr_idx, u8 *res_buf);
extern int tpm_pcr_extend(u32 chip_num, int pcr_idx, const u8 *hash);
extern int tpm_send(u32 chip_num, void *cmd, size_t buflen);
static inline int tpm_pcr_read(u32 chip_num, int pcr_idx, u8 *res_buf)
static inline int tpm_pcr_extend(u32 chip_num, int pcr_idx, const u8 *hash)
static inline int tpm_send(u32 chip_num, void *cmd, size_t buflen)
