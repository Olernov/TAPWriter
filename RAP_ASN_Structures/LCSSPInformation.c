/*
 * Generated by asn1c-0.9.26 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP-0312"
 */

#include "LCSSPInformation.h"

static asn_TYPE_member_t asn_MBR_LCSSPInformation_1[] = {
	{ ATF_POINTER, 3, offsetof(struct LCSSPInformation, lCSSPIdentificationList),
		(ASN_TAG_CLASS_APPLICATION | (374 << 2)),
		0,
		&asn_DEF_LCSSPIdentificationList,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"lCSSPIdentificationList"
		},
	{ ATF_POINTER, 2, offsetof(struct LCSSPInformation, iSPList),
		(ASN_TAG_CLASS_APPLICATION | (378 << 2)),
		0,
		&asn_DEF_ISPList,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"iSPList"
		},
	{ ATF_POINTER, 1, offsetof(struct LCSSPInformation, networkList),
		(ASN_TAG_CLASS_APPLICATION | (333 << 2)),
		0,
		&asn_DEF_NetworkList,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"networkList"
		},
};
static ber_tlv_tag_t asn_DEF_LCSSPInformation_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (373 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_LCSSPInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (333 << 2)), 2, 0, 0 }, /* networkList */
    { (ASN_TAG_CLASS_APPLICATION | (374 << 2)), 0, 0, 0 }, /* lCSSPIdentificationList */
    { (ASN_TAG_CLASS_APPLICATION | (378 << 2)), 1, 0, 0 } /* iSPList */
};
static asn_SEQUENCE_specifics_t asn_SPC_LCSSPInformation_specs_1 = {
	sizeof(struct LCSSPInformation),
	offsetof(struct LCSSPInformation, _asn_ctx),
	asn_MAP_LCSSPInformation_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LCSSPInformation = {
	"LCSSPInformation",
	"LCSSPInformation",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_LCSSPInformation_tags_1,
	sizeof(asn_DEF_LCSSPInformation_tags_1)
		/sizeof(asn_DEF_LCSSPInformation_tags_1[0]) - 1, /* 1 */
	asn_DEF_LCSSPInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_LCSSPInformation_tags_1)
		/sizeof(asn_DEF_LCSSPInformation_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_LCSSPInformation_1,
	3,	/* Elements count */
	&asn_SPC_LCSSPInformation_specs_1	/* Additional specs */
};
