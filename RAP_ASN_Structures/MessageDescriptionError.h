/*
 * Generated by asn1c-0.9.26 (http://lionet.info/asn1c)
 * From ASN.1 module "RAP-0105"
 * 	found in "RAP_ASN_specification.txt"
 */

#ifndef	_MessageDescriptionError_H_
#define	_MessageDescriptionError_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MessageDescriptionInfoList.h"
#include "ErrorDetailList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MessageDescriptionError */
typedef struct MessageDescriptionError {
	MessageDescriptionInfoList_t	 messageDescriptionInfo;
	ErrorDetailList_t	 errorDetail;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MessageDescriptionError_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MessageDescriptionError;

#ifdef __cplusplus
}
#endif

#endif	/* _MessageDescriptionError_H_ */
#include <asn_internal.h>