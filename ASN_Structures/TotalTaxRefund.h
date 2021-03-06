/*
 * Generated by asn1c-0.9.26 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP3.12.asn1"
 */

#ifndef	_TotalTaxRefund_H_
#define	_TotalTaxRefund_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AbsoluteAmount.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TotalTaxRefund */
typedef AbsoluteAmount_t	 TotalTaxRefund_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TotalTaxRefund;
asn_struct_free_f TotalTaxRefund_free;
asn_struct_print_f TotalTaxRefund_print;
asn_constr_check_f TotalTaxRefund_constraint;
ber_type_decoder_f TotalTaxRefund_decode_ber;
der_type_encoder_f TotalTaxRefund_encode_der;
xer_type_decoder_f TotalTaxRefund_decode_xer;
xer_type_encoder_f TotalTaxRefund_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _TotalTaxRefund_H_ */
#include <asn_internal.h>
