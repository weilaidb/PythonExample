#define __MTD_TRANS_H__
struct hd_geometry;
struct mtd_info;
struct mtd_blktrans_ops;
struct file;
struct inode;
struct mtd_blktrans_dev ;
struct mtd_blktrans_ops ;
extern int register_mtd_blktrans(struct mtd_blktrans_ops *tr);
extern int deregister_mtd_blktrans(struct mtd_blktrans_ops *tr);
extern int add_mtd_blktrans_dev(struct mtd_blktrans_dev *dev);
extern int del_mtd_blktrans_dev(struct mtd_blktrans_dev *dev);
extern int mtd_blktrans_cease_background(struct mtd_blktrans_dev *dev);
