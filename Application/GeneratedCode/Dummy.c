/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 9.30
* Profile  : STM32H745
* Platform : STM.STM32.RGB565
*
*******************************************************************************/

#include "ewlocale.h"
#include "_ResourcesFont.h"
#include "_WidgetSetValueDisplayConfig.h"
#include "BezierClock.h"
#include "Dummy.h"
#include "Resources.h"
#include "Views.h"
#include "WidgetSet.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x0000000C, /* ratio 166.67 % */
  0xB8000900, 0x8005C452, 0x04010883, 0x00000004, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XColor _Const0000 = { 0xFC, 0x09, 0x10, 0xFF };
static const XColor _Const0001 = { 0xF7, 0x0E, 0x17, 0xFF };
static const XColor _Const0002 = { 0x9A, 0x1A, 0x1E, 0xFF };
static const XColor _Const0003 = { 0x8A, 0x10, 0x12, 0xFF };
static const XStringRes _Const0004 = { _StringsDefault0, 0x0002 };
static const XPoint _Const0005 = { 0, 0 };

/* User defined auto object: 'Dummy::DummyValueDisplayConfig' */
EW_DEFINE_AUTOOBJECT( DummyDummyValueDisplayConfig, WidgetSetValueDisplayConfig )

/* Initializer for the auto object 'Dummy::DummyValueDisplayConfig' */
void DummyDummyValueDisplayConfig__Init( WidgetSetValueDisplayConfig _this )
{
  WidgetSetValueDisplayConfig_OnSetValueMarginLeft( _this, 0 );
  WidgetSetValueDisplayConfig_OnSetValueColorNegative( _this, _Const0000 );
  WidgetSetValueDisplayConfig_OnSetValueColorPositive( _this, _Const0001 );
  WidgetSetValueDisplayConfig_OnSetValueFont( _this, EwLoadResource( &ResourcesFontExtraLarge, 
  ResourcesFont ));
  WidgetSetValueDisplayConfig_OnSetUnitColorNegative( _this, _Const0002 );
  WidgetSetValueDisplayConfig_OnSetUnitColorPositive( _this, _Const0003 );
  WidgetSetValueDisplayConfig_OnSetUnitAlignment( _this, ViewsTextAlignmentAlignHorzRight 
  | ViewsTextAlignmentAlignVertCenter );
  WidgetSetValueDisplayConfig_OnSetUnitFont( _this, EwLoadResource( &BezierClockFontL, 
  ResourcesFont ));
  WidgetSetValueDisplayConfig_OnSetFormatDecimalSign( _this, EwLoadString( &_Const0004 ));
  WidgetSetValueDisplayConfig_OnSetLayout( _this, WidgetSetValueDisplayLayoutAlignUnitRightToValue );
  WidgetSetValueDisplayConfig_OnSetWidgetMaxSize( _this, _Const0005 );
  WidgetSetValueDisplayConfig_OnSetWidgetMinSize( _this, _Const0005 );
}

/* Table with links to derived variants of the auto object : 'Dummy::DummyValueDisplayConfig' */
EW_DEFINE_AUTOOBJECT_VARIANTS( DummyDummyValueDisplayConfig )
EW_END_OF_AUTOOBJECT_VARIANTS( DummyDummyValueDisplayConfig )

/* Embedded Wizard */
