#if QT_VERSION < 0x040000
#if QT_VERSION < 0x040000
#define Q3ValueList             QValueList
#define Q3PopupMenu             QPopupMenu
#define Q3ListView              QListView
#define Q3ListViewItem          QListViewItem
#define Q3VBox                  QVBox
#define Q3TextBrowser           QTextBrowser
#define Q3MainWindow            QMainWindow
#define Q3Action                QAction
#define Q3ToolBar               QToolBar
#define Q3ListViewItemIterator  QListViewItemIterator
#define Q3FileDialog            QFileDialog
class ConfigView;
class ConfigList;
class ConfigItem;
class ConfigLineEdit;
class ConfigMainWindow;
class ConfigSettings : public QSettings ;
enum colIdx ;
enum listMode ;
enum optionMode ;
class ConfigList : public Q3ListView ;
class ConfigItem : public Q3ListViewItem ;
class ConfigLineEdit : public QLineEdit ;
class ConfigView : public Q3VBox ;
class ConfigInfoView : public Q3TextBrowser ;
class ConfigSearchWindow : public QDialog ;
class ConfigMainWindow : public Q3MainWindow ;
