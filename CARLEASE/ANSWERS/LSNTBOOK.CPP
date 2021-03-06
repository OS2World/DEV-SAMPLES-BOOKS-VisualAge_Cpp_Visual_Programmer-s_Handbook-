/*******************************************************************************
* FILE NAME: LsNtbook.cpp                                                      *
*                                                                              *
* DESCRIPTION:                                                                 *
*   Class implementation of the class:                                         *
*     LeaseNotebook- The completed lease application                           *
* ---------------------------------------------------------------------------- *
* Warning: This file was generated by the VisualAge C++ Visual Builder.        *
* Modifications to this source file will be lost when the part is regenerated. *
*******************************************************************************/
#ifndef _IFRAME_
#include <iframe.hpp>
#endif

#ifndef _INOTEBK_
#include <inotebk.hpp>
#endif

#ifndef _IPOINT_
#include <ipoint.hpp>
#endif

#ifndef _IVBNBKPG_
#include <ivbnbkpg.hpp>
#endif

#ifndef _IVPORT_
#include <ivport.hpp>
#endif

#ifndef _IVBVPMSZ_
#include <ivbvpmsz.hpp>
#endif

#ifndef _CUSTOMERLISTCANVAS_
#include "CstmrLst.hpp"
#endif

#ifndef _IRECT_
#include <irect.hpp>
#endif

#ifndef _CUSTOMERCANVAS_
#include "CstmrCnv.hpp"
#endif

#ifndef _LEASEFILEPARSER_
#include "parser.hpp"
#endif

#ifndef _ILISTBOX_
#include <ilistbox.hpp>
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

#ifndef _LEASENOTEBOOK_
#include "LsNtbook.hpp"
#endif

#ifndef _IVBDEFS_
#include <ivbdefs.h>
#endif

#ifndef _ITRACE_
#include <itrace.hpp>
#endif


//*****************************************************************************
// Class definition for LeaseNotebookConn0
//*****************************************************************************
class LeaseNotebookConn0 : public IObserver, public IStandardNotifier {
public:
   virtual  ~LeaseNotebookConn0(){};

   //---------------------------------------------------------------------------
   // public member functions
   //---------------------------------------------------------------------------
   void initialize(LeaseNotebook * aSource, IVBVariablePartPointer<IListBox *> * aTarget)
      {source = aSource; target = aTarget; enableNotification(); };
   LeaseNotebookConn0 & setThis(CustomerListCanvas * aSelf) {iThis = aSelf; return *this;};

protected:
   //---------------------------------------------------------------------------
   // protected member functions
   //---------------------------------------------------------------------------
   virtual IObserver & dispatchNotificationEvent(const INotificationEvent & anEvent)
      {
      if (!target) return(*this);
      if (anEvent.notificationId() == LeaseNotebook::readyId)
         {
         IFUNCTRACE_DEVELOP();
         ITRACE_DEVELOP(" firing connection : (ready) to listbox(this))");
         try {target->setTarget(iThis->getListBox1());}
         catch (IException& exc) {};
         }
      return(*this);
      };

private:
   //---------------------------------------------------------------------------
   // private member data
   //---------------------------------------------------------------------------
   LeaseNotebook * source;
   IVBVariablePartPointer<IListBox *> * target;
   CustomerListCanvas * iThis;


};   //LeaseNotebookConn0


//*****************************************************************************
// Class definition for LeaseNotebookConn1
//*****************************************************************************
class LeaseNotebookConn1 : public IObserver, public IStandardNotifier {
public:
   virtual  ~LeaseNotebookConn1(){};

   //---------------------------------------------------------------------------
   // public member functions
   //---------------------------------------------------------------------------
   void initialize(LeaseNotebook * aSource, IVBVariablePartPointer<LeaseFileParser *> * aTarget)
      {source = aSource; target = aTarget; enableNotification(); };
   LeaseNotebookConn1 & setThis(CustomerCanvas * aSelf) {iThis = aSelf; return *this;};

protected:
   //---------------------------------------------------------------------------
   // protected member functions
   //---------------------------------------------------------------------------
   virtual IObserver & dispatchNotificationEvent(const INotificationEvent & anEvent)
      {
      if (!target) return(*this);
      if (anEvent.notificationId() == LeaseNotebook::readyId)
         {
         IFUNCTRACE_DEVELOP();
         ITRACE_DEVELOP(" firing connection : (ready) to parser(this))");
         try {target->setTarget(iThis->getleaseInfo()->getaParser());}
         catch (IException& exc) {};
         }
      return(*this);
      };

private:
   //---------------------------------------------------------------------------
   // private member data
   //---------------------------------------------------------------------------
   LeaseNotebook * source;
   IVBVariablePartPointer<LeaseFileParser *> * target;
   CustomerCanvas * iThis;


};   //LeaseNotebookConn1


//*****************************************************************************
// Class definition for LeaseNotebookConn4
//*****************************************************************************
class LeaseNotebookConn4 : public IObserver, public IStandardNotifier {
public:
   virtual  ~LeaseNotebookConn4(){};

   //---------------------------------------------------------------------------
   // public member functions
   //---------------------------------------------------------------------------
   void initialize(IVBVariablePartPointer<LeaseFileParser *> * aSource, IVBVariablePartPointer<IListBox *> * aTarget)
      {source = aSource; target = aTarget; enableNotification(); };
   LeaseNotebookConn4 & setText(IVBVariablePartPointer<LeaseFileParser *> * aSelf) {iText = aSelf; return *this;};

protected:
   //---------------------------------------------------------------------------
   // protected member functions
   //---------------------------------------------------------------------------
   virtual IObserver & dispatchNotificationEvent(const INotificationEvent & anEvent)
      {
      if (!source->target()) return(*this);
      if (!target->target()) return(*this);
      if (anEvent.notificationId() == LeaseFileParser::lineAddedToCollectionId)
         {
         IFUNCTRACE_DEVELOP();
         ITRACE_DEVELOP(" firing connection : parser(lineAddedToCollection) to listbox(addAsLast))");
         try {target->target()->addAsLast(iText->target()->custName());}
         catch (IException& exc) {};
         }
      return(*this);
      };

private:
   //---------------------------------------------------------------------------
   // private member data
   //---------------------------------------------------------------------------
   IVBVariablePartPointer<LeaseFileParser *> * source;
   IVBVariablePartPointer<IListBox *> * target;
   IVBVariablePartPointer<LeaseFileParser *> * iText;


};   //LeaseNotebookConn4


//*****************************************************************************
// Class definition for LeaseNotebookConn6
//*****************************************************************************
class LeaseNotebookConn6 : public IObserver, public IStandardNotifier {
public:
   virtual  ~LeaseNotebookConn6(){};

   //---------------------------------------------------------------------------
   // public member functions
   //---------------------------------------------------------------------------
   void initialize(IVBVariablePartPointer<IListBox *> * aSource, IVBVariablePartPointer<LeaseFileParser *> * aTarget)
      {source = aSource; target = aTarget; enableNotification(); };
   LeaseNotebookConn6 & setPosition(IVBVariablePartPointer<IListBox *> * aSelf) {iPosition = aSelf; return *this;};

protected:
   //---------------------------------------------------------------------------
   // protected member functions
   //---------------------------------------------------------------------------
   virtual IObserver & dispatchNotificationEvent(const INotificationEvent & anEvent)
      {
      if (!source->target()) return(*this);
      if (!target->target()) return(*this);
      if (anEvent.notificationId() == IListBox::selectId)
         {
         IFUNCTRACE_DEVELOP();
         ITRACE_DEVELOP(" firing connection : listbox(selection) to parser(elementAt))");
         try {target->target()->elementAt(iPosition->target()->selection());}
         catch (IException& exc) {};
         }
      return(*this);
      };

private:
   //---------------------------------------------------------------------------
   // private member data
   //---------------------------------------------------------------------------
   IVBVariablePartPointer<IListBox *> * source;
   IVBVariablePartPointer<LeaseFileParser *> * target;
   IVBVariablePartPointer<IListBox *> * iPosition;


};   //LeaseNotebookConn6


//*****************************************************************************
// Class definition for LeaseNotebookConn8
//*****************************************************************************
class LeaseNotebookConn8 : public IObserver, public IStandardNotifier {
public:
   virtual  ~LeaseNotebookConn8(){};

   //---------------------------------------------------------------------------
   // public member functions
   //---------------------------------------------------------------------------
   void initialize(LeaseNotebook * aSource, CustomerCanvas * aTarget)
      {source = aSource; target = aTarget; enableNotification(); };

protected:
   //---------------------------------------------------------------------------
   // protected member functions
   //---------------------------------------------------------------------------
   virtual IObserver & dispatchNotificationEvent(const INotificationEvent & anEvent)
      {
      if (anEvent.notificationId() == LeaseNotebook::readyId)
         {
         IFUNCTRACE_DEVELOP();
         ITRACE_DEVELOP(" firing connection : (ready) to CustomerCanvas1(readFile))");
         try {target->getleaseInfo()->getaFile()->readFile();}
         catch (IException& exc) {};
         }
      return(*this);
      };

private:
   //---------------------------------------------------------------------------
   // private member data
   //---------------------------------------------------------------------------
   LeaseNotebook * source;
   CustomerCanvas * target;


};   //LeaseNotebookConn8


//*****************************************************************************
// Class definition for LeaseNotebookConn9
//*****************************************************************************
class LeaseNotebookConn9 : public IObserver, public IStandardNotifier {
public:
   virtual  ~LeaseNotebookConn9(){};

   //---------------------------------------------------------------------------
   // public member functions
   //---------------------------------------------------------------------------
   void initialize(LeaseNotebook * aSource, IVBVariablePartPointer<IListBox *> * aTarget)
      {source = aSource; target = aTarget; enableNotification(); };

protected:
   //---------------------------------------------------------------------------
   // protected member functions
   //---------------------------------------------------------------------------
   virtual IObserver & dispatchNotificationEvent(const INotificationEvent & anEvent)
      {
      if (!target->target()) return(*this);
      if (anEvent.notificationId() == LeaseNotebook::readyId)
         {
         IFUNCTRACE_DEVELOP();
         ITRACE_DEVELOP(" firing connection : (ready) to listbox(selection))");
         try {target->target()->select(0);}
         catch (IException& exc) {};
         }
      return(*this);
      };

private:
   //---------------------------------------------------------------------------
   // private member data
   //---------------------------------------------------------------------------
   LeaseNotebook * source;
   IVBVariablePartPointer<IListBox *> * target;


};   //LeaseNotebookConn9


#pragma export (LeaseNotebook::readyId)
const INotificationId LeaseNotebook::readyId = "LeaseNotebook::readyId";

//------------------------------------------------------------------------------
// LeaseNotebook :: defaultFramingSpec
//------------------------------------------------------------------------------
#pragma export (LeaseNotebook::defaultFramingSpec())
const IRectangle LeaseNotebook::defaultFramingSpec()
{
   return(IRectangle(IPoint(30, IWindow::desktopWindow()->size().height() - 30 - 506),ISize(486, 506)));
}


//------------------------------------------------------------------------------
// LeaseNotebook :: defaultTitle
//------------------------------------------------------------------------------
#pragma export (LeaseNotebook::defaultTitle())
IString LeaseNotebook::defaultTitle()
{
   return("Lease status calculator");
}


//------------------------------------------------------------------------------
// LeaseNotebook :: LeaseNotebook
//------------------------------------------------------------------------------
#pragma export (LeaseNotebook::LeaseNotebook(unsigned long, IWindow*, IWindow*, const IRectangle&, const IFrameWindow::Style&, const char*))
LeaseNotebook::LeaseNotebook(
      unsigned long id, 
      IWindow* parent, 
      IWindow* owner, 
      const IRectangle& rect, 
      const IFrameWindow::Style& style, 
      const char* title)
   : IFrameWindow(id, parent, owner, rect, style, title)
{
   iNotebook1 = new INotebook(
      IC_FRAME_CLIENT_ID, 
      this, 
      this, 
      IRectangle());
   iViewPort1 = new IViewPort(
      id+WNDOFFSET_LeaseNotebook_ViewPort1, 
      iNotebook1, 
      iNotebook1, 
      IRectangle());
   iCustomerListCanvas1 = new CustomerListCanvas(
      id+WNDOFFSET_LeaseNotebook_CustomerListCanvas1, 
      iViewPort1, 
      iViewPort1, 
      IRectangle(IPoint(0,7),ISize(384, 376)));
   iVBNotebookPage = new IVBNotebookPage(iNotebook1, INotebook::PageSettings::autoPageSize | INotebook::PageSettings::statusTextOn | INotebook::PageSettings::majorTab, iViewPort1);
   iViewPort2 = new IViewPort(
      id+WNDOFFSET_LeaseNotebook_ViewPort2, 
      iNotebook1, 
      iNotebook1, 
      IRectangle());
   iCustomerCanvas1 = new CustomerCanvas(
      id+WNDOFFSET_LeaseNotebook_CustomerCanvas1, 
      iViewPort2, 
      iViewPort2, 
      IRectangle(IPoint(0,15),ISize(383, 368)));
   iVBNotebookPage1 = new IVBNotebookPage(iNotebook1, INotebook::PageSettings::autoPageSize | INotebook::PageSettings::statusTextOn | INotebook::PageSettings::majorTab, iViewPort2);
   iparser = new IVBVariablePartPointer<LeaseFileParser *>();
   ilistbox = new IVBVariablePartPointer<IListBox *>();

   conn0 = new LeaseNotebookConn0();
   conn1 = new LeaseNotebookConn1();
   conn4 = new LeaseNotebookConn4();
   conn6 = new LeaseNotebookConn6();
   conn8 = new LeaseNotebookConn8();
   conn9 = new LeaseNotebookConn9();

   iNotebook1->setStatusTextAlignment(INotebook::center);
   iNotebook1->setBinding(INotebook::spiral);
   iNotebook1->setMajorTabSize(ISize(70, 25));
   iNotebook1->setOrientation(INotebook::backpagesRightTabsTop);
   iVBNotebookPage->setTabText("List");
   iVBNotebookPage->setStatusText("Customer list");
   iViewPort1IVBMinSizeViewPortHandler = new IVBMinSizeViewPortHandler();
   iViewPort1IVBMinSizeViewPortHandler->handleEventsFor(iViewPort1);
   iVBNotebookPage1->setTabText("Details");
   iVBNotebookPage1->setStatusText("CustomerDetails");
   iViewPort2IVBMinSizeViewPortHandler = new IVBMinSizeViewPortHandler();
   iViewPort2IVBMinSizeViewPortHandler->handleEventsFor(iViewPort2);
   this->setFocus();
   this->setClient(iNotebook1);
}     //end constructor


//------------------------------------------------------------------------------
// LeaseNotebook :: ~LeaseNotebook
//------------------------------------------------------------------------------
#pragma export (LeaseNotebook::~LeaseNotebook())
LeaseNotebook::~LeaseNotebook()
{
   conn0->stopHandlingNotificationsFor(*this);
   conn1->stopHandlingNotificationsFor(*this);
   conn4->stopHandlingNotificationsFor(*iparser);
   conn6->stopHandlingNotificationsFor(*ilistbox);
   conn8->stopHandlingNotificationsFor(*this);
   conn9->stopHandlingNotificationsFor(*this);

   delete conn0;
   delete conn1;
   delete conn4;
   delete conn6;
   delete conn8;
   delete conn9;

   iViewPort1IVBMinSizeViewPortHandler->stopHandlingEventsFor(iViewPort1);
   delete iViewPort1IVBMinSizeViewPortHandler;
   iViewPort2IVBMinSizeViewPortHandler->stopHandlingEventsFor(iViewPort2);
   delete iViewPort2IVBMinSizeViewPortHandler;

   delete iNotebook1;
   delete iVBNotebookPage;
   delete iViewPort1;
   delete iCustomerListCanvas1;
   delete iVBNotebookPage1;
   delete iViewPort2;
   delete iCustomerCanvas1;
   delete iparser;
   delete ilistbox;
}

//------------------------------------------------------------------------------
// LeaseNotebook :: initializePart
//------------------------------------------------------------------------------
#pragma export (LeaseNotebook::initializePart())
LeaseNotebook & LeaseNotebook::initializePart()
{
   iCustomerListCanvas1->initializePart();
   iCustomerCanvas1->initializePart();
   makeConnections();
   notifyObservers(INotificationEvent(readyId, *this));
   return *this;
}


//------------------------------------------------------------------------------
// LeaseNotebook :: makeConnections
//------------------------------------------------------------------------------
#pragma export (LeaseNotebook::makeConnections())
Boolean LeaseNotebook::makeConnections()
{
   this->enableNotification();
   iNotebook1->enableNotification();
   iVBNotebookPage->enableNotification();
   iViewPort1->enableNotification();
   iCustomerListCanvas1->enableNotification();
   iVBNotebookPage1->enableNotification();
   iViewPort2->enableNotification();
   iCustomerCanvas1->enableNotification();
   iparser->enableNotification();
   ilistbox->enableNotification();

   unsigned long id = this->id();
   conn0->initialize(this, ilistbox);
   conn0->handleNotificationsFor(*this);
   conn1->initialize(this, iparser);
   conn1->handleNotificationsFor(*this);
   conn0->setThis(iCustomerListCanvas1);
   conn1->setThis(iCustomerCanvas1);
   conn4->initialize(iparser, ilistbox);
   conn4->handleNotificationsFor(*iparser);
   conn4->setText(iparser);
   conn6->initialize(ilistbox, iparser);
   conn6->handleNotificationsFor(*ilistbox);
   conn6->setPosition(ilistbox);
   conn8->initialize(this, iCustomerCanvas1);
   conn8->handleNotificationsFor(*this);
   conn9->initialize(this, ilistbox);
   conn9->handleNotificationsFor(*this);

   return true;
}



