#define __PMAC_PFUNC_H__
#define PMF_FLAGS_ON_INIT		0x80000000u
#define PMF_FLGAS_ON_TERM		0x40000000u
#define PMF_FLAGS_ON_SLEEP		0x20000000u
#define PMF_FLAGS_ON_WAKE		0x10000000u
#define PMF_FLAGS_ON_DEMAND		0x08000000u
#define PMF_FLAGS_INT_GEN		0x04000000u
#define PMF_FLAGS_HIGH_SPEED		0x02000000u
#define PMF_FLAGS_LOW_SPEED		0x01000000u
#define PMF_FLAGS_SIDE_EFFECTS		0x00800000u
struct pmf_args ;
#define PMF_STD_ARGS	struct pmf_function *func, void *instdata, \
struct pmf_args *args
struct pmf_function;
struct pmf_handlers ;
struct pmf_device;
struct pmf_function ;
struct pmf_irq_client ;
extern int pmf_register_driver(struct device_node *np,
struct pmf_handlers *handlers,
void *driverdata);
extern void pmf_unregister_driver(struct device_node *np);
extern int pmf_register_irq_client(struct device_node *np,
const char *name,
struct pmf_irq_client *client);
extern void pmf_unregister_irq_client(struct pmf_irq_client *client);
extern void pmf_do_irq(struct pmf_function *func);
extern int pmf_do_functions(struct device_node *np, const char *name,
u32 phandle, u32 flags, struct pmf_args *args);
extern int pmf_call_function(struct device_node *target, const char *name,
struct pmf_args *args);
extern struct pmf_function *pmf_find_function(struct device_node *target,
const char *name);
extern struct pmf_function * pmf_get_function(struct pmf_function *func);
extern void pmf_put_function(struct pmf_function *func);
extern int pmf_call_one(struct pmf_function *func, struct pmf_args *args);
extern void pmac_pfunc_base_suspend(void);
extern void pmac_pfunc_base_resume(void);
