int mca_register_driver(struct mca_driver *mca_drv)
EXPORT_SYMBOL(mca_register_driver);
int mca_register_driver_integrated(struct mca_driver *mca_driver,
int integrated_id)
EXPORT_SYMBOL(mca_register_driver_integrated);
void mca_unregister_driver(struct mca_driver *mca_drv)
EXPORT_SYMBOL(mca_unregister_driver);
