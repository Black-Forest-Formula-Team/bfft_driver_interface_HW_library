/*
 * CANID.hpp
 *
 *  Created on: 28 May 2021
 *      Author: Nutzer
 */

#ifndef APPLICATION_SOURCE_BFFT_CAN_CANID_HPP_
#define APPLICATION_SOURCE_BFFT_CAN_CANID_HPP_
#include <vector>

/**
 * @fn eCANID
 * @brief Several selectables and error codes for CANID
 */
typedef enum class eCANID
{
   CAN_STD_ID = 0u,
   CAN_EXT_ID,
   CAN_ID_VALID,
   CAN_ID_INVALID
} eCANID_t;


/**
 * @fn CANID
 * @brief Provision of various functionalities for CAN ID
 */
class CANID
{
// Attributes
private:
   const uint32_t _cu32InvalidID{0xFFFFFFFFu};
   uint32_t _u32CAN_STDID;
   uint32_t _u32CAN_EXTID;

public:
   static std::vector<const uint32_t> vecUsedCANIDs;

// Functions
private:
   CANID() = delete;
   bool _bIsIDAvailable(const uint32_t cu32CANID);

public:
	CANID(const uint32_t cu32CANID, const eCANID_t ceCANIDSelect = eCANID_t::CAN_STD_ID);
	CANID(const CANID& crCANID) = default;
	CANID(CANID&& crrCANID) = default;
	virtual ~CANID();

	uint32_t u32GetID(const eCANID_t ceCANIDSelect = eCANID_t::CAN_STD_ID);
	eCANID_t eSetID(const uint32_t cu32CANID, const eCANID_t ceCANIDSelect = eCANID_t::CAN_STD_ID);
	bool bIsValidID(const uint32_t cu32CANID);
};

#endif /* APPLICATION_SOURCE_BFFT_CAN_CANID_HPP_ */
