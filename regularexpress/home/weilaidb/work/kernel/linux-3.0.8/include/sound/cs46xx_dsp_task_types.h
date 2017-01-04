#define __CS46XX_DSP_TASK_TYPES_H__
#define		HFG_FIRST_EXECUTE_MODE			0x0001
#define		HFG_FIRST_EXECUTE_MODE_BIT		0
#define		HFG_CONTEXT_SWITCH_MODE			0x0002
#define		HFG_CONTEXT_SWITCH_MODE_BIT		1
#define MAX_FG_STACK_SIZE 	32
#define MAX_MG_STACK_SIZE 	16
#define MAX_BG_STACK_SIZE 	9
#define MAX_HFG_STACK_SIZE	4
#define SLEEP_ACTIVE_INCREMENT		0
#define STANDARD_ACTIVE_INCREMENT	1
#define SUSPEND_ACTIVE_INCREMENT	2
#define HOSTFLAGS_DISABLE_BG_SLEEP  0
struct dsp_hf_save_area ;
struct dsp_tree_link ;
struct dsp_task_tree_data ;
struct dsp_interval_timer_data
;
struct dsp_task_tree_context_block ;
struct dsp_task_tree_control_block ;
