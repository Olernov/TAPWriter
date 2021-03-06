/*
 * Generated by asn1c-0.9.26 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP3.12.asn1"
 */

#ifndef	_ActualDeliveryTimeStamp_H_
#define	_ActualDeliveryTimeStamp_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DateTime.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ActualDeliveryTimeStamp */
typedef DateTime_t	 ActualDeliveryTimeStamp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ActualDeliveryTimeStamp;
asn_struct_free_f ActualDeliveryTimeStamp_free;
asn_struct_print_f ActualDeliveryTimeStamp_print;
asn_constr_check_f ActualDeliveryTimeStamp_constraint;
ber_type_decoder_f ActualDeliveryTimeStamp_decode_ber;
der_type_encoder_f ActualDeliveryTimeStamp_encode_der;
xer_type_decoder_f ActualDeliveryTimeStamp_decode_xer;
xer_type_encoder_f ActualDeliveryTimeStamp_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _ActualDeliveryTimeStamp_H_ */
#include <asn_internal.h>
