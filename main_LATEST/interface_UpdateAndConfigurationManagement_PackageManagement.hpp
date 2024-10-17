#pragma once
/******************************************************************************/
/* File   : interface_UpdateAndConfigurationManagement_PackageManagement.hpp  */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef unsigned char uint8;

class interface_UpdateAndConfigurationManagement_PackageManagement{
   public:
      uint8 CurrentStatus;

      virtual void Activate                  (void) = 0;
      virtual void Cancel                    (void) = 0;
      virtual void DeleteTransfer            (void) = 0;
      virtual void Finish                    (void) = 0;
      virtual void GetHistory                (void) = 0;
      virtual void GetId                     (void) = 0;
      virtual void GetSwClusterChangeInfo    (void) = 0;
      virtual void GetSwClusterInfo          (void) = 0;
      virtual void GetSwClusterManifestInfo  (void) = 0;
      virtual void GetSwPackages             (void) = 0;
      virtual void GetSwProcessProgress      (void) = 0;
      virtual void ProcessSwPackage          (void) = 0;
      virtual void RevertProcessedSwPackages (void) = 0;
      virtual void Rollback                  (void) = 0;
      virtual void TransferData              (void) = 0;
      virtual void TransferExit              (void) = 0;
      virtual void TransferStart             (void) = 0;
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
