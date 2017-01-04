#define _ASM_S390_AIRQ_H
typedef void (*adapter_int_handler_t)(void *, void *);
void *s390_register_adapter_interrupt(adapter_int_handler_t, void *, u8);
void s390_unregister_adapter_interrupt(void *, u8);
