/*
 * Generated by asn1c-0.9.26 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP3.12.asn1"
 */

#ifndef	_AccessPointNameOI_H_
#define	_AccessPointNameOI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AsciiString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AccessPointNameOI */
typedef AsciiString_t	 AccessPointNameOI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AccessPointNameOI;
asn_struct_free_f AccessPointNameOI_free;
asn_struct_print_f AccessPointNameOI_print;
asn_constr_check_f AccessPointNameOI_constraint;
ber_type_decoder_f AccessPointNameOI_decode_ber;
der_type_encoder_f AccessPointNameOI_encode_der;
xer_type_decoder_f AccessPointNameOI_decode_xer;
xer_type_encoder_f AccessPointNameOI_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _AccessPointNameOI_H_ */
#include <asn_internal.h>
