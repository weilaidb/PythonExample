#define __ALPHA_MACHVEC_H 1
struct task_struct;
struct mm_struct;
struct vm_area_struct;
struct linux_hose_info;
struct pci_dev;
struct pci_ops;
struct pci_controller;
struct _alpha_agp_info;
struct rtc_time;
struct alpha_machine_vector
;
extern struct alpha_machine_vector alpha_mv;
extern int alpha_using_srm;
#define alpha_using_srm 1
#define alpha_using_srm 0
