#define __INT_H__
typedef struct tagSINTData  __attribute__ ((__packed__))
SINTData, *PSINTData;
void INTvWorkItem(void *Context);
int INTnsProcessData(PSDevice pDevice);
