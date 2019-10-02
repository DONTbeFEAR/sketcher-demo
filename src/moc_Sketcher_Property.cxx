/****************************************************************************
** Sketcher_Property meta object code from reading C++ file 'Sketcher_Property.hxx'
**
** Created: Thu Jun 16 11:59:09 2005
**      by: The Qt MOC ($Id: //depot/qt/main/src/moc/moc.y#178 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#define Q_MOC_Sketcher_Property
#if !defined(Q_MOC_OUTPUT_REVISION)
#define Q_MOC_OUTPUT_REVISION 8
#elif Q_MOC_OUTPUT_REVISION != 8
#error "Moc format conflict - please regenerate all moc files"
#endif

#include ".././src/Sketcher_Property.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#if defined(Q_SPARCWORKS_FUNCP_BUG)
#define Q_AMPERSAND
#else
#define Q_AMPERSAND &
#endif


const char *Sketcher_Property::className() const
{
    return "Sketcher_Property";
}

QMetaObject *Sketcher_Property::metaObj = 0;

void Sketcher_Property::initMetaObject()
{
    if ( metaObj )
	return;
    if ( strcmp(QWidget::className(), "QWidget") != 0 )
	badSuperclassWarning("Sketcher_Property","QWidget");
    (void) staticMetaObject();
}

#ifndef QT_NO_TRANSLATION
QString Sketcher_Property::tr(const char* s)
{
    return ((QNonBaseApplication*)qApp)->translate("Sketcher_Property",s);
}

#endif // QT_NO_TRANSLATION
QMetaObject* Sketcher_Property::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    (void) QWidget::staticMetaObject();
#ifndef QT_NO_PROPERTIES
#endif // QT_NO_PROPERTIES
    typedef void(Sketcher_Property::*m1_t0)();
    typedef void(Sketcher_Property::*m1_t1)();
    m1_t0 v1_0 = Q_AMPERSAND Sketcher_Property::onOK;
    m1_t1 v1_1 = Q_AMPERSAND Sketcher_Property::onApply;
    QMetaData *slot_tbl = QMetaObject::new_metadata(2);
    QMetaData::Access *slot_tbl_access = QMetaObject::new_metaaccess(2);
    slot_tbl[0].name = "onOK()";
    slot_tbl[0].ptr = *((QMember*)&v1_0);
    slot_tbl_access[0] = QMetaData::Private;
    slot_tbl[1].name = "onApply()";
    slot_tbl[1].ptr = *((QMember*)&v1_1);
    slot_tbl_access[1] = QMetaData::Private;
    metaObj = QMetaObject::new_metaobject(
	"Sketcher_Property", "QWidget",
	slot_tbl, 2,
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
