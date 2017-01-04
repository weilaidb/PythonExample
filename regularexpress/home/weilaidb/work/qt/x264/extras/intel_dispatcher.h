#define X264_INTEL_DISPATCHER_H
extern unsigned long long __intel_cpu_feature_indicator;
extern unsigned long long __intel_cpu_feature_indicator_x;
void __intel_cpu_features_init_x( void );
static void x264_intel_dispatcher_override( void )
