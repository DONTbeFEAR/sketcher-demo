/****************************************************************************
** MDIWindow meta object code from reading C++ file 'MDIWindow.h'
**
** Created: Mon Jun 13 22:27:49 2005
**      by: The Qt MOC ($Id: //depot/qt/main/src/moc/moc.y#178 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#define Q_MOC_MDIWindow
#if !defined(Q_MOC_OUTPUT_REVISION)
#define Q_MOC_OUTPUT_REVISION 8
#elif Q_MOC_OUTPUT_REVISION != 8
#error "Moc format conflict - please regenerate all moc files"
#endif

#include ".././src/MDIWindow.h"
#include <qmetaobject.h>
#include <qapplication.h>

#if defined(Q_SPARCWORKS_FUNCP_BUG)
#define Q_AMPERSAND
#else
#define Q_AMPERSAND &
#endif


const char *MDIWindow::className() const
{
    return "MDIWindow";
}

QMetaObject *MDIWindow::metaObj = 0;

void MDIWindow::initMetaObject()
{
    if ( metaObj )
	return;
    if ( strcmp(QMainWindow::className(), "QMainWindow") != 0 )
	badSuperclassWarning("MDIWindow","QMainWindow");
    (void) staticMetaObject();
}

#ifndef QT_NO_TRANSLATION
QString MDIWindow::tr(const char* s)
{
    return ((QNonBaseApplication*)qApp)->translate("MDIWindow",s);
}

#endif // QT_NO_TRANSLATION
QMetaObject* MDIWindow::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    (void) QMainWindow::staticMetaObject();
#ifndef QT_NO_PROPERTIES
#endif // QT_NO_PROPERTIES
    typedef void(MDIWindow::*m1_t0)(QCloseEvent*);
    typedef void(MDIWindow::*m1_t1)();
    typedef void(MDIWindow::*m1_t2)();
    m1_t0 v1_0 = Q_AMPERSAND MDIWindow::closeEvent;
    m1_t1 v1_1 = Q_AMPERSAND MDIWindow::onWindowActivated;
    m1_t2 v1_2 = Q_AMPERSAND MDIWindow::dump;
    QMetaData *slot_tbl = QMetaObject::new_metadata(3);
    QMetaData::Access *slot_tbl_access = QMetaObject::new_metaaccess(3);
    slot_tbl[0].name = "closeEvent(QCloseEvent*)";
    slot_tbl[0].ptr = *((QMember*)&v1_0);
    slot_tbl_access[0] = QMetaData::Public;
    slot_tbl[1].name = "onWindowActivated()";
    slot_tbl[1].ptr = *((QMember*)&v1_1);
    slot_tbl_access[1] = QMetaData::Public;
    slot_tbl[2].name = "dump()";
    slot_tbl[2].ptr = *((QMember*)&v1_2);
    slot_tbl_access[2] = QMetaData::Public;
    typedef void(MDIWindow::*m2_t0)();
    typedef void(MDIWindow::*m2_t1)(const QString&,int);
    typedef void(MDIWindow::*m2_t2)(MDIWindow*);
    m2_t0 v2_0 = Q_AMPERSAND MDIWindow::selectionChanged;
    m2_t1 v2_1 = Q_AMPERSAND MDIWindow::message;
    m2_t2 v2_2 = Q_AMPERSAND MDIWindow::sendCloseView;
    QMetaData *signal_tbl = QMetaObject::new_metadata(3);
    signal_tbl[0].name = "selectionChanged()";
    signal_tbl[0].ptr = *((QMember*)&v2_0);
    signal_tbl[1].name = "message(const QString&,int)";
    signal_tbl[1].ptr = *((QMember*)&v2_1);
    signal_tbl[2].name = "sendCloseView(MDIWindow*)";
    signal_tbl[2].ptr = *((QMember*)&v2_2);
    metaObj = QMetaObject::new_metaobject(
	"MDIWindow", "QMainWindow",
	slot_tbl, 3,
	signal_tbl, 3,
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

// SIGNAL selectionChanged
void MDIWindow::selectionChanged()
{
    activate_signal( "selectionChanged()" );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL message
void MDIWindow::message( const QString& t0, int t1 )
{
    // No builtin function for signal parameter type const QString&,int
    QConnectionList *clist = receivers("message(const QString&,int)");
    if ( !clist || signalsBlocked() )
	return;
    typedef void (QObject::*RT0)();
    typedef RT0 *PRT0;
    typedef void (QObject::*RT1)(const QString&);
    typedef RT1 *PRT1;
    typedef void (QObject::*RT2)(const QString&,int);
    typedef RT2 *PRT2;
    RT0 r0;
    RT1 r1;
    RT2 r2;
    QConnectionListIt it(*clist);
    QConnection   *c;
    QSenderObject *object;
    while ( (c=it.current()) ) {
	++it;
	object = (QSenderObject*)c->object();
	object->setSender( this );
	switch ( c->numArgs() ) {
	    case 0:
		r0 = *((PRT0)(c->member()));
		(object->*r0)();
		break;
	    case 1:
		r1 = *((PRT1)(c->member()));
		(object->*r1)(t0);
		break;
	    case 2:
		r2 = *((PRT2)(c->member()));
		(object->*r2)(t0, t1);
		break;
	}
    }
}

// SIGNAL sendCloseView
void MDIWindow::sendCloseView( MDIWindow* t0 )
{
    // No builtin function for signal parameter type MDIWindow*
    QConnectionList *clist = receivers("sendCloseView(MDIWindow*)");
    if ( !clist || signalsBlocked() )
	return;
    typedef void (QObject::*RT0)();
    typedef RT0 *PRT0;
    typedef void (QObject::*RT1)(MDIWindow*);
    typedef RT1 *PRT1;
    RT0 r0;
    RT1 r1;
    QConnectionListIt it(*clist);
    QConnection   *c;
    QSenderObject *object;
    while ( (c=it.current()) ) {
	++it;
	object = (QSenderObject*)c->object();
	object->setSender( this );
	switch ( c->numArgs() ) {
	    case 0:
		r0 = *((PRT0)(c->member()));
		(object->*r0)();
		break;
	    case 1:
		r1 = *((PRT1)(c->member()));
		(object->*r1)(t0);
		break;
	}
    }
}
