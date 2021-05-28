/*
 * CANID.cpp
 *
 *  Created on: 28 May 2021
 *      Author: Nutzer
 */

#include "CANID.hpp"
#include "main.h"


/**
 * @fn vecUsedCANIDs
 * @brief Collection of all used CAN IDs, used for several operations
 */
std::vector<const uint32_t> CANID::vecUsedCANIDs;


/**
 * @fn CANID
 * @brief Constructor for class CANID
 * @param cu32CANID: Contains the ID that should be set
 * @param ceCANIDSelect: Used for selection which ID should be set. Default STD_ID is selected
 */
CANID::CANID(const uint32_t cu32CANID, const eCANID_t ceCANIDSelect)
{
   _u32CAN_STDID = cu32InvalidID;
   _u32CAN_EXTID = cu32InvalidID;

   eSetID(cu32CANID, ceCANIDSelect);
}


/**
 * @fn ~CANID
 * @brief Destructor for class CANID
 */
CANID::~CANID()
{
}


/**
 * @fn u32GetID
 * @brief Getter method to return the ID
 * @param ceCANIDSelect: Used for selection which ID should be returned. Default STD_ID is selected
 */
uint32_t CANID::u32GetID(const eCANID_t ceCANIDSelect)
{
   switch(eCANIDSelect)
   {
      case eCANID_t::CAN_STD_ID:
         return _u32CAN_STDID;
      case eCANID_t::CAN_EXT_ID:
         return _u32CAN_EXTID;
      default:
         Error_Handler();
   }
}


/**
 * @fn eSetID
 * @brief Setter method to set a CAN ID
 * @param cu32CANID: Contains the ID that should be set
 * @param ceCANIDSelect: Used for selection which ID should be returned. Default STD_ID is selected
 */
eCANID_t eSetID(const uint32_t cu32CANID, const eCANID_t ceCANIDSelect)
{
   if(!_bIsIDAvailable(cu32CANID))
      return eCANID_t::CAN_ID_INVALID;

   switch(ceCANIDSelect)
   {
      case eCANID_t::CAN_STD_ID:
         _u32CAN_STDID = u32CANID;
      case eCANID_t::CAN_EXT_ID:
         _u32CAN_EXTID = u32CANID;
      default:
         Error_Handler();
   }

   vecUsedCANIDs.emplace_back(cu32CANID);

   return eCANID_t::CAN_ID_VALID;
}


/**
 * @fn bIsValidID
 * @brief Check if the ID was set or is default (==> invalid/not defined)
 * @param cu32CANID: Contains the ID that should be checked/validated
 */
bool bIsValidID(const uint32_t cu32CANID)
{
   return ((!_bIsIDAvailable(cu32CANID)) && (_cu32InvalidID != cu32CANID));
}


/**
 * @fn _bIsIDAvailable
 * @brief Check if the ID is already used or can be set
 * @param cu32CANID: Contains the ID that should be checked/validated
 */
bool _bIsIDAvailable(const uint32_t cu32CANID)
{
   for(const auto& crID : vecUsedCANIDs)
   {
      if(crID == cu32CANID)
         return false;
   }

   return true;
}
