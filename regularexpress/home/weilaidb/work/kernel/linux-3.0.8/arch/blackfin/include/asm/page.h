#define _BLACKFIN_PAGE_H
#define MAP_NR(addr) (((unsigned long)(addr)-PAGE_OFFSET) >> PAGE_SHIFT)
#define VM_DATA_DEFAULT_FLAGS \
(VM_READ | VM_WRITE | \
((current->personality & READ_IMPLIES_EXEC) ? VM_EXEC : 0 ) | \
VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)
