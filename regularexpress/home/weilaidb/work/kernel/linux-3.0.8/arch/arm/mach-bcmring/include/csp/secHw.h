#define SECHW_H
typedef void (*secHw_FUNC_t) (void);
typedef enum  secHw_MODE;
void secHw_RunSecure(secHw_FUNC_t
);
void secHw_SetMode(secHw_MODE
);
void secHw_GetMode(secHw_MODE *);
