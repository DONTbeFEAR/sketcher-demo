/****************************************************************************
** Sketcher_PropertyPoint meta object code from reading C++ file 'Sketcher_PropertyPoint.hxx'
**
** Created: Thu Jun 16 11:59:07 2005
**      by: The Qt MOC ($Id: //depot/qt/main/src/moc/moc.y#178 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#define Q_MOC_Sketcher_PropertyPoint
#if !defined(Q_MOC_OUTPUT_REVISION)
#define Q_MOC_OUTPUT_REVISION 8
#elif Q_MOC_OUTPUT_REVISION != 8
#error "Moc format conflict - please regenerate all moc files"
#endif

#include ".././src/Sketcher_PropertyPoint.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#if defined(Q_SPARCWORKS_FUNCP_BUG)
#define Q_AMPERSAND
#else
#define Q_AMPERSAND &
#endif


const char *Sketcher_PropertyPoint::className() const
{
    return "Sketcher_PropertyPoint";
}

QMetaObject *Sketcher_PropertyPoint::metaObj = 0;

void Sketcher_PropertyPoint::initMetaObject()
{
    if ( metaObj )
	return;
    if ( strcmp(Sketcher_Property::className(), "Sketcher_Property") != 0 )
	badSuperclassWarning("Sketcher_PropertyPoint","Sketcher_Property");
    (void) staticMetaObject();
}

#ifndef QT_NO_TRANSLATION
QString Sketcher_PropertyPoint::tr(const char* s)
{
    return ((QNonBaseApplication*)qApp)->translate("Sketcher_PropertyPoint",s);
}

#endif // QT_NO_TRANSLATION
QMetaObject* Sketcher_PropertyPoint::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    (void) Sketcher_Property::staticMetaObject();
#ifndef QT_NO_PROPERTIES
#endif // QT_NO_PROPERTIES
    QMetaData::Access *slot_tbl_access = 0;
    metaObj = QMetaObject::new_metaobject(
	"Sketcher_PropertyPoint", "Sketcher_Property",
	0, 0,
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
