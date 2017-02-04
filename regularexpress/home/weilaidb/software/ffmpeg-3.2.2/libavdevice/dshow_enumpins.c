DECLARE_QUERYINTERFACE(libAVEnumPins,
)
DECLARE_ADDREF(libAVEnumPins)
DECLARE_RELEASE(libAVEnumPins)
libAVEnumPins_Next
libAVEnumPins_Skip
libAVEnumPins_Reset
libAVEnumPins_Clone
libAVEnumPins_Setup
libAVEnumPins_Cleanup
DECLARE_CREATE(libAVEnumPins, libAVEnumPins_Setup(this, pin, filter),
libAVPin *pin, libAVFilter *filter)
DECLARE_DESTROY(libAVEnumPins, libAVEnumPins_Cleanup)
