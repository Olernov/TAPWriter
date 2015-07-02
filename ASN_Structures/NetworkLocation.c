/*
 * Generated by asn1c-0.9.26 (http://lionet.info/asn1c)
 * From ASN.1 module "TAP-0312"
 * 	found in "TAP3.12.asn1"
 */

#include "NetworkLocation.h"

static asn_TYPE_member_t asn_MBR_NetworkLocation_1[] = {
	{ ATF_POINTER, 4, offsetof(struct NetworkLocation, recEntityCode),
		(ASN_TAG_CLASS_APPLICATION | (184 << 2)),
		0,
		&asn_DEF_RecEntityCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"recEntityCode"
		},
	{ ATF_POINTER, 3, offsetof(struct NetworkLocation, callReference),
		(ASN_TAG_CLASS_APPLICATION | (45 << 2)),
		0,
		&asn_DEF_CallReference,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"callReference"
		},
	{ ATF_POINTER, 2, offsetof(struct NetworkLocation, locationArea),
		(ASN_TAG_CLASS_APPLICATION | (136 << 2)),
		0,
		&asn_DEF_LocationArea,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"locationArea"
		},
	{ ATF_POINTER, 1, offsetof(struct NetworkLocation, cellId),
		(ASN_TAG_CLASS_APPLICATION | (59 << 2)),
		0,
		&asn_DEF_CellId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"cellId"
		},
};
static ber_tlv_tag_t asn_DEF_NetworkLocation_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (156 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_NetworkLocation_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (45 << 2)), 1, 0, 0 }, /* callReference */
    { (ASN_TAG_CLASS_APPLICATION | (59 << 2)), 3, 0, 0 }, /* cellId */
    { (ASN_TAG_CLASS_APPLICATION | (136 << 2)), 2, 0, 0 }, /* locationArea */
    { (ASN_TAG_CLASS_APPLICATION | (184 << 2)), 0, 0, 0 } /* recEntityCode */
};
static asn_SEQUENCE_specifics_t asn_SPC_NetworkLocation_specs_1 = {
	sizeof(struct NetworkLocation),
	offsetof(struct NetworkLocation, _asn_ctx),
	asn_MAP_NetworkLocation_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_NetworkLocation = {
	"NetworkLocation",
	"NetworkLocation",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_NetworkLocation_tags_1,
	sizeof(asn_DEF_NetworkLocation_tags_1)
		/sizeof(asn_DEF_NetworkLocation_tags_1[0]) - 1, /* 1 */
	asn_DEF_NetworkLocation_tags_1,	/* Same as above */
	sizeof(asn_DEF_NetworkLocation_tags_1)
		/sizeof(asn_DEF_NetworkLocation_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_NetworkLocation_1,
	4,	/* Elements count */
	&asn_SPC_NetworkLocation_specs_1	/* Additional specs */
};
