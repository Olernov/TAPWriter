/*
 * Generated by asn1c-0.9.26 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP3.12.asn1"
 */

#ifndef	_NonChargedParty_H_
#define	_NonChargedParty_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NonChargedPartyNumber.h"
#include "NonChargedPublicUserId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NonChargedParty */
typedef struct NonChargedParty {
	NonChargedPartyNumber_t	*nonChargedPartyNumber	/* OPTIONAL */;
	NonChargedPublicUserId_t	*nonChargedPublicUserId	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NonChargedParty_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NonChargedParty;

#ifdef __cplusplus
}
#endif

#endif	/* _NonChargedParty_H_ */
#include <asn_internal.h>
