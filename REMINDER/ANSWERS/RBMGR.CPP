/*******************************************************************************
* FILE NAME: RBMgr.cpp                                                         *
*                                                                              *
* DESCRIPTION:                                                                 *
*   Class implementation of the class:                                         *
*     RBMgr- Radio button manager                                              *
* ---------------------------------------------------------------------------- *
* Warning: This file was generated by the VisualAge C++ Visual Builder.        *
* Modifications to this source file will be lost when the part is regenerated. *
*******************************************************************************/
#ifndef _INOTIFEV_
#include <inotifev.hpp>
#endif

#ifndef _IOBSERVR_
#include <iobservr.hpp>
#endif

#ifndef _ISTDNTFY_
#include <istdntfy.hpp>
#endif

#ifndef _RBMGR_
#include "RBMgr.hpp"
#endif

#ifndef _IVBDEFS_
#include <ivbdefs.h>
#endif

#ifndef _ITRACE_
#include <itrace.hpp>
#endif


#pragma export (RBMgr::readyId)
const INotificationId RBMgr::readyId = "RBMgr::readyId";

//------------------------------------------------------------------------------
// RBMgr :: RBMgr
//------------------------------------------------------------------------------
#pragma export (RBMgr::RBMgr())
RBMgr::RBMgr()
{

   bStarted=false;
}     //end constructor


//------------------------------------------------------------------------------
// RBMgr :: ~RBMgr
//------------------------------------------------------------------------------
#pragma export (RBMgr::~RBMgr())
RBMgr::~RBMgr()
{

}

//------------------------------------------------------------------------------
// RBMgr :: initializePart
//------------------------------------------------------------------------------
#pragma export (RBMgr::initializePart())
RBMgr & RBMgr::initializePart()
{
   makeConnections();
   notifyObservers(INotificationEvent(readyId, *this));
   return *this;
}


//------------------------------------------------------------------------------
// RBMgr :: makeConnections
//------------------------------------------------------------------------------
#pragma export (RBMgr::makeConnections())
Boolean RBMgr::makeConnections()
{
   this->enableNotification();

   return true;
}


#include "RBMgr.cpv"
