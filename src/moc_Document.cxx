/****************************************************************************
** Document meta object code from reading C++ file 'Document.h'
**
** Created: Mon Jun 13 22:27:49 2005
**      by: The Qt MOC ($Id: //depot/qt/main/src/moc/moc.y#178 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#define Q_MOC_Document
#if !defined(Q_MOC_OUTPUT_REVISION)
#define Q_MOC_OUTPUT_REVISION 8
#elif Q_MOC_OUTPUT_REVISION != 8
#error "Moc format conflict - please regenerate all moc files"
#endif

#include ".././src/Document.h"
#include <qmetaobject.h>
#include <qapplication.h>

#if defined(Q_SPARCWORKS_FUNCP_BUG)
#define Q_AMPERSAND
#else
#define Q_AMPERSAND &
#endif


const char *Document::className() const
{
    return "Document";
}

QMetaObject *Document::metaObj = 0;

void Document::initMetaObject()
{
    if ( metaObj )
	return;
    if ( strcmp(QObject::className(), "QObject") != 0 )
	badSuperclassWarning("Document","QObject");
    (void) staticMetaObject();
}

#ifndef QT_NO_TRANSLATION
QString Document::tr(const char* s)
{
    return ((QNonBaseApplication*)qApp)->translate("Document",s);
}

#endif // QT_NO_TRANSLATION
QMetaObject* Document::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    (void) QObject::staticMetaObject();
#ifndef QT_NO_PROPERTIES
#endif // QT_NO_PROPERTIES
    typedef void(Document::*m1_t0)(MDIWindow*);
    typedef void(Document::*m1_t1)();
    typedef void(Document::*m1_t2)();
    typedef void(Document::*m1_t3)();
    typedef void(Document::*m1_t4)();
    typedef void(Document::*m1_t5)();
    typedef void(Document::*m1_t6)(int);
    typedef void(Document::*m1_t7)();
    typedef void(Document::*m1_t8)(int);
    typedef void(Document::*m1_t9)();
    m1_t0 v1_0 = Q_AMPERSAND Document::onCloseView;
    m1_t1 v1_1 = Q_AMPERSAND Document::onCreateNewView;
    m1_t2 v1_2 = Q_AMPERSAND Document::onWireframe;
    m1_t3 v1_3 = Q_AMPERSAND Document::onShading;
    m1_t4 v1_4 = Q_AMPERSAND Document::onColor;
    m1_t5 v1_5 = Q_AMPERSAND Document::onMaterial;
    m1_t6 v1_6 = Q_AMPERSAND Document::onMaterial;
    m1_t7 v1_7 = Q_AMPERSAND Document::onTransparency;
    m1_t8 v1_8 = Q_AMPERSAND Document::onTransparency;
    m1_t9 v1_9 = Q_AMPERSAND Document::onDelete;
    QMetaData *slot_tbl = QMetaObject::new_metadata(10);
    QMetaData::Access *slot_tbl_access = QMetaObject::new_metaaccess(10);
    slot_tbl[0].name = "onCloseView(MDIWindow*)";
    slot_tbl[0].ptr = *((QMember*)&v1_0);
    slot_tbl_access[0] = QMetaData::Public;
    slot_tbl[1].name = "onCreateNewView()";
    slot_tbl[1].ptr = *((QMember*)&v1_1);
    slot_tbl_access[1] = QMetaData::Public;
    slot_tbl[2].name = "onWireframe()";
    slot_tbl[2].ptr = *((QMember*)&v1_2);
    slot_tbl_access[2] = QMetaData::Public;
    slot_tbl[3].name = "onShading()";
    slot_tbl[3].ptr = *((QMember*)&v1_3);
    slot_tbl_access[3] = QMetaData::Public;
    slot_tbl[4].name = "onColor()";
    slot_tbl[4].ptr = *((QMember*)&v1_4);
    slot_tbl_access[4] = QMetaData::Public;
    slot_tbl[5].name = "onMaterial()";
    slot_tbl[5].ptr = *((QMember*)&v1_5);
    slot_tbl_access[5] = QMetaData::Public;
    slot_tbl[6].name = "onMaterial(int)";
    slot_tbl[6].ptr = *((QMember*)&v1_6);
    slot_tbl_access[6] = QMetaData::Public;
    slot_tbl[7].name = "onTransparency()";
    slot_tbl[7].ptr = *((QMember*)&v1_7);
    slot_tbl_access[7] = QMetaData::Public;
    slot_tbl[8].name = "onTransparency(int)";
    slot_tbl[8].ptr = *((QMember*)&v1_8);
    slot_tbl_access[8] = QMetaData::Public;
    slot_tbl[9].name = "onDelete()";
    slot_tbl[9].ptr = *((QMember*)&v1_9);
    slot_tbl_access[9] = QMetaData::Public;
    typedef void(Document::*m2_t0)();
    typedef void(Document::*m2_t1)(Document*);
    m2_t0 v2_0 = Q_AMPERSAND Document::selectionChanged;
    m2_t1 v2_1 = Q_AMPERSAND Document::sendCloseDocument;
    QMetaData *signal_tbl = QMetaObject::new_metadata(2);
    signal_tbl[0].name = "selectionChanged()";
    signal_tbl[0].ptr = *((QMember*)&v2_0);
    signal_tbl[1].name = "sendCloseDocument(Document*)";
    signal_tbl[1].ptr = *((QMember*)&v2_1);
    metaObj = QMetaObject::new_metaobject(
	"Document", "QObject",
	slot_tbl, 10,
	signal_tbl, 2,
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
void Document::selectionChanged()
{
    activate_signal( "selectionChanged()" );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL sendCloseDocument
void Document::sendCloseDocument( Document* t0 )
{
    // No builtin function for signal parameter type Document*
    QConnectionList *clist = receivers("sendCloseDocument(Document*)");
    if ( !clist || signalsBlocked() )
	return;
    typedef void (QObject::*RT0)();
    typedef RT0 *PRT0;
    typedef void (QObject::*RT1)(Document*);
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
