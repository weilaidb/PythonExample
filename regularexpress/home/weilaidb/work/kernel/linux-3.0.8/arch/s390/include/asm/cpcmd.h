#define _ASM_S390_CPCMD_H
extern int __cpcmd(const char *cmd, char *response, int rlen, int *response_code);
extern int cpcmd(const char *cmd, char *response, int rlen, int *response_code);
