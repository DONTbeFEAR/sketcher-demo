/****************************************************************************
** Sketcher_PropertyCircle meta object code from reading C++ file 'Sketcher_PropertyCircle.hxx'
**
** Created: Thu Jun 16 11:59:08 2005
**      by: The Qt MOC ($Id: //depot/qt/main/src/moc/moc.y#178 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#define Q_MOC_Sketcher_PropertyCircle
#if !defined(Q_MOC_OUTPUT_REVISION)
#define Q_MOC_OUTPUT_REVISION 8
#elif Q_MOC_OUTPUT_REVISION != 8
#error "Moc format conflict - please regenerate all moc files"
#endif

#include ".././src/Sketcher_PropertyCircle.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#if defined(Q_SPARCWORKS_FUNCP_BUG)
#define Q_AMPERSAND
#else
#define Q_AMPERSAND &
#endif


const char *Sketcher_PropertyCircle::className() const
{
    return "Sketcher_PropertyCircle";
}

QMetaObject *Sketcher_PropertyCircle::metaObj = 0;

void Sketcher_PropertyCircle::initMetaObject()
{
    if ( metaObj )
	return;
    if ( strcmp(Sketcher_Property::className(), "Sketcher_Property") != 0 )
	badSuperclassWarning("Sketcher_PropertyCircle","Sketcher_Property");
    (void) staticMetaObject();
}

#ifndef QT_NO_TRANSLATION
QString Sketcher_PropertyCircle::tr(const char* s)
{
    return ((QNonBaseApplication*)qApp)->translate("Sketcher_PropertyCircle",s);
}

#endif // QT_NO_TRANSLATION
QMetaObject* Sketcher_PropertyCircle::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    (void) Sketcher_Property::staticMetaObject();
#ifndef QT_NO_PROPERTIES
#endif // QT_NO_PROPERTIES
    QMetaData::Access *slot_tbl_access = 0;
    metaObj = QMetaObject::new_metaobject(
	"Sketcher_PropertyCircle", "Sketcher_Property",
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
