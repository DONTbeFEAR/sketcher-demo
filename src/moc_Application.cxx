/****************************************************************************
** ApplicationWindow meta object code from reading C++ file 'Application.h'
**
** Created: Mon Jun 13 22:27:49 2005
**      by: The Qt MOC ($Id: //depot/qt/main/src/moc/moc.y#178 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#define Q_MOC_ApplicationWindow
#if !defined(Q_MOC_OUTPUT_REVISION)
#define Q_MOC_OUTPUT_REVISION 8
#elif Q_MOC_OUTPUT_REVISION != 8
#error "Moc format conflict - please regenerate all moc files"
#endif

#include ".././src/Application.h"
#include <qmetaobject.h>
#include <qapplication.h>

#if defined(Q_SPARCWORKS_FUNCP_BUG)
#define Q_AMPERSAND
#else
#define Q_AMPERSAND &
#endif


const char *ApplicationWindow::className() const
{
    return "ApplicationWindow";
}

QMetaObject *ApplicationWindow::metaObj = 0;

void ApplicationWindow::initMetaObject()
{
    if ( metaObj )
	return;
    if ( strcmp(QMainWindow::className(), "QMainWindow") != 0 )
	badSuperclassWarning("ApplicationWindow","QMainWindow");
    (void) staticMetaObject();
}

#ifndef QT_NO_TRANSLATION
QString ApplicationWindow::tr(const char* s)
{
    return ((QNonBaseApplication*)qApp)->translate("ApplicationWindow",s);
}

#endif // QT_NO_TRANSLATION
QMetaObject* ApplicationWindow::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    (void) QMainWindow::staticMetaObject();
#ifndef QT_NO_PROPERTIES
#endif // QT_NO_PROPERTIES
    typedef Document * (ApplicationWindow::*m1_t0)();
    typedef void(ApplicationWindow::*m1_t1)();
    typedef void(ApplicationWindow::*m1_t2)(Document*);
    typedef void(ApplicationWindow::*m1_t3)();
    typedef void(ApplicationWindow::*m1_t4)();
    typedef void(ApplicationWindow::*m1_t5)();
    typedef void(ApplicationWindow::*m1_t6)();
    typedef void(ApplicationWindow::*m1_t7)();
    typedef void(ApplicationWindow::*m1_t8)();
    typedef void(ApplicationWindow::*m1_t9)();
    typedef void(ApplicationWindow::*m1_t10)();
    typedef void(ApplicationWindow::*m1_t11)();
    typedef void(ApplicationWindow::*m1_t12)(int);
    typedef void(ApplicationWindow::*m1_t13)(QWidget*);
    typedef void(ApplicationWindow::*m1_t14)();
    typedef void(ApplicationWindow::*m1_t15)(int);
    m1_t0 v1_0 = Q_AMPERSAND ApplicationWindow::onNewDoc;
    m1_t1 v1_1 = Q_AMPERSAND ApplicationWindow::onCloseWindow;
    m1_t2 v1_2 = Q_AMPERSAND ApplicationWindow::onCloseDocument;
    m1_t3 v1_3 = Q_AMPERSAND ApplicationWindow::onViewToolBar;
    m1_t4 v1_4 = Q_AMPERSAND ApplicationWindow::onViewStatusBar;
    m1_t5 v1_5 = Q_AMPERSAND ApplicationWindow::onAbout;
    m1_t6 v1_6 = Q_AMPERSAND ApplicationWindow::onImport;
    m1_t7 v1_7 = Q_AMPERSAND ApplicationWindow::onExport;
    m1_t8 v1_8 = Q_AMPERSAND ApplicationWindow::onExportImage;
    m1_t9 v1_9 = Q_AMPERSAND ApplicationWindow::onToolAction;
    m1_t10 v1_10 = Q_AMPERSAND ApplicationWindow::onSelectionChanged;
    m1_t11 v1_11 = Q_AMPERSAND ApplicationWindow::onCreateNewView;
    m1_t12 v1_12 = Q_AMPERSAND ApplicationWindow::onSetMaterial;
    m1_t13 v1_13 = Q_AMPERSAND ApplicationWindow::onWindowActivated;
    m1_t14 v1_14 = Q_AMPERSAND ApplicationWindow::windowsMenuAboutToShow;
    m1_t15 v1_15 = Q_AMPERSAND ApplicationWindow::windowsMenuActivated;
    QMetaData *slot_tbl = QMetaObject::new_metadata(16);
    QMetaData::Access *slot_tbl_access = QMetaObject::new_metaaccess(16);
    slot_tbl[0].name = "onNewDoc()";
    slot_tbl[0].ptr = *((QMember*)&v1_0);
    slot_tbl_access[0] = QMetaData::Public;
    slot_tbl[1].name = "onCloseWindow()";
    slot_tbl[1].ptr = *((QMember*)&v1_1);
    slot_tbl_access[1] = QMetaData::Public;
    slot_tbl[2].name = "onCloseDocument(Document*)";
    slot_tbl[2].ptr = *((QMember*)&v1_2);
    slot_tbl_access[2] = QMetaData::Public;
    slot_tbl[3].name = "onViewToolBar()";
    slot_tbl[3].ptr = *((QMember*)&v1_3);
    slot_tbl_access[3] = QMetaData::Public;
    slot_tbl[4].name = "onViewStatusBar()";
    slot_tbl[4].ptr = *((QMember*)&v1_4);
    slot_tbl_access[4] = QMetaData::Public;
    slot_tbl[5].name = "onAbout()";
    slot_tbl[5].ptr = *((QMember*)&v1_5);
    slot_tbl_access[5] = QMetaData::Public;
    slot_tbl[6].name = "onImport()";
    slot_tbl[6].ptr = *((QMember*)&v1_6);
    slot_tbl_access[6] = QMetaData::Public;
    slot_tbl[7].name = "onExport()";
    slot_tbl[7].ptr = *((QMember*)&v1_7);
    slot_tbl_access[7] = QMetaData::Public;
    slot_tbl[8].name = "onExportImage()";
    slot_tbl[8].ptr = *((QMember*)&v1_8);
    slot_tbl_access[8] = QMetaData::Public;
    slot_tbl[9].name = "onToolAction()";
    slot_tbl[9].ptr = *((QMember*)&v1_9);
    slot_tbl_access[9] = QMetaData::Public;
    slot_tbl[10].name = "onSelectionChanged()";
    slot_tbl[10].ptr = *((QMember*)&v1_10);
    slot_tbl_access[10] = QMetaData::Public;
    slot_tbl[11].name = "onCreateNewView()";
    slot_tbl[11].ptr = *((QMember*)&v1_11);
    slot_tbl_access[11] = QMetaData::Public;
    slot_tbl[12].name = "onSetMaterial(int)";
    slot_tbl[12].ptr = *((QMember*)&v1_12);
    slot_tbl_access[12] = QMetaData::Public;
    slot_tbl[13].name = "onWindowActivated(QWidget*)";
    slot_tbl[13].ptr = *((QMember*)&v1_13);
    slot_tbl_access[13] = QMetaData::Public;
    slot_tbl[14].name = "windowsMenuAboutToShow()";
    slot_tbl[14].ptr = *((QMember*)&v1_14);
    slot_tbl_access[14] = QMetaData::Public;
    slot_tbl[15].name = "windowsMenuActivated(int)";
    slot_tbl[15].ptr = *((QMember*)&v1_15);
    slot_tbl_access[15] = QMetaData::Public;
    metaObj = QMetaObject::new_metaobject(
	"ApplicationWindow", "QMainWindow",
	slot_tbl, 16,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    metaObj->set_slot_access( slot_tbl_access );
#ifndef QT_NO_PROPERTIES
#endif // QT_NO_PROPERTIES
    return metaObj;
}
