/*******************************************************************************
* FILE NAME: CstmrLst.cpp                                                      *
*                                                                              *
* DESCRIPTION:                                                                 *
*   Class implementation of the class:                                         *
*     CustomerListCanvas- Canvas with customerlist for Lease application       *
* ---------------------------------------------------------------------------- *
* Warning: This file was generated by the VisualAge C++ Visual Builder.        *
* Modifications to this source file will be lost when the part is regenerated. *
*******************************************************************************/
#ifndef _IMCELCV_
#include <imcelcv.hpp>
#endif

#ifndef _IPOINT_
#include <ipoint.hpp>
#endif

#ifndef _ISTATTXT_
#include <istattxt.hpp>
#endif

#ifndef _INOTIFEV_
#include <inotifev.hpp>
#endif

#ifndef _IOBSERVR_
#include <iobservr.hpp>
#endif

#ifndef _ISTDNTFY_
#include <istdntfy.hpp>
#endif

#ifndef _CUSTOMERLISTCANVAS_
#include "CstmrLst.hpp"
#endif

#ifndef _IVBDEFS_
#include <ivbdefs.h>
#endif

#ifndef _ITRACE_
#include <itrace.hpp>
#endif


#pragma export (CustomerListCanvas::readyId)
const INotificationId CustomerListCanvas::readyId = "CustomerListCanvas::readyId";

#pragma export (CustomerListCanvas::customerListBox)
const INotificationId CustomerListCanvas::customerListBox = "CustomerListCanvas::customerListBox";

//------------------------------------------------------------------------------
// CustomerListCanvas :: defaultFramingSpec
//------------------------------------------------------------------------------
#pragma export (CustomerListCanvas::defaultFramingSpec())
IRectangle CustomerListCanvas::defaultFramingSpec()
{
   return(IRectangle(IPoint(30,161),ISize(247, 316)));
}


//------------------------------------------------------------------------------
// CustomerListCanvas :: CustomerListCanvas
//------------------------------------------------------------------------------
#pragma export (CustomerListCanvas::CustomerListCanvas(unsigned long, IWindow *, IWindow *, const IRectangle &, const IMultiCellCanvas::Style &))
CustomerListCanvas::CustomerListCanvas(
      unsigned long id, 
      IWindow * parent, 
      IWindow * owner, 
      const IRectangle & rect, 
      const IMultiCellCanvas::Style & style)
   : IMultiCellCanvas(id, parent, owner, rect, style)
{
   iListBox1 = new IListBox(
      id+WNDOFFSET_CustomerListCanvas_ListBox1, 
      this, 
      this, 
      IRectangle());
   iStaticText1 = new IStaticText(
      id+WNDOFFSET_CustomerListCanvas_StaticText1, 
      this, 
      this, 
      IRectangle());

   this->addToCell(iListBox1, 2, 3, 1, 1);
   this->addToCell(iStaticText1, 2, 2, 1, 1);
   this->setColumnWidth(2, IMultiCellCanvas::defaultCell().width(), true);
   this->setColumnWidth(3, IMultiCellCanvas::defaultCell().width(), false);
   this->setRowHeight(3, IMultiCellCanvas::defaultCell().height(), true);
   this->setRowHeight(6, IMultiCellCanvas::defaultCell().height(), false);
   iListBox1->setMinimumSize(ISize(217, 231));
   iStaticText1->setText("Select customer:");
}     //end constructor


//------------------------------------------------------------------------------
// CustomerListCanvas :: ~CustomerListCanvas
//------------------------------------------------------------------------------
#pragma export (CustomerListCanvas::~CustomerListCanvas())
CustomerListCanvas::~CustomerListCanvas()
{
   this->stopHandlingNotificationsFor(*iListBox1);

   delete iListBox1;
   delete iStaticText1;
}

//------------------------------------------------------------------------------
// CustomerListCanvas :: initializePart
//------------------------------------------------------------------------------
#pragma export (CustomerListCanvas::initializePart())
CustomerListCanvas & CustomerListCanvas::initializePart()
{
   this->handleNotificationsFor(*iListBox1);
   makeConnections();
   notifyObservers(INotificationEvent(readyId, *this));
   return *this;
}


//------------------------------------------------------------------------------
// CustomerListCanvas :: makeConnections
//------------------------------------------------------------------------------
#pragma export (CustomerListCanvas::makeConnections())
Boolean CustomerListCanvas::makeConnections()
{
   this->enableNotification();
   iListBox1->enableNotification();
   iStaticText1->enableNotification();

   unsigned long id = this->id();
   return true;
}


//------------------------------------------------------------------------------
// CustomerListCanvas :: dispatchNotificationEvent
//------------------------------------------------------------------------------
#pragma export (CustomerListCanvas::dispatchNotificationEvent(const INotificationEvent &))
IObserver & CustomerListCanvas::dispatchNotificationEvent(const INotificationEvent & anEvent)
{

   return *this;
}



