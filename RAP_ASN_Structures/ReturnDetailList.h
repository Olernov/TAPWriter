/*
 * Generated by asn1c-0.9.26 (http://lionet.info/asn1c)
 * From ASN.1 module "RAP-0105"
 * 	found in "RAP_ASN_specification.txt"
 */

#ifndef	_ReturnDetailList_H_
#define	_ReturnDetailList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ReturnDetail;

/* ReturnDetailList */
typedef struct ReturnDetailList {
	A_SEQUENCE_OF(struct ReturnDetail) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReturnDetailList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReturnDetailList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ReturnDetail.h"

#endif	/* _ReturnDetailList_H_ */
#include <asn_internal.h>
