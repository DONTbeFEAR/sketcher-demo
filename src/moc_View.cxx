/****************************************************************************
** View meta object code from reading C++ file 'View.h'
**
** Created: Mon Jun 13 22:27:48 2005
**      by: The Qt MOC ($Id: //depot/qt/main/src/moc/moc.y#178 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#define Q_MOC_View
#if !defined(Q_MOC_OUTPUT_REVISION)
#define Q_MOC_OUTPUT_REVISION 8
#elif Q_MOC_OUTPUT_REVISION != 8
#error "Moc format conflict - please regenerate all moc files"
#endif

#include ".././src/View.h"
#include <qmetaobject.h>
#include <qapplication.h>

#if defined(Q_SPARCWORKS_FUNCP_BUG)
#define Q_AMPERSAND
#else
#define Q_AMPERSAND &
#endif


const char *View::className() const
{
    return "View";
}

QMetaObject *View::metaObj = 0;

void View::initMetaObject()
{
    if ( metaObj )
	return;
    if ( strcmp(QWidget::className(), "QWidget") != 0 )
	badSuperclassWarning("View","QWidget");
    (void) staticMetaObject();
}

#ifndef QT_NO_TRANSLATION
QString View::tr(const char* s)
{
    return ((QNonBaseApplication*)qApp)->translate("View",s);
}

#endif // QT_NO_TRANSLATION
QMetaObject* View::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    (void) QWidget::staticMetaObject();
#ifndef QT_NO_PROPERTIES
#endif // QT_NO_PROPERTIES
    typedef void(View::*m1_t0)();
    typedef void(View::*m1_t1)();
    typedef void(View::*m1_t2)();
    typedef void(View::*m1_t3)();
    typedef void(View::*m1_t4)();
    typedef void(View::*m1_t5)();
    typedef void(View::*m1_t6)();
    typedef void(View::*m1_t7)();
    typedef void(View::*m1_t8)();
    typedef void(View::*m1_t9)();
    typedef void(View::*m1_t10)();
    typedef void(View::*m1_t11)();
    typedef void(View::*m1_t12)();
    typedef void(View::*m1_t13)();
    typedef void(View::*m1_t14)();
    typedef void(View::*m1_t15)();
    typedef void(View::*m1_t16)(bool);
    typedef void(View::*m1_t17)();
    typedef void(View::*m1_t18)(QToolBar*);
    typedef void(View::*m1_t19)(int);
    typedef void(View::*m1_t20)(int);
    typedef void(View::*m1_t21)(int);
    typedef void(View::*m1_t22)(int);
    typedef void(View::*m1_t23)(int);
    typedef void(View::*m1_t24)(bool);
    typedef void(View::*m1_t25)();
    typedef void(View::*m1_t26)();
    typedef void(View::*m1_t27)();
    typedef void(View::*m1_t28)();
    typedef void(View::*m1_t29)();
    typedef void(View::*m1_t30)();
    typedef void(View::*m1_t31)();
    typedef void(View::*m1_t32)();
    typedef void(View::*m1_t33)();
    typedef void(View::*m1_t34)();
    typedef void(View::*m1_t35)();
    typedef void(View::*m1_t36)();
    typedef void(View::*m1_t37)();
    typedef void(View::*m1_t38)();
    typedef void(View::*m1_t39)();
    typedef void(View::*m1_t40)();
    typedef void(View::*m1_t41)();
    m1_t0 v1_0 = Q_AMPERSAND View::fitAll;
    m1_t1 v1_1 = Q_AMPERSAND View::fitArea;
    m1_t2 v1_2 = Q_AMPERSAND View::zoom;
    m1_t3 v1_3 = Q_AMPERSAND View::pan;
    m1_t4 v1_4 = Q_AMPERSAND View::globalPan;
    m1_t5 v1_5 = Q_AMPERSAND View::front;
    m1_t6 v1_6 = Q_AMPERSAND View::back;
    m1_t7 v1_7 = Q_AMPERSAND View::top;
    m1_t8 v1_8 = Q_AMPERSAND View::bottom;
    m1_t9 v1_9 = Q_AMPERSAND View::left;
    m1_t10 v1_10 = Q_AMPERSAND View::right;
    m1_t11 v1_11 = Q_AMPERSAND View::axo;
    m1_t12 v1_12 = Q_AMPERSAND View::rotation;
    m1_t13 v1_13 = Q_AMPERSAND View::reset;
    m1_t14 v1_14 = Q_AMPERSAND View::hlrOn;
    m1_t15 v1_15 = Q_AMPERSAND View::hlrOff;
    m1_t16 v1_16 = Q_AMPERSAND View::updateToggled;
    m1_t17 v1_17 = Q_AMPERSAND View::onBackground;
    m1_t18 v1_18 = Q_AMPERSAND View::onaddComboBox;
    m1_t19 v1_19 = Q_AMPERSAND View::updateSnap;
    m1_t20 v1_20 = Q_AMPERSAND View::updateColor;
    m1_t21 v1_21 = Q_AMPERSAND View::updateType;
    m1_t22 v1_22 = Q_AMPERSAND View::updateStyle;
    m1_t23 v1_23 = Q_AMPERSAND View::updateWidth;
    m1_t24 v1_24 = Q_AMPERSAND View::setPolylineMode;
    m1_t25 v1_25 = Q_AMPERSAND View::onErase;
    m1_t26 v1_26 = Q_AMPERSAND View::onDeleteSelected;
    m1_t27 v1_27 = Q_AMPERSAND View::onProperty;
    m1_t28 v1_28 = Q_AMPERSAND View::onRedrawAll;
    m1_t29 v1_29 = Q_AMPERSAND View::onChangePlane;
    m1_t30 v1_30 = Q_AMPERSAND View::onGrid;
    m1_t31 v1_31 = Q_AMPERSAND View::onInputPoints;
    m1_t32 v1_32 = Q_AMPERSAND View::onInputLines;
    m1_t33 v1_33 = Q_AMPERSAND View::onInputCircles;
    m1_t34 v1_34 = Q_AMPERSAND View::onInputCircles3P;
    m1_t35 v1_35 = Q_AMPERSAND View::onInputCircles2PTan;
    m1_t36 v1_36 = Q_AMPERSAND View::onInputCirclesP2Tan;
    m1_t37 v1_37 = Q_AMPERSAND View::onInputCircles3Tan;
    m1_t38 v1_38 = Q_AMPERSAND View::onInputArc3P;
    m1_t39 v1_39 = Q_AMPERSAND View::onInputArcCenter2P;
    m1_t40 v1_40 = Q_AMPERSAND View::onInputBezierCurve;
    m1_t41 v1_41 = Q_AMPERSAND View::onTrimCurve;
    QMetaData *slot_tbl = QMetaObject::new_metadata(42);
    QMetaData::Access *slot_tbl_access = QMetaObject::new_metaaccess(42);
    slot_tbl[0].name = "fitAll()";
    slot_tbl[0].ptr = *((QMember*)&v1_0);
    slot_tbl_access[0] = QMetaData::Public;
    slot_tbl[1].name = "fitArea()";
    slot_tbl[1].ptr = *((QMember*)&v1_1);
    slot_tbl_access[1] = QMetaData::Public;
    slot_tbl[2].name = "zoom()";
    slot_tbl[2].ptr = *((QMember*)&v1_2);
    slot_tbl_access[2] = QMetaData::Public;
    slot_tbl[3].name = "pan()";
    slot_tbl[3].ptr = *((QMember*)&v1_3);
    slot_tbl_access[3] = QMetaData::Public;
    slot_tbl[4].name = "globalPan()";
    slot_tbl[4].ptr = *((QMember*)&v1_4);
    slot_tbl_access[4] = QMetaData::Public;
    slot_tbl[5].name = "front()";
    slot_tbl[5].ptr = *((QMember*)&v1_5);
    slot_tbl_access[5] = QMetaData::Public;
    slot_tbl[6].name = "back()";
    slot_tbl[6].ptr = *((QMember*)&v1_6);
    slot_tbl_access[6] = QMetaData::Public;
    slot_tbl[7].name = "top()";
    slot_tbl[7].ptr = *((QMember*)&v1_7);
    slot_tbl_access[7] = QMetaData::Public;
    slot_tbl[8].name = "bottom()";
    slot_tbl[8].ptr = *((QMember*)&v1_8);
    slot_tbl_access[8] = QMetaData::Public;
    slot_tbl[9].name = "left()";
    slot_tbl[9].ptr = *((QMember*)&v1_9);
    slot_tbl_access[9] = QMetaData::Public;
    slot_tbl[10].name = "right()";
    slot_tbl[10].ptr = *((QMember*)&v1_10);
    slot_tbl_access[10] = QMetaData::Public;
    slot_tbl[11].name = "axo()";
    slot_tbl[11].ptr = *((QMember*)&v1_11);
    slot_tbl_access[11] = QMetaData::Public;
    slot_tbl[12].name = "rotation()";
    slot_tbl[12].ptr = *((QMember*)&v1_12);
    slot_tbl_access[12] = QMetaData::Public;
    slot_tbl[13].name = "reset()";
    slot_tbl[13].ptr = *((QMember*)&v1_13);
    slot_tbl_access[13] = QMetaData::Public;
    slot_tbl[14].name = "hlrOn()";
    slot_tbl[14].ptr = *((QMember*)&v1_14);
    slot_tbl_access[14] = QMetaData::Public;
    slot_tbl[15].name = "hlrOff()";
    slot_tbl[15].ptr = *((QMember*)&v1_15);
    slot_tbl_access[15] = QMetaData::Public;
    slot_tbl[16].name = "updateToggled(bool)";
    slot_tbl[16].ptr = *((QMember*)&v1_16);
    slot_tbl_access[16] = QMetaData::Public;
    slot_tbl[17].name = "onBackground()";
    slot_tbl[17].ptr = *((QMember*)&v1_17);
    slot_tbl_access[17] = QMetaData::Public;
    slot_tbl[18].name = "onaddComboBox(QToolBar*)";
    slot_tbl[18].ptr = *((QMember*)&v1_18);
    slot_tbl_access[18] = QMetaData::Public;
    slot_tbl[19].name = "updateSnap(int)";
    slot_tbl[19].ptr = *((QMember*)&v1_19);
    slot_tbl_access[19] = QMetaData::Public;
    slot_tbl[20].name = "updateColor(int)";
    slot_tbl[20].ptr = *((QMember*)&v1_20);
    slot_tbl_access[20] = QMetaData::Public;
    slot_tbl[21].name = "updateType(int)";
    slot_tbl[21].ptr = *((QMember*)&v1_21);
    slot_tbl_access[21] = QMetaData::Public;
    slot_tbl[22].name = "updateStyle(int)";
    slot_tbl[22].ptr = *((QMember*)&v1_22);
    slot_tbl_access[22] = QMetaData::Public;
    slot_tbl[23].name = "updateWidth(int)";
    slot_tbl[23].ptr = *((QMember*)&v1_23);
    slot_tbl_access[23] = QMetaData::Public;
    slot_tbl[24].name = "setPolylineMode(bool)";
    slot_tbl[24].ptr = *((QMember*)&v1_24);
    slot_tbl_access[24] = QMetaData::Public;
    slot_tbl[25].name = "onErase()";
    slot_tbl[25].ptr = *((QMember*)&v1_25);
    slot_tbl_access[25] = QMetaData::Public;
    slot_tbl[26].name = "onDeleteSelected()";
    slot_tbl[26].ptr = *((QMember*)&v1_26);
    slot_tbl_access[26] = QMetaData::Public;
    slot_tbl[27].name = "onProperty()";
    slot_tbl[27].ptr = *((QMember*)&v1_27);
    slot_tbl_access[27] = QMetaData::Public;
    slot_tbl[28].name = "onRedrawAll()";
    slot_tbl[28].ptr = *((QMember*)&v1_28);
    slot_tbl_access[28] = QMetaData::Public;
    slot_tbl[29].name = "onChangePlane()";
    slot_tbl[29].ptr = *((QMember*)&v1_29);
    slot_tbl_access[29] = QMetaData::Public;
    slot_tbl[30].name = "onGrid()";
    slot_tbl[30].ptr = *((QMember*)&v1_30);
    slot_tbl_access[30] = QMetaData::Public;
    slot_tbl[31].name = "onInputPoints()";
    slot_tbl[31].ptr = *((QMember*)&v1_31);
    slot_tbl_access[31] = QMetaData::Public;
    slot_tbl[32].name = "onInputLines()";
    slot_tbl[32].ptr = *((QMember*)&v1_32);
    slot_tbl_access[32] = QMetaData::Public;
    slot_tbl[33].name = "onInputCircles()";
    slot_tbl[33].ptr = *((QMember*)&v1_33);
    slot_tbl_access[33] = QMetaData::Public;
    slot_tbl[34].name = "onInputCircles3P()";
    slot_tbl[34].ptr = *((QMember*)&v1_34);
    slot_tbl_access[34] = QMetaData::Public;
    slot_tbl[35].name = "onInputCircles2PTan()";
    slot_tbl[35].ptr = *((QMember*)&v1_35);
    slot_tbl_access[35] = QMetaData::Public;
    slot_tbl[36].name = "onInputCirclesP2Tan()";
    slot_tbl[36].ptr = *((QMember*)&v1_36);
    slot_tbl_access[36] = QMetaData::Public;
    slot_tbl[37].name = "onInputCircles3Tan()";
    slot_tbl[37].ptr = *((QMember*)&v1_37);
    slot_tbl_access[37] = QMetaData::Public;
    slot_tbl[38].name = "onInputArc3P()";
    slot_tbl[38].ptr = *((QMember*)&v1_38);
    slot_tbl_access[38] = QMetaData::Public;
    slot_tbl[39].name = "onInputArcCenter2P()";
    slot_tbl[39].ptr = *((QMember*)&v1_39);
    slot_tbl_access[39] = QMetaData::Public;
    slot_tbl[40].name = "onInputBezierCurve()";
    slot_tbl[40].ptr = *((QMember*)&v1_40);
    slot_tbl_access[40] = QMetaData::Public;
    slot_tbl[41].name = "onTrimCurve()";
    slot_tbl[41].ptr = *((QMember*)&v1_41);
    slot_tbl_access[41] = QMetaData::Public;
    typedef void(View::*m2_t0)();
    m2_t0 v2_0 = Q_AMPERSAND View::selectionChanged;
    QMetaData *signal_tbl = QMetaObject::new_metadata(1);
    signal_tbl[0].name = "selectionChanged()";
    signal_tbl[0].ptr = *((QMember*)&v2_0);
    metaObj = QMetaObject::new_metaobject(
	"View", "QWidget",
	slot_tbl, 42,
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

// SIGNAL selectionChanged
void View::selectionChanged()
{
    activate_signal( "selectionChanged()" );
}
