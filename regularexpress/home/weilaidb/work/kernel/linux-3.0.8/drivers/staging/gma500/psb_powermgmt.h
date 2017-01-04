#define _PSB_POWERMGMT_H_
void gma_power_init(struct drm_device *dev);
void gma_power_uninit(struct drm_device *dev);
int gma_power_suspend(struct pci_dev *pdev, pm_message_t state);
int gma_power_resume(struct pci_dev *pdev);
bool gma_power_begin(struct drm_device *dev, bool force);
void gma_power_end(struct drm_device *dev);
bool gma_power_is_on(struct drm_device *dev);
int psb_runtime_suspend(struct device *dev);
int psb_runtime_resume(struct device *dev);
int psb_runtime_idle(struct device *dev);
