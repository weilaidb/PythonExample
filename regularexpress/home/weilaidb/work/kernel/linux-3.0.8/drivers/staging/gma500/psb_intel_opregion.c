struct opregion_header  __attribute__((packed));
struct opregion_apci  __attribute__((packed));
struct opregion_swsci  __attribute__((packed));
struct opregion_acpi  __attribute__((packed));
int psb_intel_opregion_init(struct drm_device *dev)
