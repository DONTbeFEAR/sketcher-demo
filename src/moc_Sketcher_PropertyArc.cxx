/****************************************************************************
** Sketcher_PropertyArc meta object code from reading C++ file 'Sketcher_PropertyArc.hxx'
**
** Created: Thu Jun 16 11:59:09 2005
**      by: The Qt MOC ($Id: //depot/qt/main/src/moc/moc.y#178 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#define Q_MOC_Sketcher_PropertyArc
#if !defined(Q_MOC_OUTPUT_REVISION)
#define Q_MOC_OUTPUT_REVISION 8
#elif Q_MOC_OUTPUT_REVISION != 8
#error "Moc format conflict - please regenerate all moc files"
#endif

#include ".././src/Sketcher_PropertyArc.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#if defined(Q_SPARCWORKS_FUNCP_BUG)
#define Q_AMPERSAND
#else
#define Q_AMPERSAND &
#endif


const char *Sketcher_PropertyArc::className() const
{
    return "Sketcher_PropertyArc";
}

QMetaObject *Sketcher_PropertyArc::metaObj = 0;

void Sketcher_PropertyArc::initMetaObject()
{
    if ( metaObj )
	return;
    if ( strcmp(Sketcher_Property::className(), "Sketcher_Property") != 0 )
	badSuperclassWarning("Sketcher_PropertyArc","Sketcher_Property");
    (void) staticMetaObject();
}

#ifndef QT_NO_TRANSLATION
QString Sketcher_PropertyArc::tr(const char* s)
{
    return ((QNonBaseApplication*)qApp)->translate("Sketcher_PropertyArc",s);
}

#endif // QT_NO_TRANSLATION
QMetaObject* Sketcher_PropertyArc::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    (void) Sketcher_Property::staticMetaObject();
#ifndef QT_NO_PROPERTIES
#endif // QT_NO_PROPERTIES
    QMetaData::Access *slot_tbl_access = 0;
    metaObj = QMetaObject::new_metaobject(
	"Sketcher_PropertyArc", "Sketcher_Property",
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
