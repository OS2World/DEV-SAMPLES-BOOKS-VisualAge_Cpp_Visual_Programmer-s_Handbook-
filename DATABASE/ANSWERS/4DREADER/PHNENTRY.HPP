/*******************************************************************************
* FILE NAME: PhnEntry.hpp                                                      *
*                                                                              *
* DESCRIPTION:                                                                 *
*   Declaration of the class:                                                  *
*     PhoneEntry- A phone number entry part                                    *
* ---------------------------------------------------------------------------- *
* Warning: This file was generated by the VisualAge C++ Visual Builder.        *
* Modifications to this source file will be lost when the part is regenerated. *
*******************************************************************************/
#ifndef _PHONEENTRY_
#define _PHONEENTRY_  

class PhoneEntry;

#ifndef _ISETCV_
#include <isetcv.hpp>
#endif

#ifndef _IOBSERVR_
#include <iobservr.hpp>
#endif

class IEntryField;
#ifndef _IENTRYFD_
#include <ientryfd.hpp>
#endif

class NumOnlyKbdHandler;
#ifndef _PHONEPARSER_
#include "PhnPrser.hpp"
#endif

#ifndef _IRECT_
#include <irect.hpp>
#endif

class PhoneEntryConn0;
class PhoneEntryConn1;
class PhoneEntryConn2;
#include "PhnEntry.h"


/*----------------------------------------------------------------------------*/
/* Align classes on four byte boundary.                                       */
/*----------------------------------------------------------------------------*/
#pragma pack(4)

//*****************************************************************************
// Class definition for PhoneEntry
//*****************************************************************************
class PhoneEntry : public ISetCanvas, public IObserver {
public:
   //---------------------------------------------------------------------------
   // Constructors / destructors
   //---------------------------------------------------------------------------
   PhoneEntry(
      unsigned long id = WND_PhoneEntry,
      IWindow * parent = IWindow::desktopWindow(),
      IWindow * owner = 0,
      const IRectangle & rect = defaultFramingSpec(),
      const ISetCanvas::Style & style = ISetCanvas::defaultStyle());

   virtual  ~PhoneEntry();

   //---------------------------------------------------------------------------
   // public member functions
   //---------------------------------------------------------------------------
   static IRectangle defaultFramingSpec();
   virtual PhoneEntry & initializePart();
   PhoneEntry * getSetCanvas() { return this; };
   PhoneParser *  getphoneParser() const { return iphoneParser; };
   IEntryField *  getefAC() const { return iefAC; };

   //---------------------------------------------------------------------------
   // public member data
   //---------------------------------------------------------------------------
   static const INotificationId readyId;
   static const INotificationId phoneAsString;

protected:
   //---------------------------------------------------------------------------
   // protected member functions
   //---------------------------------------------------------------------------
   Boolean makeConnections();
   virtual IObserver & dispatchNotificationEvent(const INotificationEvent & anEvent);

private:
   //---------------------------------------------------------------------------
   // private member data
   //---------------------------------------------------------------------------
   IEntryField * itxt1;
   IEntryField * iefAC;
   NumOnlyKbdHandler * iefACNumOnlyKbdHandler;
   IEntryField * itxt2;
   IEntryField * iefPrefix;
   NumOnlyKbdHandler * iefPrefixNumOnlyKbdHandler;
   IEntryField * itxt3;
   IEntryField * iefPhNum;
   NumOnlyKbdHandler * iefPhNumNumOnlyKbdHandler;
   PhoneParser * iphoneParser;
   PhoneEntryConn0 * conn0;
   PhoneEntryConn1 * conn1;
   PhoneEntryConn2 * conn2;


};   //PhoneEntry


/*----------------------------------------------------------------------------*/
/* Resume compiler default packing.                                           */
/*----------------------------------------------------------------------------*/
#pragma pack()

#endif
