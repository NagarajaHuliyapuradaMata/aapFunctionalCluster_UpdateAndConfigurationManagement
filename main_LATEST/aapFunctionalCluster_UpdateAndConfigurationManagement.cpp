/******************************************************************************/
/* File   : aapFunctionalCluster_UpdateAndConfigurationManagement.cpp         */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "TypesStd.hpp"

#include "interface_UpdateAndConfigurationManagement_PackageManagement.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class aapFunctionalCluster_UpdateAndConfigurationManagement:
      public  interface_UpdateAndConfigurationManagement_PackageManagement
{
   public:
      void Activate                  (void);
      void Cancel                    (void);
      void DeleteTransfer            (void);
      void Finish                    (void);
      void GetHistory                (void);
      void GetId                     (void);
      void GetSwClusterChangeInfo    (void);
      void GetSwClusterInfo          (void);
      void GetSwClusterManifestInfo  (void);
      void GetSwPackages             (void);
      void GetSwProcessProgress      (void);
      void ProcessSwPackage          (void);
      void RevertProcessedSwPackages (void);
      void Rollback                  (void);
      void TransferData              (void);
      void TransferExit              (void);
      void TransferStart             (void);
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
void aapFunctionalCluster_UpdateAndConfigurationManagement::Activate(void){
}

void aapFunctionalCluster_UpdateAndConfigurationManagement::Cancel(void){
}

void aapFunctionalCluster_UpdateAndConfigurationManagement::DeleteTransfer(void){
}

void aapFunctionalCluster_UpdateAndConfigurationManagement::Finish(void){
}

void aapFunctionalCluster_UpdateAndConfigurationManagement::GetHistory(void){
}

void aapFunctionalCluster_UpdateAndConfigurationManagement::GetId(void){
}

void aapFunctionalCluster_UpdateAndConfigurationManagement::GetSwClusterChangeInfo(void){
}

void aapFunctionalCluster_UpdateAndConfigurationManagement::GetSwClusterInfo(void){
}

void aapFunctionalCluster_UpdateAndConfigurationManagement::GetSwClusterManifestInfo(void){
}

void aapFunctionalCluster_UpdateAndConfigurationManagement::GetSwPackages(void){
}

void aapFunctionalCluster_UpdateAndConfigurationManagement::GetSwProcessProgress(void){
}

void aapFunctionalCluster_UpdateAndConfigurationManagement::ProcessSwPackage(void){
}

void aapFunctionalCluster_UpdateAndConfigurationManagement::RevertProcessedSwPackages(void){
}

void aapFunctionalCluster_UpdateAndConfigurationManagement::Rollback(void){
}

void aapFunctionalCluster_UpdateAndConfigurationManagement::TransferData(void){
}

void aapFunctionalCluster_UpdateAndConfigurationManagement::TransferExit(void){
}

void aapFunctionalCluster_UpdateAndConfigurationManagement::TransferStart(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
