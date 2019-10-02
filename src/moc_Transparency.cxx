/****************************************************************************
** DialogTransparency meta object code from reading C++ file 'Transparency.h'
**
** Created: Mon Jun 13 22:27:48 2005
**      by: The Qt MOC ($Id: //depot/qt/main/src/moc/moc.y#178 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#define Q_MOC_DialogTransparency
#if !defined(Q_MOC_OUTPUT_REVISION)
#define Q_MOC_OUTPUT_REVISION 8
#elif Q_MOC_OUTPUT_REVISION != 8
#error "Moc format conflict - please regenerate all moc files"
#endif

#include ".././src/Transparency.h"
#include <qmetaobject.h>
#include <qapplication.h>

#if defined(Q_SPARCWORKS_FUNCP_BUG)
#define Q_AMPERSAND
#else
#define Q_AMPERSAND &
#endif


const char *DialogTransparency::className() const
{
    return "DialogTransparency";
}

QMetaObject *DialogTransparency::metaObj = 0;

void DialogTransparency::initMetaObject()
{
    if ( metaObj )
	return;
    if ( strcmp(QDialog::className(), "QDialog") != 0 )
	badSuperclassWarning("DialogTransparency","QDialog");
    (void) staticMetaObject();
}

#ifndef QT_NO_TRANSLATION
QString DialogTransparency::tr(const char* s)
{
    return ((QNonBaseApplication*)qApp)->translate("DialogTransparency",s);
}

#endif // QT_NO_TRANSLATION
QMetaObject* DialogTransparency::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    (void) QDialog::staticMetaObject();
#ifndef QT_NO_PROPERTIES
#endif // QT_NO_PROPERTIES
    QMetaData::Access *slot_tbl_access = 0;
    typedef void(DialogTransparency::*m2_t0)(int);
    m2_t0 v2_0 = Q_AMPERSAND DialogTransparency::sendTransparencyChanged;
    QMetaData *signal_tbl = QMetaObject::new_metadata(1);
    signal_tbl[0].name = "sendTransparencyChanged(int)";
    signal_tbl[0].ptr = *((QMember*)&v2_0);
    metaObj = QMetaObject::new_metaobject(
	"DialogTransparency", "QDialog",
	0, 0,
	signal_tbl, 1,
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

// SIGNAL sendTransparencyChanged
void DialogTransparency::sendTransparencyChanged( int t0 )
{
    activate_signal( "sendTransparencyChanged(int)", t0 );
}
