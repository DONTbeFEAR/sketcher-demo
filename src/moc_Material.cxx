/****************************************************************************
** DialogMaterial meta object code from reading C++ file 'Material.h'
**
** Created: Mon Jun 13 22:27:49 2005
**      by: The Qt MOC ($Id: //depot/qt/main/src/moc/moc.y#178 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#define Q_MOC_DialogMaterial
#if !defined(Q_MOC_OUTPUT_REVISION)
#define Q_MOC_OUTPUT_REVISION 8
#elif Q_MOC_OUTPUT_REVISION != 8
#error "Moc format conflict - please regenerate all moc files"
#endif

#include ".././src/Material.h"
#include <qmetaobject.h>
#include <qapplication.h>

#if defined(Q_SPARCWORKS_FUNCP_BUG)
#define Q_AMPERSAND
#else
#define Q_AMPERSAND &
#endif


const char *DialogMaterial::className() const
{
    return "DialogMaterial";
}

QMetaObject *DialogMaterial::metaObj = 0;

void DialogMaterial::initMetaObject()
{
    if ( metaObj )
	return;
    if ( strcmp(QDialog::className(), "QDialog") != 0 )
	badSuperclassWarning("DialogMaterial","QDialog");
    (void) staticMetaObject();
}

#ifndef QT_NO_TRANSLATION
QString DialogMaterial::tr(const char* s)
{
    return ((QNonBaseApplication*)qApp)->translate("DialogMaterial",s);
}

#endif // QT_NO_TRANSLATION
QMetaObject* DialogMaterial::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    (void) QDialog::staticMetaObject();
#ifndef QT_NO_PROPERTIES
#endif // QT_NO_PROPERTIES
    typedef void(DialogMaterial::*m1_t0)(bool);
    m1_t0 v1_0 = Q_AMPERSAND DialogMaterial::updateButtons;
    QMetaData *slot_tbl = QMetaObject::new_metadata(1);
    QMetaData::Access *slot_tbl_access = QMetaObject::new_metaaccess(1);
    slot_tbl[0].name = "updateButtons(bool)";
    slot_tbl[0].ptr = *((QMember*)&v1_0);
    slot_tbl_access[0] = QMetaData::Public;
    typedef void(DialogMaterial::*m2_t0)(int);
    m2_t0 v2_0 = Q_AMPERSAND DialogMaterial::sendMaterialChanged;
    QMetaData *signal_tbl = QMetaObject::new_metadata(1);
    signal_tbl[0].name = "sendMaterialChanged(int)";
    signal_tbl[0].ptr = *((QMember*)&v2_0);
    metaObj = QMetaObject::new_metaobject(
	"DialogMaterial", "QDialog",
	slot_tbl, 1,
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

// SIGNAL sendMaterialChanged
void DialogMaterial::sendMaterialChanged( int t0 )
{
    activate_signal( "sendMaterialChanged(int)", t0 );
}
