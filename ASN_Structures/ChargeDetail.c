/*
 * Generated by asn1c-0.9.26 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP3.12.asn1"
 */

#include "ChargeDetail.h"

static asn_TYPE_member_t asn_MBR_ChargeDetail_1[] = {
	{ ATF_POINTER, 5, offsetof(struct ChargeDetail, chargeType),
		(ASN_TAG_CLASS_APPLICATION | (71 << 2)),
		0,
		&asn_DEF_ChargeType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"chargeType"
		},
	{ ATF_POINTER, 4, offsetof(struct ChargeDetail, charge),
		(ASN_TAG_CLASS_APPLICATION | (62 << 2)),
		0,
		&asn_DEF_Charge,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"charge"
		},
	{ ATF_POINTER, 3, offsetof(struct ChargeDetail, chargeableUnits),
		(ASN_TAG_CLASS_APPLICATION | (65 << 2)),
		0,
		&asn_DEF_ChargeableUnits,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"chargeableUnits"
		},
	{ ATF_POINTER, 2, offsetof(struct ChargeDetail, chargedUnits),
		(ASN_TAG_CLASS_APPLICATION | (68 << 2)),
		0,
		&asn_DEF_ChargedUnits,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"chargedUnits"
		},
	{ ATF_POINTER, 1, offsetof(struct ChargeDetail, chargeDetailTimeStamp),
		(ASN_TAG_CLASS_APPLICATION | (410 << 2)),
		0,
		&asn_DEF_ChargeDetailTimeStamp,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"chargeDetailTimeStamp"
		},
};
static ber_tlv_tag_t asn_DEF_ChargeDetail_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (63 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ChargeDetail_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (62 << 2)), 1, 0, 0 }, /* charge */
    { (ASN_TAG_CLASS_APPLICATION | (65 << 2)), 2, 0, 0 }, /* chargeableUnits */
    { (ASN_TAG_CLASS_APPLICATION | (68 << 2)), 3, 0, 0 }, /* chargedUnits */
    { (ASN_TAG_CLASS_APPLICATION | (71 << 2)), 0, 0, 0 }, /* chargeType */
    { (ASN_TAG_CLASS_APPLICATION | (410 << 2)), 4, 0, 0 } /* chargeDetailTimeStamp */
};
static asn_SEQUENCE_specifics_t asn_SPC_ChargeDetail_specs_1 = {
	sizeof(struct ChargeDetail),
	offsetof(struct ChargeDetail, _asn_ctx),
	asn_MAP_ChargeDetail_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	4,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ChargeDetail = {
	"ChargeDetail",
	"ChargeDetail",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ChargeDetail_tags_1,
	sizeof(asn_DEF_ChargeDetail_tags_1)
		/sizeof(asn_DEF_ChargeDetail_tags_1[0]) - 1, /* 1 */
	asn_DEF_ChargeDetail_tags_1,	/* Same as above */
	sizeof(asn_DEF_ChargeDetail_tags_1)
		/sizeof(asn_DEF_ChargeDetail_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ChargeDetail_1,
	5,	/* Elements count */
	&asn_SPC_ChargeDetail_specs_1	/* Additional specs */
};

