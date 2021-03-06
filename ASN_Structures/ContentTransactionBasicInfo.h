/*
 * Generated by asn1c-0.9.26 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP3.12.asn1"
 */

#ifndef	_ContentTransactionBasicInfo_H_
#define	_ContentTransactionBasicInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RapFileSequenceNumber.h"
#include "TotalTransactionDuration.h"
#include "TransactionStatus.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DateTime;

/* ContentTransactionBasicInfo */
typedef struct ContentTransactionBasicInfo {
	RapFileSequenceNumber_t	*rapFileSequenceNumber	/* OPTIONAL */;
	struct DateTime	*orderPlacedTimeStamp	/* OPTIONAL */;
	struct DateTime	*requestedDeliveryTimeStamp	/* OPTIONAL */;
	struct DateTime	*actualDeliveryTimeStamp	/* OPTIONAL */;
	TotalTransactionDuration_t	*totalTransactionDuration	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	TransactionStatus_t	*transactionStatus	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ContentTransactionBasicInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ContentTransactionBasicInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "OrderPlacedTimeStamp.h"
#include "RequestedDeliveryTimeStamp.h"
#include "ActualDeliveryTimeStamp.h"

#endif	/* _ContentTransactionBasicInfo_H_ */
#include <asn_internal.h>
