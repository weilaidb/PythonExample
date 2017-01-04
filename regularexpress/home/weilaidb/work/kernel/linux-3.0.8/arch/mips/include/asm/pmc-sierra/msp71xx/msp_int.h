#define _MSP_INT_H
#if defined(CONFIG_IRQ_MSP_SLP)
#elif defined(CONFIG_IRQ_MSP_CIC)
#error "What sort of interrupt controller does *your* MSP have?"
