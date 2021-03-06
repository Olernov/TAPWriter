/*
 * Generated by asn1c-0.9.26 (http://lionet.info/asn1c)
 * From ASN.1 module "RAP-0105"
 * 	found in "RAP_ASN_specification.txt"
 */

#ifndef	_LastSeqNumber_H_
#define	_LastSeqNumber_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FileSequenceNumber.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LastSeqNumber */
typedef FileSequenceNumber_t	 LastSeqNumber_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LastSeqNumber;
asn_struct_free_f LastSeqNumber_free;
asn_struct_print_f LastSeqNumber_print;
asn_constr_check_f LastSeqNumber_constraint;
ber_type_decoder_f LastSeqNumber_decode_ber;
der_type_encoder_f LastSeqNumber_encode_der;
xer_type_decoder_f LastSeqNumber_decode_xer;
xer_type_encoder_f LastSeqNumber_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _LastSeqNumber_H_ */
#include <asn_internal.h>
