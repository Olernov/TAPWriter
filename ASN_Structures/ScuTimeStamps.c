/*
 * Generated by asn1c-0.9.26 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP3.12.asn1"
 */

#include "ScuTimeStamps.h"

static asn_TYPE_member_t asn_MBR_ScuTimeStamps_1[] = {
	{ ATF_POINTER, 3, offsetof(struct ScuTimeStamps, depositTimeStamp),
		(ASN_TAG_CLASS_APPLICATION | (88 << 2)),
		0,
		&asn_DEF_DepositTimeStamp,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"depositTimeStamp"
		},
	{ ATF_POINTER, 2, offsetof(struct ScuTimeStamps, completionTimeStamp),
		(ASN_TAG_CLASS_APPLICATION | (76 << 2)),
		0,
		&asn_DEF_CompletionTimeStamp,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"completionTimeStamp"
		},
	{ ATF_POINTER, 1, offsetof(struct ScuTimeStamps, chargingPoint),
		(ASN_TAG_CLASS_APPLICATION | (73 << 2)),
		0,
		&asn_DEF_ChargingPoint,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"chargingPoint"
		},
};
static ber_tlv_tag_t asn_DEF_ScuTimeStamps_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (193 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ScuTimeStamps_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (73 << 2)), 2, 0, 0 }, /* chargingPoint */
    { (ASN_TAG_CLASS_APPLICATION | (76 << 2)), 1, 0, 0 }, /* completionTimeStamp */
    { (ASN_TAG_CLASS_APPLICATION | (88 << 2)), 0, 0, 0 } /* depositTimeStamp */
};
static asn_SEQUENCE_specifics_t asn_SPC_ScuTimeStamps_specs_1 = {
	sizeof(struct ScuTimeStamps),
	offsetof(struct ScuTimeStamps, _asn_ctx),
	asn_MAP_ScuTimeStamps_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ScuTimeStamps = {
	"ScuTimeStamps",
	"ScuTimeStamps",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ScuTimeStamps_tags_1,
	sizeof(asn_DEF_ScuTimeStamps_tags_1)
		/sizeof(asn_DEF_ScuTimeStamps_tags_1[0]) - 1, /* 1 */
	asn_DEF_ScuTimeStamps_tags_1,	/* Same as above */
	sizeof(asn_DEF_ScuTimeStamps_tags_1)
		/sizeof(asn_DEF_ScuTimeStamps_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ScuTimeStamps_1,
	3,	/* Elements count */
	&asn_SPC_ScuTimeStamps_specs_1	/* Additional specs */
};
