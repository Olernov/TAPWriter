/*
 * Generated by asn1c-0.9.26 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP3.12.asn1"
 */

#ifndef	_TotalAdvisedChargeRefund_H_
#define	_TotalAdvisedChargeRefund_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AbsoluteAmount.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TotalAdvisedChargeRefund */
typedef AbsoluteAmount_t	 TotalAdvisedChargeRefund_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TotalAdvisedChargeRefund;
asn_struct_free_f TotalAdvisedChargeRefund_free;
asn_struct_print_f TotalAdvisedChargeRefund_print;
asn_constr_check_f TotalAdvisedChargeRefund_constraint;
ber_type_decoder_f TotalAdvisedChargeRefund_decode_ber;
der_type_encoder_f TotalAdvisedChargeRefund_encode_der;
xer_type_decoder_f TotalAdvisedChargeRefund_decode_xer;
xer_type_encoder_f TotalAdvisedChargeRefund_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _TotalAdvisedChargeRefund_H_ */
#include <asn_internal.h>